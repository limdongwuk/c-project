#include <Windows.h>
#include <tchar.h>
#include <cmath>
#include "Stdafx.h"

#include "CommonMacroFunction.h"


HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

RECT rc1;
RECT rc2;
RECT rc3;
RECT rc4;


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
    static int x1 = 300;
    static int y1 = 300;
    static int x2 = 300;
    static int y2 = 600;
    static int x3 = 600;
    static int y3 = 300;
    static int x4 = 600;
    static int y4 = 600;
    static int width = 100;
    static int height = 100;
    
    rc1 = RectMakeCenter(x1, y1, width, height);
    rc2 = RectMakeCenter(x2, y2, width, height);
    rc3 = RectMakeCenter(x3, y3, width, height);
    rc4 = RectMakeCenter(x4, y4, width, height);
    static POINT pt = { 0,0 }; //static으로 안써서 WndProc콜백함수가 
    //다시 실행될때 초기화 되버려서 고생함
    
    
    static int ClickDownPointX = 0;
    static int ClickDownPointY = 0;
    static unsigned int ClickDownTime = 0;
    static unsigned int ClickUpTime = 0;
    static float vX1 = 0;
    static float vY1 = 0;
    static float vX2= 0;
    static float vY2 = 0;
    static float vX3 = 0;
    static float vY3 = 0;
    static float vX4 = 0;
    static float vY4 = 0;
    static bool check = false;
    char str[128];
    float time = 0;
    float distanceX = 0;
    float distanceY = 0;
    switch (iMessage)
    {
    case WM_CREATE:
        
        break;

    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);
        DrawRectMake(hdc, rc1);
        DrawRectMake(hdc, rc2);
        DrawRectMake(hdc, rc3);
        DrawRectMake(hdc, rc4);

        EndPaint(hWnd, &ps);


        break;
    case WM_TIMER:
       
        if (wParam == 1)
        {

            x1 += (10 * (int)vX1);
            y1 += (10 * (int)vY1);

            vX1 *= 0.99f;
            vY1 *= 0.99f;

            if (vX1 < 0.01 && vY1 < 0.01)
            {
                vX1 = 0;
                vY1 = 0;
                KillTimer(hWnd, 1);
            }

            if (x1 < 100 || x1>800)
            {
                vX1 = -vX1;
            }
            if (y1 < 100 || y1>800)
            {
                vY1 = -vY1;
            }

            if (rc1.left <rc3.left && rc1.left <rc3.right && 
                rc1.right >= rc3.left &&rc1.right<rc3.right)
            {
                
                vX3 += vX1;
                vY3 += vY1;
                vX1 = 0;
                vY1 = 0;
            }
       
        }
        else if (wParam == 2)
        {
            x2 += (10 * (int)vX2);
            y2 += (10 * (int)vY2);
            vX2 *= 0.99f;
            vY2 *= 0.99f;
            if (vX2 < 0.01 && vY2 < 0.01)
            {
                vX2 = 0;
                vY2 = 0;
                KillTimer(hWnd, 2);
            }
            if (x2 < 100 || x2>800)
            {
                vX2 = -vX2;
            }
            if (y2 < 100 || y2>800)
            {
                vY2 = -vY2;
            }
        }
        else if (wParam == 3)
        {
            x3 += (10 * (int)vX3);
            y3 += (10 * (int)vY3);
            vX3 *= 0.99f;
            vY3 *= 0.99f;
            if (vX3 < 0.01 && vY3 < 0.01)
            {
                vX3 = 0;
                vY3 = 0;
                KillTimer(hWnd, 3);
            }
            if (x3 < 100 || x3>800)
            {
                vX3 = -vX3;
            }
            if (y3 < 100 || y3>800)
            {
                vY3 = -vY3;
            }
     
        }
        else if (wParam == 4)
        {
            x4 += (10 * (int)vX4);
            y4 += (10 * (int)vY4);

            vX4 *= 0.99f;
            vY4 *= 0.99f;
            if (vX4 < 0.01 && vY4 < 0.01)
            {
                vX4 = 0;
                vY4 = 0;
                KillTimer(hWnd, 4);
            }
            if (x4 < 100 || x4 >800)
            {
                vX4 = -vX4;

            }
            if (y4 < 100 || y4>800)
            {
                vY4 = -vY4;

            }
        }
            
            InvalidateRect(hWnd, NULL, true);
            break;


    case WM_MOUSEMOVE:
        hdc = GetDC(hWnd);
        pt.x = LOWORD(lParam);
        pt.y = HIWORD(lParam);
        if (check)
        {
                if (wParam == MK_LBUTTON)
                {
                    if (pt.x > rc1.left && pt.x<rc1.right && pt.y>rc1.top && pt.y < rc1.bottom)
                    {
                    float time = (float)(GetTickCount64() - ClickDownTime);
                    float distanceX = (float)((pt.x - ClickDownPointX));
                    float distanceY = (float)((pt.y - ClickDownPointY));

                    vX1 = distanceX / time;
                    vY1 = distanceY / time;
                    
                    x1 = pt.x;
                    y1 = pt.y;

                }

            }
        }
        if (pt.x > rc2.left && pt.x<rc2.right && pt.y>rc2.top && pt.y < rc2.bottom)

        {
            if (wParam == MK_LBUTTON)
            {
                {
                    float time = (float)(GetTickCount64() - ClickDownTime);
                    float distanceX = (float)(3 * (pt.x - ClickDownPointX));
                    float distanceY = (float)(3 * (pt.y - ClickDownPointY));

                    vX2 = distanceX / time;
                    vY2 = distanceY / time;

                    x2 = pt.x;
                    y2 = pt.y;

                }
            }
        }

        if (pt.x > rc3.left && pt.x<rc3.right && pt.y>rc3.top && pt.y < rc3.bottom)

        {
                if (wParam == MK_LBUTTON)
                {
                    {
                        float time = (float)(GetTickCount64() - ClickDownTime);
                        float distanceX = (float)(3 * (pt.x - ClickDownPointX));
                        float distanceY = (float)(3 * (pt.y - ClickDownPointY));

                        vX3 = distanceX / time;
                        vY3 = distanceY / time;

                        x3 = pt.x;
                        y3 = pt.y;

                    }
                }
        }

        if (pt.x > rc4.left && pt.x<rc4.right && pt.y>rc4.top && pt.y < rc4.bottom)

        {
            if (wParam == MK_LBUTTON)
            {
                {
                    float time = (float)(GetTickCount64() - ClickDownTime);
                    float distanceX = (float)(3 * (pt.x - ClickDownPointX));
                    float distanceY = (float)(3 * (pt.y - ClickDownPointY));

                    vX4 = distanceX / time;
                    vY4 = distanceY / time;

                    x4 = pt.x;
                    y4 = pt.y;

                }
            }
        }
        InvalidateRect(hWnd, NULL, true);
        ReleaseDC(hWnd, hdc);

        break;
    case WM_LBUTTONUP:
    {
         hdc = GetDC(hWnd);
         SetTimer(hWnd, 1, 1, NULL);
         SetTimer(hWnd, 2, 1, NULL);
         SetTimer(hWnd, 3, 1, NULL);
         SetTimer(hWnd, 4, 1, NULL);
         check = false;
    ReleaseDC(hWnd, hdc);
    }
        break;

    case WM_LBUTTONDOWN:
    {
        hdc = GetDC(hWnd);
       
        ClickDownTime = GetTickCount64();
        ClickDownPointX = pt.x;
        ClickDownPointY = pt.y;
        check = true;
        ReleaseDC(hWnd, hdc);
        /*SetTimer(hWnd, 2, 100, NULL);
        SetTimer(hWnd, 3, 100, NULL);
        SetTimer(hWnd, 4, 100, NULL);*/
    }
        break;

    case WM_KEYDOWN:

        switch (wParam)
        {
        case VK_LEFT:

            break;
        case VK_RIGHT:

            break;
        case VK_UP:

            break;
        case VK_DOWN:


            break;
        case VK_ESCAPE:

            break;
        }

        break;
        
    case WM_DESTROY:
       
       
        PostQuitMessage(0);
        return 0;
    }
    DefWindowProc(hWnd, iMessage, wParam, lParam);

}

void SetWindowSize(int x, int y, int width, int height)
{
    RECT rc = { 0,0,width, height };
    AdjustWindowRect(&rc, WINSTYLE, false);

    SetWindowPos(_hWnd, NULL,
        x, y,
        (rc.right - rc.left), //cx
        (rc.bottom - rc.top), //cy
        SWP_NOZORDER | SWP_NOMOVE);
}
