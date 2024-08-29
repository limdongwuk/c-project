
#include <Windows.h>
#include <tchar.h>
#include <cmath>
HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void Circle(HDC _hdc, int startX, int startY, float radius);
int Count = 0;

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

    switch (iMessage)
    {
    case WM_CREATE:
        break;

    case WM_LBUTTONDOWN:


    default:
        break;

    case WM_PAINT:

        hdc = BeginPaint(hWnd, &ps);

        for (double y = 200; y <= 600; y += 0.01)
        {
            double temp1 = (sqrt(40000 - (y - 400) * (y - 400))+400);
            double temp2 = (400-sqrt(40000 - (y - 400) * (y - 400)) );
            SetPixel(hdc, temp1, y, RGB(0, 0, 0));
            SetPixel(hdc, temp2, y, RGB(0, 0, 0));
        }

        MoveToEx(hdc, 400, 200, NULL);
        LineTo(hdc, 220, 490);
        LineTo(hdc, 567, 290);
        LineTo(hdc, 230 , 290);
        LineTo(hdc, 580, 490);
        LineTo(hdc, 400, 200);
        EndPaint(hWnd, &ps);
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
    DefWindowProc(hWnd, iMessage, wParam, lParam);

}


    


