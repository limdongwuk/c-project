

#include <Windows.h>
#include <tchar.h>
#include <cmath>
HINSTANCE _hInstance;
HWND _hWnd;
LPTSTR _lpszClass = TEXT("Windows API");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


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

	char str[] = "©юдиюл";
	int x = 10;
	int y = 10;
	
	switch (iMessage)
	{
	case WM_CREATE:
		break;

	case WM_LBUTTONDOWN:
	{
		hdc = GetDC(hWnd);
		TCHAR gugudan[50];
	
		int x = 10; 
		int y = 10; 

		for (int i = 2; i <= 4; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				wsprintf(gugudan, TEXT("%d x %d = %d"), i, j, i * j);
				TextOut(hdc, x, y, gugudan, _tcslen(gugudan));
				y += 20; 
			}
			x += 250; 
			y = 10; 
		}

		x = 10; 
		y = 290; 

		for (int i = 5; i <= 7; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				wsprintf(gugudan, TEXT("%d x %d = %d"), i, j, i * j);
				TextOut(hdc, x, y, gugudan, _tcslen(gugudan));
				y += 20; 
			}
			x += 250; 
			y = 290; 
		}

		x = 10; 
		y = 570;

		for (int i = 8; i <= 9; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				wsprintf(gugudan, TEXT("%d x %d = %d"), i, j, i * j);
				TextOut(hdc, x, y, gugudan, _tcslen(gugudan));
				y += 20; 
			}
			x += 250; 
			y = 570; 
		}

			break;

	}


	case WM_PAINT:


		hdc = BeginPaint(hWnd, &ps);



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


