
#include "Stdafx.h"

#pragma region WinAPI
/*
▶ API(Application Programming Interface)

 - 운영체제가 응용 프로그램 개발을 위해 제공하는 함수의 집합이라고 할 수 있다.

 - 명령어의 집합으로 어플리케이션 프로그램에서 오퍼레이팅 시스템의 기본적인 기능을 사용할 필요가 있을 경우
 API에서 명령어 호출이 진행된다.

 EX)
 하드웨어 ------------------운영체제(Windows) ----------------응용 프로그램
(API 함수)

○ 장점
 - 운영체제가 같으면 같은 기능의 집합을 사용하기에 확장성 및 연동성 / 그리고 유지보수에 매우 유리하다.
 ㄴ윈도우즈 != 리눅스

○ 단점
 - 사용하는 프로그래머의 역량에 따라 플랫폼에 대한 고착화가 발생할 수 있다. (WinAPI)
 ㄴ C언어로 개발된 플랫폼의 한계점을 극복하지 못한다는 프로그래머의 모순

 - 이는 대부분의 타 라이브러리 확장으로 해결은 되지만 프로그래머의 역량을 많이 요구하기 때문에 이는 사람 입장에서는
  단점이라고 할 수 있다.

 ▷ API 구조
  - 크게 3가지만 기억하면 OK
  ㄴ 진입점 / 루프(메세지) / Window Procedure

*/
#pragma endregion




/*
 - 인스턴스
  ㄴ 윈도우 OS가 현재 실행되고 있는 프로그램을 확인하기 위한 값
  ㄴ 같은 프로그램이면 일반적으로 같은 인스턴스 값을 가진다.
  ㄴ 클래스가 메모리에 실제로 구현된 실체
  ㄴ 실행되고 있는 각각의 프로그램들
*/

//전역변수
HINSTANCE _hInstance;
HWND _hWnd;
POINT _ptMouse = { 0,0 };



// 윈도우 타이틀
LPTSTR _lpszClass = TEXT("Windows API");
//TCHAR* pszString = _T("Windows API");
// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:

/*
▶ TCHAR
 - 이 자료형은 프로젝트 문자셋 설정에 따라 자동적으로 변환을 해주는 중간 매크로 자료형
  ㄴ Type Casting을 유발하며 char 또는 wchar_t로 변환한다.

 - 멀티와 유니 환경에서 별도의 수정 작업 없이 프로그램을 구동하기 위해서는 TCHAR형으로 문자열을 표현하는 것을
 권장한다.

 - 윈도우 어플리케이션을 사용하는 프로그램부터는 응용 프로그램에서 문자열 상수를 쓰기 위해서는 중간 설정에 따라
 char*-> wchar_t*로 변환을 해주는 _T 매크로도 유효하다.


LPSTR = char*
LPCSTR = const char*
LPCTSTR = const tchar*


LPCSTR script1 = "ABC";
LPCWSTR script2 = L"ABC"; //W는 월드와이드 /멀티 ///L은 유니코드를 뜻함
TCHAR* script3 = _T("ABC"); //컴퓨터가 알아서 멀티와 유니를 변환해주기때문에 절차가 들어가서 느림
 */

 //콜백 함수
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void SetWindowSize(int x, int y, int width, int height);

RECT rc;

/*
hInstance : 프로그램 인스턴스 핸들
hPrevInstance : 이전에 실행된 인스턴스 핸들
lpszCmdParam : 명령형으로 입력된 프로그램 인자(수)
nCmdShow : 프로그램이 시작될 형태 (최소화 / 보통 크기 등등...)
*/
int APIENTRY WinMain(HINSTANCE hInstance, //진입점 , wWinMain에서 w뺐음 / 월드와이드 기반 약자w 
    HINSTANCE hPrevInstance,
    LPSTR    lpszCmdParam,
    int       nCmdShow)
{
    _hInstance = hInstance;

    /*
    WinMain 역할
    ㄴ 1. 윈도우 창을 세팅 후 화면에 띄우기
        ㄴ 화면에 창을 띄우기 위해서는 4가지 처리가 선행
    ㄴ 2. 메세지 루프

    */

    // 1-1. 윈도우창 구조체 선언 및 초기화
    WNDCLASS wndClass; //WNDCLASSEX에서 EX는 확장을 의미함
    wndClass.cbClsExtra = 0; //클래스에대한 추가메모리를 할당한건가?  //클래스 여분 메모리
    wndClass.cbWndExtra = 0;////윈도우 여분 메모리
    wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); //배경색에 관련된것 //백그라운드
    wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);        //마우스 커서
    wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION); //게임 실행할때 위쪽표시줄 왼쪽 아이콘
    wndClass.hInstance = hInstance;                          //소유한 식별자 정보
    wndClass.lpfnWndProc = (WNDPROC)WndProc; //외워 롱포인터 펑셔널 넘버링 0번으로 매핑 될거기때문에 일반적으로는 건들지 않아도 됨 //윈도우 프로시져
    wndClass.lpszClassName = WINNAME;  //클래스 이름
    wndClass.lpszMenuName = NULL;             //메뉴이름
    wndClass.style = CS_HREDRAW | CS_VREDRAW; //도구상자 뜻함 오른쪽 상단  //윈도우 스타일



    // 1-2. 윈도우 클래스 등록
    RegisterClass(&wndClass);


    // 1-3. 화면에 보여줄 윈도우 창 생성
    _hWnd = CreateWindow
    (
        WINNAME,                //윈도우 클래스 식별자
        WINNAME,                //윈도우 타이틀 바 이름
        WINSTYLE,        //윈도우 스타일
        WINSTART_X,                       //윈도우 화면 X 좌표
        WINSTART_Y,                       //윈도우 화면 Y 좌표
        WINSIZE_X,                       //윈도우 화면 가로크기
        WINSIZE_Y,                       //윈도우 화면 세로크기
        NULL,                      //부모 윈도우 GetDesktopWindow()도 가능 창을 여러개 쓸수있음
        (HMENU)NULL,               //메뉴 핸들
        hInstance,                 //인스턴스 지정
        NULL                       //윈도우의 자식 윈도우를 생성하면 지정 / NULL //부모윈도우와 자식윈도우를 연결시켜주는 것
    );


    // 1-4. 화면에 윈도우창 보여주기
    ShowWindow(_hWnd, nCmdShow);



    // MSG: 운영체제에서 발생하는 메세지 정보를 저장하기 위한 구조체
    MSG message;
    //ZeroMemory(&message, sizeof(message));


    //★★★★★
    //2. 기본 메세지 루프
    // - GetMessage : 메세지를 꺼내올 수 있을때까지 대기
    // ㄴ 메세지 큐로부터 하나의 메세지를 가져오는 역할을 수행한다.
    // ㄴ 다만 메시지 큐가 비어있을 경우 메세지가 들어올때까지 대기

    // - PeekMessage : 메세지가 없더라도 반환이 된다.

    //while (true)
    //{
    //    if (PeekMessage(&message, NULL, 0, 0, PM_REMOVE)) //고성능 타이머랑 같이 써야한다. peekmessage는 기본적으로 느리기때문에 레이싱게임 같은경우
    //                                                      //플레이어가 지나가는지 체크가 누락되는 버그가 발생할 수 있음
    //    {
    //        if (message.message == WM_QUIT)break;
    //        TranslateMessage(&message);
    //        DispatchMessage(&message);
    //    }
    //}
    while (GetMessage(&message, 0, 0, 0))
    {

        TranslateMessage(&message);
        DispatchMessage(&message);
    }

    /*
    TranslateMessage : 키보드의 입력 메세지 처리를 담당한다. 입력된 키가 문자 키인지 확인하고 대문자 혹은 소문자,
    한글, 영문인지에 대한 WM_CHAR 메세지를 발생 시킨다.

    DispatchMessage : 윈도우 프로시저에서 전달된 메세지를 실제 윈도우로 전달한다.*/


    return message.wParam;
}

//윈도우 프로시저
// hWnd:어느 윈도우에서 발생한 메세지인지 구분
// iMessage : 메세지 구분 번호
// wParam : unsigned int 마우스 버튼의 상태 / 키보드 조합 키의 상태를 전달한다.
// lParam : unsigned long 마우스 클릭 좌표를 전달
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam) //Windowprocedure
{
    /*
    Window Procedure

     - 메세지를 운영체제에 전달 -> 운영체제는 강제로 호출이 된다.
        ㄴ WinMain이 아닌 운영체제에 의해 호출이 되는 콜백 함수라고 할 수 있다.
        ㄴ 윈도우를 생성할때는 반드시 지정을 해주어야 한다.

     - 윈도우 프로시저 내부에서는 윈도우에서 발생한 모든 메세지를 처리하는 것이 아니라 특정 메세지만 처리하고
     나머지 메세지는 DefWindowProc 함수가 처리하도록 로직을 설계하는 것이 일반적

     점프 누르면 점프가 컴파일러에 다른일하던중에도 윈도우를 강제로 호출해서 리턴값을 주는 것
    */
    //GDI
    // BMP/PNG/JPG
    // BMP - 화소가 높다, 용량이 크다, RGBA중 A(투명도)의 부재로 보간이 없다. 회전에 문제가 많을 수 있다. 원색이 강한거를 BMP로하면 좋음
    // GDI+
    // A를 추가하였음(지원은하나 라이브러리 함수를 지원하지 않아 만들어 써야함)
    //★★★★★
    HDC hdc;
    PAINTSTRUCT ps;

    //차이에 대해서 조사
    //ㄴ char[]
    //ㄴ char*

    //RECT : 사각형의 좌표를 저장하기 위한 자료형
    // // ㄴ 시작점 SX, SY (L, T) / 끝점 EX, EY (R, B)가 존재한다.
    // 게임의 배경화면 가변적이면 *LPRECT , 정해진 크기면*PRECT
    //RECT rc = { 100, 100, 200, 200 };
    

    switch (iMessage)
    {
    case WM_CREATE: //생성자랑 동일
        rc = RectMakeCenter(400, 400, 100, 100);

        break;
        /*
        · WM_PAINT

         - 윈도우를 다시 그려야 할때 발생하는 메세지
         ㄴ 윈도우가 처음 만들어 졌을때 발생한다.
         ㄴ 윈도우 크기를 조절할때
         ㄴ 윈도우가 다른 윈도우에 가려졌다가 다시 보일때
         ㄴ 관련 함수가 호출될때
        
        
        */
        //출력에 관한 모든 것을 담당한다.(문자, 그림, 도형 등등 화면에 보이는 모든 것)


    case WM_PAINT:
    
       
       hdc = BeginPaint(hWnd, &ps);

       Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);

       DrawRectMake(hdc, rc);

//       SetPixel(hdc, 300, 200, RGB(255, 0, 0));
//
//       for (int i = 0; i < 10000; i++)
//       {
//           SetPixel(hdc, rand()%800, rand() % 800, RGB(rand() % 255, rand() % 255, rand() % 255));
//       }
//       
//       for (int i = 0; i < 100; i++)
//       {
//           for (int j = 0; j < 100; j++)
//           {
//               SetPixel(hdc, 400 + i, 300 + j, RGB(255, i*2, j*2));
//           }
//       }
//
////windowapi 는 좌상단에서 좌표를 시작. 데카르트 좌표
////삼각형 : 애매
//// 사각형 : 최고
////원 : 죄악(필요악) 코스트가 많이든다.
////다각형 : 애매
//       // 원그리기
//       Ellipse(hdc, 300, 100, 200, 200);
//       //사각형
//       Rectangle(hdc, 100, 100, 200, 200);
//       //우리는 변수로 응용해야하기때문에 아래와 같이씀
//       Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);
//       //폴리곤을 통해 삼각형과 다각형도 구현이 가능하다.
//       /*
//       멀티바이트->유니코드 ->tchar
//       strlen->wcslen -> _tcslen
//       strcpy->wcscpy -> _tcscpy
//       strcmp->...
//       strcat->...
//       +
//       strtok->... 문자열 자르기
//             
//       //API
//       strchr->... 문자 찾기
//       strstr->... 문자열 찾기
//       
//       */
//       /*메모리버퍼를 체크할수있냐 없냐
//       strnlen()
//       strlen_s()
//       */
//
//       //문자열 / 문자열 길이 //오버플로우가 발생할때 참조하고있거나 가리키고있으면 터짐, 참조하지않으며 뚫깗뗇칣 나옴)
//       // ㄴ strlen() 할당 받은 메모리에 바인딩 된 문자열에서 NULL 값을 제외한 문자열 길이
//       TextOut(hdc, 300, 300, "과제가 너무 재밌다^^", strlen("과제가 너무 재밌다^^"));
//
//       SetTextColor(hdc, RGB(255, 0, 0));
//       TextOut(hdc, 300, 400, "더 많은 과제가 필요하다.", strlen("더 많은 과제가 필요하다."));
//
//
//       MoveToEx(hdc, 400, 400, NULL);
//       LineTo(hdc, 200, 400);
//
//       MoveToEx(hdc, 400, 400, NULL);
//       LineTo(hdc, 200, 400);
//

        EndPaint(hWnd, &ps);
        break;
    case WM_LBUTTONDOWN:
    hdc = GetDC(hWnd);

    SetTextColor(hdc, RGB(0, 0, 255));
    TextOut(hdc, 350, 500,str, strlen(str));

    ReleaseDC(hWnd, hdc);
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
        //PostQuitMessage : 이 함수는 메세지 큐에 QUIT 메세지를 보내는 역할을 수행
        // QUIT 메세지를 수신하는 순간 GetMessage가 FALSE를 반환하므로 메세지 루프는 종료된다.
        // In reads 들어와서 읽기만 해라 참조나 포인터 걸지마라 out reads는 읽기전용
        PostQuitMessage(0);
        return 0;

    }
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));

}

void SetWindowSize(int x, int y, int width, int height)
{
    RECT rc = { 0,0,width, height };
    //실제 윈도우 크기 조정
    //AdjustWindowRect(): RECT 구조체, 원스타일, 메뉴여부
    AdjustWindowRect(&rc, WINSTYLE, false);

    //렉트의 정보로 윈도우 사이즈 세팅
    SetWindowPos(_hWnd, NULL,
        x, y,
        (rc.right - rc.left), //cx
        (rc.bottom - rc.top), //cy
        SWP_NOZORDER | SWP_NOMOVE); //zoder 랜더링 관련 피사체들이 겹쳐졌을때의 랜더링 어떤걸 더 우선순위로 표현할 것인가
    // move로 하면 해상도에 따라 ui가 안맞춰질 수 있음
}

/*
타임어택. 윈도우 창 만들기

- 시간은 10분
- 외워서 다 작성하기

- 실패시 깜지 ->못한 인원 x 2


한줄 조사.

 - 노트에 열심히 적어온다.(+공부)
 ㄴ CallBack Function, DC, GetDC / ReleaseDC, BeginPaint / EndPaint, WM_PAINT, PAINTSTRUCT

*/




//2일차 과제
//과제1. winAPI 출력
/* -MotoEx() + LineTo()를 이용할 것
 - 자기 이름 출력 (한글) + UnrealEngine (영문)
     ㄴ크기는 800x800 기준 화면에 절반을 채우는 크기로 양분할 것

 - 마우스 왼쪽을 누르면 한글자씩 출력이 되고 우클릭을 하면 한글자씩 지워진다. 이름만
 
 ※도형 관련 함수 사용 금지


 과제2. 구구단

  - 예외처리 필수
  ㄴ 구구단의 본질 (1단이하x /9단 이상x)
  
  - 마우스 왼쪽 클릭을 했을 시 1단씩 출력이 되고 우클릭을 하면 1단씩 지워진다.

  - 그리고 3단계마다 개행을 한다.


  금요일까지
  과제3. 애플 로고 출력

   - SetPixel()을 이용해서 만든다.
   - 근성 ok / 반복문 ok / 꼼수 x
   
   반복문과제들임 다..

   한줄조사.
   -SetTimer
   -KillTimer
   -InvalidateRect (과제1번과 2번관련있음)

 */

/*
3일차 과제
과제1. 오망성 출력

 - 오망성을 마법진처럼 출력

 - 양식 및 사용 문법은 본인 자유지만 삼각 함수 x

과제2. 사각형 2개 움직이기
 - 총 사각형 갯수 : 2개
  - 하나는 움직일 수 있는 사각형 / 다른 하나는 움직일 수 없는 사각형
 - 움직일 수 없는 사각형을 움직일수있는 사각형이 밀어낼 수 있으면 된다.

 예외처리
 ㄴ 1. 2개의 사각형은 화면 밖으로 나갈 수 없다.
 ㄴ 2. 2개의 사각형을 초기 위치로 돌리는 기능도 추가한다.

※별다른 언급을 하기전에는 충돌 함수를 사용하지 말 것
조건식으로 면을 비교하면 된다. 왼쪽네모의 라이트 가 오른쪽 네모의왼쪽x좌표를 넘지않는느낌

다음주 월요일
과제3. 사각형 영혼 밀어넣기

 - 시작은 큰 사각형 2개와 작은 사각형 1개

 - 내가 움직일 수 있는 사각형 안에는 작은 사각형이 있다.

 - 사각형을 움직이면 작은 사각형 역시 움직이거나 / 큰 사각형에 끌려가야 한다.
 ㄴ 끌려가는 것을 추천

 -예외처리 : 작은 사각형은 큰 사각형을 벗어날 수 없다.
 
 -큰 사각형끼리 충돌이 되면 작은 사각형은 충돌이된 반대편 사각형으로 이동한다.

 ※ 이때 움직일수있는 주도권은 작은 사각형을 소유하고 있는 큰 사각형

 ※모서리에 대한 예외처리 수행할 것

*/
