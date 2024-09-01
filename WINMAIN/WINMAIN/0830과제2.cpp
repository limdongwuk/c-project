#include <Windows.h>
#include <tchar.h>
#include <cmath>
#include "Stdafx.h"
#include "RandomFunction.h"
#include "CommonMacroFunction.h"


HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

RECT rc;


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
    POINT pt = { 0,0 };
    pt.x = LOWORD(lParam);
    pt.y = HIWORD(lParam);
    static POINT triangle[3];
    int x1 = RND->getFromIntTo(0, 800);
    int x2 = RND->getFromIntTo(0, 800);              
    int y1 = RND->getFromIntTo(0, 800);
    int y2 = RND->getFromIntTo(0, 800);

    POINT polygon[3] = { x1,y1,x2,y2, 3 * pt.x - x1 - x2, 3 * pt.y - y1 - y2};
    char strPT[128];
    switch (iMessage)
    {
    case WM_CREATE:
        
       
        break;

    case WM_PAINT:


        hdc = BeginPaint(hWnd, &ps);
        wsprintf(strPT, "X: %d         Y: %d", pt.x, pt.y); //숫자를 문자열로 출력할때 쓴다.
        TextOut(hdc, 10, 10, strPT, strlen(strPT));
        EndPaint(hWnd, &ps);

        break;

    case WM_MOUSEMOVE:
        
        
        
        break;
    case WM_LBUTTONDOWN:
        hdc = GetDC(hWnd);
        
        pt.x = LOWORD(lParam);
        pt.y = HIWORD(lParam);
        
        wsprintf(strPT, "X: %d         Y: %d", pt.x, pt.y);
        TextOut(hdc, 10, 10, strPT, strlen(strPT));
        rc = RectMakeCenter(pt.x, pt.y, RND->getFromIntTo(50, 400), RND->getFromIntTo(50, 400));
        switch (RND->getInt(3))
        {
        case 0:
            EllipseMakeCenter(hdc, pt.x, pt.y, RND->getFromIntTo(50, 400), RND->getFromIntTo(50, 400));
     
            break;
        case 1:
            DrawRectMake(hdc, rc);
            break;
        case 2:
            Polygon(hdc, polygon, 3);
            break;
        
        }
        ReleaseDC(hWnd, hdc);
        RND->releaseSingleton();
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