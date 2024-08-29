

#include <Windows.h>
#include <tchar.h>
#include <cmath>
HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
int Count = 0;
void CircleDrawing(HDC _hdc, int startX, int startY, int radius, double i, double j);


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
    RECT rc1 = { 0, 0, 250, 400 };
    RECT rc2 = { 250, 0, 500, 400 };
    RECT rc3 = { 500, 0, 780, 400 };
    char str[] = "오케이";


    switch (iMessage)
    {
    case WM_CREATE:
        break;

    case WM_LBUTTONDOWN:
    {
        
        switch (Count)
        { 
        case 0:
            hdc = GetDC(hWnd);
            CircleDrawing(hdc, 100, 100, 30, 0, 360); //ㅇ
            MoveToEx(hdc, 160, 50, NULL);//ㅣ
            LineTo(hdc, 160, 150);       //ㅣ
            
            //ㅁ
            MoveToEx(hdc, 80, 170, NULL);//ㅁ 중 위쪽 ㅡ
            LineTo(hdc, 160, 170);
            MoveToEx(hdc, 80, 210, NULL);//아래쪽 ㅡ
            LineTo(hdc, 160, 210); //아래쪽 ㅡ
            MoveToEx(hdc, 80, 170, NULL); // 왼쪽 ㅣ
            LineTo(hdc, 80, 210);
            MoveToEx(hdc, 160, 170, NULL); //오른쪽 ㅣ
            LineTo(hdc, 160, 210);
            Count++;
            ReleaseDC(hWnd, hdc);
            break;
        case 1:
            hdc = GetDC(hWnd);
            MoveToEx(hdc, 300, 120, NULL);//아래 ㅡ
            LineTo(hdc, 400, 120);

            MoveToEx(hdc, 300, 70, NULL); // 위 ㅡ
            LineTo(hdc, 400, 70);

            MoveToEx(hdc, 300, 70, NULL); // ㅣ
            LineTo(hdc, 300, 120);
            
            //ㅗ
            MoveToEx(hdc, 350, 130, NULL); // ㅣ
            LineTo(hdc, 350, 160);

            MoveToEx(hdc, 280, 160, NULL); // ㅡ
            LineTo(hdc, 420, 160);

            //ㅇ
            CircleDrawing(hdc, 350, 215, 30, 0, 360);
            Count++;
            ReleaseDC(hWnd, hdc);
            break;
        case 2:
            hdc = GetDC(hWnd);
            //ㅇ
            CircleDrawing(hdc, 600, 90, 30, 0, 360);
            //ㅜ
            MoveToEx(hdc, 525, 150, NULL); // ㅡ
            LineTo(hdc, 675, 150);

            MoveToEx(hdc, 600, 150, NULL); // ㅣ
            LineTo(hdc, 600, 175);

            //ㄱ
            MoveToEx(hdc, 550, 175, NULL); // ㅡ
            LineTo(hdc, 650, 175);

            MoveToEx(hdc, 650, 175, NULL); // ㅣ
            LineTo(hdc, 650, 220);

            Count++;
            ReleaseDC(hWnd, hdc);
            break;
           
        default:
                break;
        }
       
        
       
      
       
       
    }


    case WM_PAINT:


        hdc = BeginPaint(hWnd, &ps);
        
        //////////////////////////////////////////////////////////////////
        MoveToEx(hdc, 0, 400, NULL); //분할선
        LineTo(hdc, 800, 400);       //분할선
        //U 

        CircleDrawing(hdc, 100, 600, 50, 0, 180);
        MoveToEx(hdc, 50, 600, NULL); // 왼쪽ㅣ
        LineTo(hdc, 50, 500);
        MoveToEx(hdc, 150, 600, NULL); // 오른쪽ㅣ
        LineTo(hdc, 150, 500);


        //n

        CircleDrawing(hdc, 220, 550, 30, 180, 360);
        MoveToEx(hdc, 190, 520, NULL); // 왼쪽ㅣ
        LineTo(hdc, 190, 600);

        MoveToEx(hdc, 250, 550, NULL); // 오른쪽ㅣ
        LineTo(hdc, 250, 600);


        //r
        CircleDrawing(hdc, 324, 550, 30, 180, 360);
        MoveToEx(hdc, 294, 520, NULL); // 오른쪽ㅣ
        LineTo(hdc, 294, 600);

        //e

        CircleDrawing(hdc, 400, 550, 30, 30, 360);
        MoveToEx(hdc, 430, 550, NULL); // 오른쪽ㅣ
        LineTo(hdc, 400, 550);

        //a
        CircleDrawing(hdc, 480, 550, 30, 0, 360);

        MoveToEx(hdc, 510, 520, NULL); // 오른쪽ㅣ
        LineTo(hdc, 510, 580);

        //l
        MoveToEx(hdc, 550, 500, NULL); // 오른쪽ㅣ
        LineTo(hdc, 550, 600);

        //E
        MoveToEx(hdc, 300, 650, NULL); // 왼쪽 ㅣ
        LineTo(hdc, 300, 730);

        MoveToEx(hdc, 300, 650, NULL); // 왼쪽 ㅣ
        LineTo(hdc, 380, 650); //위쪽 ㅡ

        MoveToEx(hdc, 300, 690, NULL); // 왼쪽 ㅣ
        LineTo(hdc, 380, 690);

        MoveToEx(hdc, 300, 730, NULL); // 왼쪽 ㅣ
        LineTo(hdc, 380, 730);

        //n
        CircleDrawing(hdc, 420, 690, 30, 180, 360);
        MoveToEx(hdc, 390, 660, NULL); // 왼쪽ㅣ
        LineTo(hdc, 390, 730);

        MoveToEx(hdc, 450, 690, NULL); // 오른쪽ㅣ
        LineTo(hdc, 450, 730);

        //g
        CircleDrawing(hdc, 490, 690, 30, 0, 360);
        MoveToEx(hdc, 520, 690, NULL);
        LineTo(hdc, 520, 730);
        CircleDrawing(hdc, 490, 730, 30, 0, 180);

        //i
        MoveToEx(hdc, 550, 690, NULL); // 오른쪽ㅣ
        LineTo(hdc, 550, 730);
        CircleDrawing(hdc, 550, 670, 5, 0, 360);

        //n
        CircleDrawing(hdc, 600, 700, 30, 180, 360);
        MoveToEx(hdc, 570, 670, NULL); // 왼쪽ㅣ
        LineTo(hdc, 570, 740);
        MoveToEx(hdc, 630, 700, NULL); // 왼쪽ㅣ
        LineTo(hdc, 630, 740);

        //e
        CircleDrawing(hdc, 670, 700, 30, 30, 360);
        MoveToEx(hdc, 700, 700, NULL); // 오른쪽ㅣ
        LineTo(hdc, 670, 700);

        EndPaint(hWnd, &ps);
        break;
      

    case WM_RBUTTONDOWN:
        
        switch (Count)
        {
        case 1:
            hdc = GetDC(hWnd);
            InvalidateRect(hWnd, &rc1, true);
            Count--;
            break;
        case 2:
            hdc = GetDC(hWnd);
            InvalidateRect(hWnd, &rc2, true);
            Count--;
            break;
        case 3:
            hdc = GetDC(hWnd);
            InvalidateRect(hWnd, &rc3, true);
            Count--;
            break;
        }

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

void CircleDrawing(HDC _hdc, int startX, int startY, int radius, double i, double j)
{
    MoveToEx(_hdc, startX + cos(i * 3.141592 / 180.0) * radius, startY + sin(i * 3.141592 / 180.0) * radius, NULL);
    for (; i <= j; i++)
    {
        LineTo(_hdc, startX + cos(i * 3.141592 / 180.0) * radius, startY + 1 + sin(i * 3.141592 / 180.0) * radius);
    }
}
