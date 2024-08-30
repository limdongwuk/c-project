#include "Stdafx.h"
#include <windowsx.h> //마우스 값이 튀면 써야함

// 전역변수
HINSTANCE _hInstance;
HWND _hWnd;
POINT _ptMouse = { 0,0 };

// 윈도우 타이틀
LPTSTR _lpszClass = TEXT("Windows API");

// 콜백 함수
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void SetWindowSize(int x, int y, int width, int height);

RECT rc;
RECT _rc1, _rc2;

int centerX;
int centerY;

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow)
{
    _hInstance = hInstance;

    WNDCLASS wndClass;
    wndClass.cbClsExtra = 0;
    wndClass.cbWndExtra = 0;
    wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndClass.hInstance = hInstance;
    wndClass.lpfnWndProc = (WNDPROC)WndProc;
    wndClass.lpszClassName = WINNAME;
    wndClass.lpszMenuName = NULL;
    wndClass.style = CS_HREDRAW | CS_VREDRAW;

    RegisterClass(&wndClass);

    _hWnd = CreateWindow(
        WINNAME,
        WINNAME,
        WINSTYLE,
        WINSTART_X,
        WINSTART_Y,
        WINSIZE_X,
        WINSIZE_Y,
        NULL,
        (HMENU)NULL,
        hInstance,
        NULL
    );

    SetWindowSize(WINSTART_X, WINSTART_Y, WINSIZE_X, WINSIZE_Y);

    ShowWindow(_hWnd, nCmdShow);

    MSG message;
    while (GetMessage(&message, 0, 0, 0))
    {
        TranslateMessage(&message);
        DispatchMessage(&message);
    }

    return message.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
    HDC hdc;
    PAINTSTRUCT ps;

    static POINT pt = { 0,0 };
    char strPT[128];
    

    switch (iMessage)
    {
    case WM_CREATE:
        rc = RectMakeCenter(400, 400, 100, 100);
        
        _rc1 = RectMakeCenter(WINSIZE_X / 2 + 200, WINSIZE_Y/2, 100, 100); // 600, 400 ,100, 100
        _rc1 = RectMakeCenter(WINSIZE_X / 2 , WINSIZE_Y/2, 100, 100);  // 400, 400, 100, 100

        centerX = WINSIZE_X / 2;
        centerY = WINSIZE_Y / 2;
          
        break;

    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);

        wsprintf(strPT, "X: %d         Y: %d", pt.x, pt.y); //숫자를 문자열로 출력할때 쓴다.
        TextOut(hdc, 10, 10, strPT, strlen(strPT));

        Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);
        DrawRectMake(hdc, rc);

        Rectangle(hdc, _rc1.left, _rc1.top, _rc1.right, _rc1.bottom);
        Rectangle(hdc, _rc2.left, _rc2.top, _rc2.right, _rc2.bottom);
        EllipseMakeCenter(hdc, WINSIZE_X / 2, WINSIZE_Y / 2, 100, 100);

        Rectangle(hdc, centerX, centerY, 100, 100);



        EndPaint(hWnd, &ps);
        break;

    case WM_MOUSEMOVE:
        pt.x = LOWORD(lParam);
        pt.y = HIWORD(lParam);

        //pt.x = GET_X_LPARAM(lParam);
        
        InvalidateRect(hWnd, NULL, true);
        break;

    case WM_LBUTTONDOWN:
        centerX = RND->getInt(WINSIZE_X);
        centerY = RND->getInt(WINSIZE_Y);
       
        InvalidateRect(hWnd, NULL, true);
     
        break;

    case WM_RBUTTONDOWN:
        break;

    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_LEFT:
            break;
        case VK_RIGHT:
            break;
        case VK_ESCAPE:
            PostMessage(hWnd, WM_DESTROY, 0, 0);
            break;
        }
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));
}

void SetWindowSize(int x, int y, int width, int height)
{
    RECT rc = { 0,0,width, height };
    AdjustWindowRect(&rc, WINSTYLE, false); //라이브러리 함수
    //실제 윈도우 크기 조정
    //AdjustWindowRect(): RECT 구조체, 원스타일, 메뉴여부
    SetWindowPos(_hWnd, NULL,
        x, y,
        (rc.right - rc.left), //cx
        (rc.bottom - rc.top), //cy
        SWP_NOZORDER | SWP_NOMOVE); //zoder 랜더링 관련 피사체들이 겹쳐졌을때의 랜더링 어떤걸 더 우선순위로 표현할 것인가
    // move로 하면 해상도에 따라 ui가 안맞춰질 수 있음
}

//비선형구조와 선형구조
//레드블랙트리
/*
과제1. 사각형 4단 밀기

 - 사각형의 갯수는 총 4개

 - 마우스로 화면에 그려진 4개의 사각형중 아무거나 선택해 자유롭게 움직일 수 있어야 한다.
 
 - 움직임도 가능하고 크기 또한 조절이 가능해야 함
 ㄴ 마우스 왼쪽버튼(이동)/오른쪽 버튼(크기조절)
 ㄴ settimer killtimer 사용하여 자연스럽게 
 ㄴ ptxy가 사각형 안에 들어오는지 확인하는게 힌트

 - 마우스로 움직이고 있는 사각형이 다른 사각형과 충돌되면 충돌된 사각형 "자연스럽게" 밀려난다.

 ※ 충돌 함수 사용 금지



과제2. 마우스로 무작위 도형 출력

 - 마우스로 클릭한 좌표에 무작위 도형을 출력한다.
 
 - 도형의 크기 + 도형의 모양 + 도형의 종류까지 무작위로 설정

 - 도형의 종류 : 사각형 / 원 / 삼각형 / 선택 : 다각형

 - 삼각형 / 다각형 -> Polygon() 쓰면 할 수있음

다음주 화요일까지
과제3. 내 얼굴 그려오기
 
 - 도형을 통해 과제를 해올 것(베이스만 도형이지 다른거 써도됨)
 - 지금 버전으로 해올것


 도전 과제1. 도형 회전

 - 사각형을 회전 시킨다.
 - 외부 라이브러리 x / 외부 문법 x/순수 API로만 구현할 것
 - hdc를 반드시 사용해야 하고 Rectangle() 꼭 사용해야 한다.
 - 회전축이 바뀐 상태면 상대 좌표로 이동하게 구현을 해오면 깔끔
 - 벡터를 할줄알면 할 수 있음 꼭지점으로는 불가능함.
 - 키보드 좌우로 돌리고 앞뒤로 움직인다. 로직이 짧다.

 한줄조사.

 - GetAsyncKeyState()
 - 상태 값 -> 4가지에 대해 조사
 - 명확하게 보고싶으면 &
*/