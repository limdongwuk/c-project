#include <Windows.h>
#include <tchar.h>
#include <cmath>
HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

void CircleDrawing(HDC _hdc, int startX, int startY, int radius);
void Ud_SemiCircleDrawing(HDC _hdc, int startX, int startY, int radius);
void Up_SemiCircleDrawing(HDC _hdc, int startX, int startY, int radius, int Y);

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
    char str[] = "������";
    
    RECT rc = { 100, 100, 200, 200 };
    switch (iMessage)
    {
    case WM_CREATE:
        break;
    case WM_PAINT:


        hdc = BeginPaint(hWnd, &ps);

        MoveToEx(hdc, 0, 400, NULL); //���Ҽ�
        LineTo(hdc, 800, 400);       //���Ҽ�

        CircleDrawing(hdc, 100, 100, 30); //��

        MoveToEx(hdc, 160, 50, NULL);//��
        LineTo(hdc, 160,150 );       //��

        //��
        MoveToEx(hdc, 80, 170, NULL);//�� �� ���� ��
        LineTo(hdc, 160, 170);
        MoveToEx(hdc, 80, 210, NULL);//�Ʒ��� ��
        LineTo(hdc, 160, 210); //�Ʒ��� ��
        MoveToEx(hdc, 80, 170, NULL); // ���� ��
        LineTo(hdc, 80, 210); 
        MoveToEx(hdc, 160, 170, NULL); //������ ��
        LineTo(hdc, 160, 210);


        //��
        MoveToEx(hdc, 300, 120, NULL);//�Ʒ� ��
        LineTo(hdc, 400, 120);

        MoveToEx(hdc, 300, 70, NULL); // �� ��
        LineTo(hdc, 400, 70);
        
        MoveToEx(hdc, 300, 70, NULL); // ��
        LineTo(hdc, 300, 120);

        //��
        MoveToEx(hdc, 350, 130, NULL); // ��
        LineTo(hdc, 350, 160);

        MoveToEx(hdc, 280, 160, NULL); // ��
        LineTo(hdc, 420, 160);
        
        //��
        CircleDrawing(hdc, 350, 215, 30);

        //��
        CircleDrawing(hdc, 600, 90, 30);
        //��
        MoveToEx(hdc, 525, 150, NULL); // ��
        LineTo(hdc, 675, 150);

        MoveToEx(hdc, 600, 150, NULL); // ��
        LineTo(hdc, 600, 175);


        //��
        MoveToEx(hdc, 550, 175, NULL); // ��
        LineTo(hdc, 650,175 );

        MoveToEx(hdc, 650, 175, NULL); // ��
        LineTo(hdc, 650, 220);

        //////////////////////////////////////////////////////////////////

        //U 
        Ud_SemiCircleDrawing(hdc, 100, 600, 50);
        MoveToEx(hdc, 50, 600, NULL); // ���ʤ�
        LineTo(hdc, 50, 500);
        MoveToEx(hdc, 150, 600, NULL); // �����ʤ�
        LineTo(hdc, 150, 500);


        //n

        Up_SemiCircleDrawing(hdc, 220, 550, 30,0);
        MoveToEx(hdc, 190, 520, NULL); // ���ʤ�
        LineTo(hdc, 190, 600);

        MoveToEx(hdc, 250, 550, NULL); // �����ʤ�
        LineTo(hdc, 250, 600);
        

        //r
        Up_SemiCircleDrawing(hdc, 320, 550, 30, -15);
        MoveToEx(hdc, 294, 520, NULL); // �����ʤ�
        LineTo(hdc, 294, 600);
        EndPaint(hWnd, &ps);  
        break;
    case WM_LBUTTONDOWN:
        hdc = GetDC(hWnd);

        SetTextColor(hdc, RGB(0, 0, 255));
        TextOut(hdc, 350, 500, str, strlen(str));

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
        PostQuitMessage(0);
        return 0;
    }
    DefWindowProc(hWnd, iMessage, wParam, lParam);
}

void CircleDrawing(HDC _hdc, int startX, int startY, int radius)
{
    for (int i = 0; i < 361; i++)
    {
        MoveToEx(_hdc, startX + cos(i) * radius, startY + sin(i) * radius, NULL);
        LineTo(_hdc, startX  + cos(i) * radius, startY + 1 + sin(i) * radius);
    }
}
void Ud_SemiCircleDrawing(HDC _hdc, int startX, int startY, int radius) //�Ʒ��ݿ�
{
    for (int i = 0; i < 361; i++)
    {
        if (startY + sin(i) * radius > startY)
        {
            MoveToEx(_hdc, startX + cos(i) * radius, startY + sin(i) * radius, NULL);
            LineTo(_hdc, startX  + cos(i) * radius, startY + 1 + sin(i) * radius);
        }
    }
}

void Up_SemiCircleDrawing(HDC _hdc, int startX, int startY, int radius, int Y) //���ݿ�
{
    for (int i = 0; i < 361; i++)
    {
        if (startY + sin(i) * radius < startY + Y)
        {
            MoveToEx(_hdc, startX + cos(i) * radius, startY + sin(i) * radius, NULL);
            LineTo(_hdc, startX + 1 + cos(i) * radius, startY + 1 + sin(i) * radius);
        }
    }
}