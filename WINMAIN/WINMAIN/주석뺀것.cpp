#include <Windows.h>
#include <tchar.h> 

HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK  WndProc(HWND, UINT, WPARAM, LPARAM);
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow)
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
    _hWnd = CreateWindow
    (_lpszClass, _lpszClass, WS_OVERLAPPEDWINDOW, 400, 100,
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
LRESULT CALLBACK  WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
    switch (iMessage)
    {
    case WM_CREATE : 
        break;
    case WM_DESTROY :
        PostQuitMessage(0);
        return 0;
    }
    DefWindowProc(hWnd, iMessage, wParam, lParam);
}