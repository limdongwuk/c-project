
#include <Windows.h>
#include <tchar.h>
#include <cmath>
HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
int Count = 0;

void CircleDraw1(HDC _hdc, int startX, int startY, float radius,  int r, int g, int b);
void CircleDraw(HDC _hdc, int startX, int startY, float radius, int r, int g, int b);
void CircleDraw2(HDC _hdc, int startX, int startY, float radius, int r, int g, int b);
void CircleDraw3(HDC _hdc, int startX, int startY, float radius, int r, int g, int b);
void CircleDraw4(HDC _hdc, int startX, int startY, float radius, int r, int g, int b);
void CommonDraw(HDC _hdc, int startX1, int startY1, float radius, int startX2, int startY2);
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
        
        CircleDraw(hdc, 400, 400, 200, -200, 0, 0);
        CircleDraw1(hdc, 400, 660, 80, 255, 255, 255);
        CircleDraw1(hdc, 400, 130, 100, 255, 255, 255);
        CircleDraw1(hdc, 600, 400, 100, 255, 255, 255);
        CircleDraw2(hdc, 348, 524, 70, 255, 255, 255);
        CircleDraw2(hdc, 449, 524, 70, 255, 255, 255);
        CircleDraw3(hdc, 348, 279, 70, 255, 255, 255);
        CircleDraw3(hdc, 449, 279, 70, 255, 255, 255);
        /*CircleDraw4(hdc, 390, 130, 80, 0, 255, 0);
        CircleDraw4(hdc, 460, 170, 80, 0, 255, 0);*/
        CommonDraw(hdc, 390, 130, 80, 460, 170);
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

void CircleDraw1(HDC _hdc, int startX, int startY, float radius, int r, int g, int b)
{
    for (float i = -radius; i < radius; i++)
    {
        for (float j = -radius; j < radius; j++)
        {
            if ((i * i + j * j < radius * radius))
                SetPixel(_hdc, startX +i, startY+j, RGB(r, g, b));
        }
    }
}



int Color(int j)
{
    if (j < -132)
        return RGB(0, 255, 0);
    else if (j < -66)
        return RGB(255, 215, 0);
    else if (j < 0)
        return RGB(255, 140, 0);
    else if (j < 66)
        return RGB(255, 69, 0);
    else if (j < 132)
        return RGB(102, 51, 153);
    else if (j < 200)
        return RGB(0, 255, 255);


}
void CircleDraw(HDC _hdc, int startX, int startY, float radius, int r, int g, int b)
{
    for (float i = -radius; i < radius; i++)
    {
        for (float j = -radius; j < radius; j++)
        {
            if (i * i + j * j < radius * radius)
           
                SetPixel(_hdc, startX + i, startY + j, Color(j));
        }
    }
}

int Color2(int j)
{
    if (j < -58)
        return RGB(255, 69, 0);
    else if(j < 8)
        return RGB(102, 51, 153);
    else
        return RGB(0, 255, 255);

}
void CircleDraw2(HDC _hdc, int startX, int startY, float radius, int r, int g, int b)
{
    for (float i = -radius; i < radius; i++)
    {
        for (float j = -radius; j < radius; j++)
        {
            if ((i * i + j * j < radius * radius))
                SetPixel(_hdc, startX + i, startY + j, Color2(j));
        }
    }
}


int Color3(int j)
{
    if (j < -11)
        return RGB(0, 255, 0);
    else if (j < 55)
        return RGB(255, 215, 0);
    else
        return RGB(255, 140, 0);

}
void CircleDraw3(HDC _hdc, int startX, int startY, float radius, int r, int g, int b)
{
    for (float i = -radius; i < radius; i++)
    {
        for (float j = -radius; j < radius; j++)
        {
            if ((i * i + j * j < radius * radius))
                SetPixel(_hdc, startX + i, startY + j, Color3(j));
        }
    }
}

void CircleDraw4(HDC _hdc, int startX, int startY, float radius, int r, int g, int b)
{
    for (float i = -radius; i < radius; i++)
    {
        for (float j = -radius; j < radius; j++)
        {
            if ((i * i + j * j < radius * radius))
                SetPixel(_hdc, startX + i, startY + j, RGB(0, 255, 0));
        }
    }
}

void CommonDraw(HDC _hdc, int startX1, int startY1, float radius, int startX2, int startY2)
{
    int TempX = startX1 - startX2; //백터연산
    int TempY = startY1 - startY2; //백터연산
    for (float i = -radius; i < radius; i++)
    {
        for (float j = -radius; j < radius; j++)
        {
            if (i * i + j * j < radius * radius && ((i - TempX) *
                (i - TempX) + (j -TempY) * (j - TempY) < (radius * radius)))
            {
                SetPixel(_hdc, startX2 + i, startY2 + j, RGB(0, 255, 0));
            }
        }
    }
}