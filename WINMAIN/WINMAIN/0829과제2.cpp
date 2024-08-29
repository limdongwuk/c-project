#include <Windows.h>
#include <tchar.h>
#include <cmath>
#include "CommonMacroFunction.h"
HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
int count = 0;

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
    static int x = 300;
    static int y = 300;
    static int width = 100;
    static int height = 100;
    static int x1 = 500;
    static int y1 = 500;
    
    switch (iMessage)
    {
    case WM_CREATE:
        break;

    case WM_LBUTTONDOWN:


    default:
        break;

    case WM_PAINT:

        hdc = BeginPaint(hWnd, &ps);
        Rectangle(hdc, x, y, x+width, y+height);
        Rectangle(hdc, x1, y1, x1+width,y1+height);
        EndPaint(hWnd, &ps);
        break;

    case WM_RBUTTONDOWN:

        break;

    case WM_KEYDOWN:
        hdc = GetDC(hWnd);
        switch (wParam)
        {
        case VK_LEFT:

            x -= 2;
            if (x <= 0)
            {
                x = 0;
            }
            if (x == x1 + width && y + height > y1 && y <y1+height)
            { 
                x1 -= 2;
            }
            
            break;
        case VK_RIGHT:
            x += 2;
            if (x >= 700)
            {
                x = 700;
            }
            if (x + width == x1&&y + height > y1 && y < y1 + height)
            {
                x1 += 2;
            }
            break;
        case VK_UP:
            y -= 2;
            if (y < 0)
            {
                y = 0;
            }

            if (y == y1 + height&& x+width> x1 && x<x1+width )
            {
                y1 -= 2;
            }
            break;
        case VK_DOWN:
            y += 2;
            if (y > 700)
            {
                y = 700;
            }
            if (y + height == y1&& x+ width > x1 && x < x1 + width)
            { 
                y1 += 2;
            }
            break;
        case VK_ESCAPE:
           
            x = 300;
            y = 300;
            x1 = 500;
            y1 = 500;

            InvalidateRect(hWnd, NULL, true);

            break;
        }
        InvalidateRect(hWnd, NULL, true);
        return 0;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    DefWindowProc(hWnd, iMessage, wParam, lParam);

}





