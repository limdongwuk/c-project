#include <Windows.h>
#include <tchar.h> 

#pragma region WinAPI

HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");// 윈도우 타이틀
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY WinMain(HINSTANCE hInstance, 
    HINSTANCE hPrevInstance,
    LPSTR    lpszCmdParam,
    int       nCmdShow)
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
    wndClass.lpszClassName = _lpszClass;  
    wndClass.lpszMenuName = NULL;             
    wndClass.style = CS_HREDRAW | CS_VREDRAW; 

    RegisterClass(&wndClass);

    _hWnd = CreateWindowW
    (
        _lpszClass,                
        _lpszClass,                
        WS_OVERLAPPEDWINDOW,       
        400,                       
        100,                       
        800,                       
        800,                       
        NULL,                      
        (HMENU)NULL,               
        hInstance,                 
        NULL                       
    );

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
    switch (iMessage)
    {
    case WM_CREATE:
      
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));
}