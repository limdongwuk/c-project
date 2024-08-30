#include "Stdafx.h"
#include <windowsx.h> //���콺 ���� Ƣ�� �����

// ��������
HINSTANCE _hInstance;
HWND _hWnd;
POINT _ptMouse = { 0,0 };

// ������ Ÿ��Ʋ
LPTSTR _lpszClass = TEXT("Windows API");

// �ݹ� �Լ�
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void SetWindowSize(int x, int y, int width, int height);

RECT rc;
RECT _rc1, _rc2;

int centerX;
int centerY;

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow)
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
    wndClass.lpszClassName = WINNAME;
    wndClass.lpszMenuName = NULL;
    wndClass.style = CS_HREDRAW | CS_VREDRAW;

    RegisterClass(&wndClass);

    _hWnd = CreateWindow(
        WINNAME,
        WINNAME,
        WINSTYLE,
        WINSTART_X,
        WINSTART_Y,
        WINSIZE_X,
        WINSIZE_Y,
        NULL,
        (HMENU)NULL,
        hInstance,
        NULL
    );

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

    static POINT pt = { 0,0 };
    char strPT[128];
    

    switch (iMessage)
    {
    case WM_CREATE:
        rc = RectMakeCenter(400, 400, 100, 100);
        
        _rc1 = RectMakeCenter(WINSIZE_X / 2 + 200, WINSIZE_Y/2, 100, 100); // 600, 400 ,100, 100
        _rc1 = RectMakeCenter(WINSIZE_X / 2 , WINSIZE_Y/2, 100, 100);  // 400, 400, 100, 100

        centerX = WINSIZE_X / 2;
        centerY = WINSIZE_Y / 2;
          
        break;

    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);

        wsprintf(strPT, "X: %d         Y: %d", pt.x, pt.y); //���ڸ� ���ڿ��� ����Ҷ� ����.
        TextOut(hdc, 10, 10, strPT, strlen(strPT));

        Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);
        DrawRectMake(hdc, rc);

        Rectangle(hdc, _rc1.left, _rc1.top, _rc1.right, _rc1.bottom);
        Rectangle(hdc, _rc2.left, _rc2.top, _rc2.right, _rc2.bottom);
        EllipseMakeCenter(hdc, WINSIZE_X / 2, WINSIZE_Y / 2, 100, 100);

        Rectangle(hdc, centerX, centerY, 100, 100);



        EndPaint(hWnd, &ps);
        break;

    case WM_MOUSEMOVE:
        pt.x = LOWORD(lParam);
        pt.y = HIWORD(lParam);

        //pt.x = GET_X_LPARAM(lParam);
        
        InvalidateRect(hWnd, NULL, true);
        break;

    case WM_LBUTTONDOWN:
        centerX = RND->getInt(WINSIZE_X);
        centerY = RND->getInt(WINSIZE_Y);
       
        InvalidateRect(hWnd, NULL, true);
     
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
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));
}

void SetWindowSize(int x, int y, int width, int height)
{
    RECT rc = { 0,0,width, height };
    AdjustWindowRect(&rc, WINSTYLE, false); //���̺귯�� �Լ�
    //���� ������ ũ�� ����
    //AdjustWindowRect(): RECT ����ü, ����Ÿ��, �޴�����
    SetWindowPos(_hWnd, NULL,
        x, y,
        (rc.right - rc.left), //cx
        (rc.bottom - rc.top), //cy
        SWP_NOZORDER | SWP_NOMOVE); //zoder ������ ���� �ǻ�ü���� ������������ ������ ��� �� �켱������ ǥ���� ���ΰ�
    // move�� �ϸ� �ػ󵵿� ���� ui�� �ȸ����� �� ����
}

//���������� ��������
//�����Ʈ��
/*
����1. �簢�� 4�� �б�

 - �簢���� ������ �� 4��

 - ���콺�� ȭ�鿡 �׷��� 4���� �簢���� �ƹ��ų� ������ �����Ӱ� ������ �� �־�� �Ѵ�.
 
 - �����ӵ� �����ϰ� ũ�� ���� ������ �����ؾ� ��
 �� ���콺 ���ʹ�ư(�̵�)/������ ��ư(ũ������)
 �� settimer killtimer ����Ͽ� �ڿ������� 
 �� ptxy�� �簢�� �ȿ� �������� Ȯ���ϴ°� ��Ʈ

 - ���콺�� �����̰� �ִ� �簢���� �ٸ� �簢���� �浹�Ǹ� �浹�� �簢�� "�ڿ�������" �з�����.

 �� �浹 �Լ� ��� ����



����2. ���콺�� ������ ���� ���

 - ���콺�� Ŭ���� ��ǥ�� ������ ������ ����Ѵ�.
 
 - ������ ũ�� + ������ ��� + ������ �������� �������� ����

 - ������ ���� : �簢�� / �� / �ﰢ�� / ���� : �ٰ���

 - �ﰢ�� / �ٰ��� -> Polygon() ���� �� ������

������ ȭ���ϱ���
����3. �� �� �׷�����
 
 - ������ ���� ������ �ؿ� ��(���̽��� �������� �ٸ��� �ᵵ��)
 - ���� �������� �ؿð�


 ���� ����1. ���� ȸ��

 - �簢���� ȸ�� ��Ų��.
 - �ܺ� ���̺귯�� x / �ܺ� ���� x/���� API�θ� ������ ��
 - hdc�� �ݵ�� ����ؾ� �ϰ� Rectangle() �� ����ؾ� �Ѵ�.
 - ȸ������ �ٲ� ���¸� ��� ��ǥ�� �̵��ϰ� ������ �ؿ��� ���
 - ���͸� ���پ˸� �� �� ���� ���������δ� �Ұ�����.
 - Ű���� �¿�� ������ �յڷ� �����δ�. ������ ª��.

 ��������.

 - GetAsyncKeyState()
 - ���� �� -> 4������ ���� ����
 - ��Ȯ�ϰ� ��������� &
*/