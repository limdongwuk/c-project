#include <Windows.h>
#include <tchar.h>
#include <cmath>
#include "Stdafx.h"
#include "CommonMacroFunction.h"


HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

void SetWindowSize(int x, int y, int width, int height);

int APIENTRY WinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdParam,
    int nCmdShow)
{
    _hInstance = hInstance;
    WNDCLASS WndClass;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
    WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    WndClass.hInstance = hInstance;
    WndClass.lpfnWndProc = (WNDPROC)WndProc;
    WndClass.lpszClassName = _lpszClass;
    WndClass.lpszMenuName = NULL;
    WndClass.style = CS_HREDRAW | CS_VREDRAW;

    RegisterClass(&WndClass);
    _hWnd = CreateWindow(_lpszClass, _lpszClass, WS_OVERLAPPEDWINDOW, 400, 100,
        800, 800, NULL, (HMENU)NULL, hInstance, NULL);
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
    static int Px = 300;
    static int Py = 400;
    static int Pwidth = 200;
    static int Pheight = 200;
    static int Bx = 300;
    static int By = 400;
    static int Bwidth = 100;
    static int Bheight = 100;
    static int Cx = 600;
    static int Cy = 400;
    static int Cwidth = 200;
    static int Cheight = 200;
    static bool LeaderCheck = true;

    RECT player_rc = RectMakeCenter(Px, Py, Pwidth, Pheight);
    RECT belong_rc = RectMakeCenter(Bx, By, Bwidth, Bheight);
    RECT com_rc = RectMakeCenter(Cx, Cy, Cwidth, Cheight);

    switch (iMessage)
    {
    case WM_CREATE:
        break;



    case WM_PAINT:
 

        hdc = BeginPaint(hWnd, &ps);
        DrawRectMake(hdc, player_rc);
        DrawRectMake(hdc, com_rc);
        DrawRectMake(hdc, belong_rc);
        
       
        EndPaint(hWnd, &ps);

        break;


    case WM_LBUTTONDOWN:

        break;

   
    case WM_RBUTTONDOWN:


        break;

    case WM_KEYDOWN:
        
        switch (wParam)
        {
        case VK_LEFT:

            switch (LeaderCheck)
            {
            case 1: //주도권 :플레이어
                Px -= 10;
                if (player_rc.right <= belong_rc.right)
                    Bx -= 10;
                if (player_rc.left <= 0)
                {
                    Px = 100;
                }
               
                if (com_rc.right >=player_rc.left&&com_rc.top<player_rc.bottom &&player_rc.top <com_rc.bottom
                    &&player_rc.right>com_rc.right&&player_rc.right>com_rc.left&&com_rc.left<player_rc.left)
                {   
                    Bx = Cx;
                    By = Cy;
                    Px = Cx + 200;
                    LeaderCheck = false;
                }
                break;
            case 0: //주도권 :컴퓨터
                Cx -= 10;
                if (com_rc.right <= belong_rc.right)
                    Bx -= 10;
                if (com_rc.left <= 0)
                {
                    Cx = 100;
                }
                if (player_rc.right >= com_rc.left && player_rc.bottom >com_rc.top&& player_rc.top<com_rc.bottom && 
                    com_rc.right>player_rc.right && player_rc.left<com_rc.right &&player_rc.left<com_rc.left)
                {
                    Bx = Px; 
                    By = Py;
                    Cx = Px + 200;
                    LeaderCheck = true;
                }
                break;
            }

           
            
            break;
        case VK_RIGHT:
            
            switch (LeaderCheck)
            {
            case 1:
                Px += 10;
                if (player_rc.left >= belong_rc.left) //플레이어 왼쪽과 소유블록 겹칠때
                    Bx += 10;

                if (player_rc.right >= 800)
                {
                    Px = 700;
                }
                if (player_rc.right >= com_rc.left && com_rc.top < player_rc.bottom && player_rc.top < com_rc.bottom && 
                    player_rc.left<com_rc.right&&player_rc.left<com_rc.left&&player_rc.right<com_rc.right) // 플레이어 오른쪽과 컴퓨터왼쪽 부딛힐때
                {
                    Bx = Cx;
                    By = Cy;
                    Px = Cx - 200;
                    LeaderCheck = false;
                }

               
                break;
            case 0:
                Cx += 10;
                if (com_rc.left >= belong_rc.left)
                    Bx += 10;

                if (com_rc.right >= 800)
                {
                    Cx = 700;
                }
                if (com_rc.right >= player_rc.left && com_rc.top < player_rc.bottom && player_rc.top < com_rc.bottom&&
                    com_rc.left<player_rc.right &&com_rc.left<player_rc.left&&com_rc.right<<player_rc.right)
                {
                    Bx = Px;
                    By = Py;
                    Cx = Px - 200;
                    LeaderCheck = true;
                }
                
                   
                break;
            }
           
            break;
        case VK_UP:
            switch (LeaderCheck)
            {
            case 1:
                Py -= 10;
                if (player_rc.bottom <= belong_rc.bottom) //플레이어 왼쪽과 소유블록 겹칠때
                    By -= 10;
                if (player_rc.top <= 0)
                {
                    Py = 100;
                }
                if (player_rc.top <= com_rc.bottom && player_rc.right>com_rc.left && com_rc.right >player_rc.left&&
                    com_rc.top<player_rc.top&&com_rc.top<player_rc.bottom&&com_rc.bottom<player_rc.bottom) // 플레이어 오른쪽과 컴퓨터왼쪽 부딛힐때
                {
                    Bx = Cx;
                    By = Cy;
                    Py = Cy + 200;
                    LeaderCheck = false;
                }

                break;
            case 0:
                Cy -=10;
                if (com_rc.bottom <= belong_rc.bottom)
                    By -= 10;
                if (com_rc.top <= 0)
                {
                    Cy = 100;
                }
                if (com_rc.top <= player_rc.bottom && player_rc.right > com_rc.left && com_rc.right > player_rc.left&&
                    player_rc.top < com_rc.top && player_rc.top < com_rc.bottom && player_rc.bottom < com_rc.bottom)
                {
                    Bx = Px;
                    By = Py;
                    Cy = Py + 200;
                    LeaderCheck = true;
                }
            }
           
           /* Py -= 5;
            if (player_rc.bottom < belong_rc.bottom)
                By -= 5;*/
            break;
        case VK_DOWN:
            
            switch (LeaderCheck)
            {
            case 1:
                Py += 10;
                if (player_rc.top >= belong_rc.top) 
                    By += 10;
                if (player_rc.bottom >= 800)
                {
                    Py = 700;
                }
                if (player_rc.bottom >= com_rc.top && player_rc.right > com_rc.left && com_rc.right > player_rc.left&&
                    player_rc.top<com_rc.top&&player_rc.top<com_rc.bottom&&player_rc.bottom<com_rc.bottom)
                {
                    Bx = Cx;
                    By = Cy;
                    Py = Cy - 200;
                    LeaderCheck = false;
                }

                break;
            case 0:
                Cy += 10;
                if (com_rc.top >= belong_rc.top)
                    By += 10;
                if (com_rc.bottom >= 800)
                {
                    Cy = 700;
                }
                if (com_rc.bottom >= player_rc.top && player_rc.right > com_rc.left && com_rc.right > player_rc.left &&
                    com_rc.top < player_rc.top && com_rc.top < player_rc.bottom && com_rc.bottom < player_rc.bottom)
                {
                    Bx = Px;
                    By = Py;
                    Cy = Py - 200;
                    LeaderCheck = true;
                }
            }
           /* Py += 5;
            if (player_rc.top > belong_rc.top)
                By += 5;*/
            break;
        case VK_ESCAPE:

            break;
        }

        /*if(Px+ Pwidth >= Cx || Px<Cx+Cwidth || )*/
        InvalidateRect(hWnd, NULL, true);


        break; //빼먹으면 창이 꺼짐

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
        DefWindowProc(hWnd, iMessage, wParam, lParam);
    
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