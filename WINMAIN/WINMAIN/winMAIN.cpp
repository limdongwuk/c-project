
#include "Stdafx.h"

#pragma region WinAPI
/*
�� API(Application Programming Interface)

 - �ü���� ���� ���α׷� ������ ���� �����ϴ� �Լ��� �����̶�� �� �� �ִ�.

 - ��ɾ��� �������� ���ø����̼� ���α׷����� ���۷����� �ý����� �⺻���� ����� ����� �ʿ䰡 ���� ���
 API���� ��ɾ� ȣ���� ����ȴ�.

 EX)
 �ϵ���� ------------------�ü��(Windows) ----------------���� ���α׷�
(API �Լ�)

�� ����
 - �ü���� ������ ���� ����� ������ ����ϱ⿡ Ȯ�强 �� ������ / �׸��� ���������� �ſ� �����ϴ�.
 ���������� != ������

�� ����
 - ����ϴ� ���α׷����� ������ ���� �÷����� ���� ����ȭ�� �߻��� �� �ִ�. (WinAPI)
 �� C���� ���ߵ� �÷����� �Ѱ����� �غ����� ���Ѵٴ� ���α׷����� ���

 - �̴� ��κ��� Ÿ ���̺귯�� Ȯ������ �ذ��� ������ ���α׷����� ������ ���� �䱸�ϱ� ������ �̴� ��� ���忡����
  �����̶�� �� �� �ִ�.

 �� API ����
  - ũ�� 3������ ����ϸ� OK
  �� ������ / ����(�޼���) / Window Procedure

*/
#pragma endregion




/*
 - �ν��Ͻ�
  �� ������ OS�� ���� ����ǰ� �ִ� ���α׷��� Ȯ���ϱ� ���� ��
  �� ���� ���α׷��̸� �Ϲ������� ���� �ν��Ͻ� ���� ������.
  �� Ŭ������ �޸𸮿� ������ ������ ��ü
  �� ����ǰ� �ִ� ������ ���α׷���
*/

//��������
HINSTANCE _hInstance;
HWND _hWnd;
POINT _ptMouse = { 0,0 };



// ������ Ÿ��Ʋ
LPTSTR _lpszClass = TEXT("Windows API");
//TCHAR* pszString = _T("Windows API");
// �� �ڵ� ��⿡ ���Ե� �Լ��� ������ �����մϴ�:

/*
�� TCHAR
 - �� �ڷ����� ������Ʈ ���ڼ� ������ ���� �ڵ������� ��ȯ�� ���ִ� �߰� ��ũ�� �ڷ���
  �� Type Casting�� �����ϸ� char �Ǵ� wchar_t�� ��ȯ�Ѵ�.

 - ��Ƽ�� ���� ȯ�濡�� ������ ���� �۾� ���� ���α׷��� �����ϱ� ���ؼ��� TCHAR������ ���ڿ��� ǥ���ϴ� ����
 �����Ѵ�.

 - ������ ���ø����̼��� ����ϴ� ���α׷����ʹ� ���� ���α׷����� ���ڿ� ����� ���� ���ؼ��� �߰� ������ ����
 char*-> wchar_t*�� ��ȯ�� ���ִ� _T ��ũ�ε� ��ȿ�ϴ�.


LPSTR = char*
LPCSTR = const char*
LPCTSTR = const tchar*


LPCSTR script1 = "ABC";
LPCWSTR script2 = L"ABC"; //W�� ������̵� /��Ƽ ///L�� �����ڵ带 ����
TCHAR* script3 = _T("ABC"); //��ǻ�Ͱ� �˾Ƽ� ��Ƽ�� ���ϸ� ��ȯ���ֱ⶧���� ������ ���� ����
 */

 //�ݹ� �Լ�
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void SetWindowSize(int x, int y, int width, int height);

RECT rc;

/*
hInstance : ���α׷� �ν��Ͻ� �ڵ�
hPrevInstance : ������ ����� �ν��Ͻ� �ڵ�
lpszCmdParam : ��������� �Էµ� ���α׷� ����(��)
nCmdShow : ���α׷��� ���۵� ���� (�ּ�ȭ / ���� ũ�� ���...)
*/
int APIENTRY WinMain(HINSTANCE hInstance, //������ , wWinMain���� w���� / ������̵� ��� ����w 
    HINSTANCE hPrevInstance,
    LPSTR    lpszCmdParam,
    int       nCmdShow)
{
    _hInstance = hInstance;

    /*
    WinMain ����
    �� 1. ������ â�� ���� �� ȭ�鿡 ����
        �� ȭ�鿡 â�� ���� ���ؼ��� 4���� ó���� ����
    �� 2. �޼��� ����

    */

    // 1-1. ������â ����ü ���� �� �ʱ�ȭ
    WNDCLASS wndClass; //WNDCLASSEX���� EX�� Ȯ���� �ǹ���
    wndClass.cbClsExtra = 0; //Ŭ���������� �߰��޸𸮸� �Ҵ��Ѱǰ�?  //Ŭ���� ���� �޸�
    wndClass.cbWndExtra = 0;////������ ���� �޸�
    wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); //������ ���õȰ� //��׶���
    wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);        //���콺 Ŀ��
    wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION); //���� �����Ҷ� ����ǥ���� ���� ������
    wndClass.hInstance = hInstance;                          //������ �ĺ��� ����
    wndClass.lpfnWndProc = (WNDPROC)WndProc; //�ܿ� �������� ��ų� �ѹ��� 0������ ���� �ɰű⶧���� �Ϲ������δ� �ǵ��� �ʾƵ� �� //������ ���ν���
    wndClass.lpszClassName = WINNAME;  //Ŭ���� �̸�
    wndClass.lpszMenuName = NULL;             //�޴��̸�
    wndClass.style = CS_HREDRAW | CS_VREDRAW; //�������� ���� ������ ���  //������ ��Ÿ��



    // 1-2. ������ Ŭ���� ���
    RegisterClass(&wndClass);


    // 1-3. ȭ�鿡 ������ ������ â ����
    _hWnd = CreateWindow
    (
        WINNAME,                //������ Ŭ���� �ĺ���
        WINNAME,                //������ Ÿ��Ʋ �� �̸�
        WINSTYLE,        //������ ��Ÿ��
        WINSTART_X,                       //������ ȭ�� X ��ǥ
        WINSTART_Y,                       //������ ȭ�� Y ��ǥ
        WINSIZE_X,                       //������ ȭ�� ����ũ��
        WINSIZE_Y,                       //������ ȭ�� ����ũ��
        NULL,                      //�θ� ������ GetDesktopWindow()�� ���� â�� ������ ��������
        (HMENU)NULL,               //�޴� �ڵ�
        hInstance,                 //�ν��Ͻ� ����
        NULL                       //�������� �ڽ� �����츦 �����ϸ� ���� / NULL //�θ�������� �ڽ������츦 ��������ִ� ��
    );


    // 1-4. ȭ�鿡 ������â �����ֱ�
    ShowWindow(_hWnd, nCmdShow);



    // MSG: �ü������ �߻��ϴ� �޼��� ������ �����ϱ� ���� ����ü
    MSG message;
    //ZeroMemory(&message, sizeof(message));


    //�ڡڡڡڡ�
    //2. �⺻ �޼��� ����
    // - GetMessage : �޼����� ������ �� ���������� ���
    // �� �޼��� ť�κ��� �ϳ��� �޼����� �������� ������ �����Ѵ�.
    // �� �ٸ� �޽��� ť�� ������� ��� �޼����� ���ö����� ���

    // - PeekMessage : �޼����� ������ ��ȯ�� �ȴ�.

    //while (true)
    //{
    //    if (PeekMessage(&message, NULL, 0, 0, PM_REMOVE)) //���� Ÿ�̸Ӷ� ���� ����Ѵ�. peekmessage�� �⺻������ �����⶧���� ���̰̽��� �������
    //                                                      //�÷��̾ ���������� üũ�� �����Ǵ� ���װ� �߻��� �� ����
    //    {
    //        if (message.message == WM_QUIT)break;
    //        TranslateMessage(&message);
    //        DispatchMessage(&message);
    //    }
    //}
    while (GetMessage(&message, 0, 0, 0))
    {

        TranslateMessage(&message);
        DispatchMessage(&message);
    }

    /*
    TranslateMessage : Ű������ �Է� �޼��� ó���� ����Ѵ�. �Էµ� Ű�� ���� Ű���� Ȯ���ϰ� �빮�� Ȥ�� �ҹ���,
    �ѱ�, ���������� ���� WM_CHAR �޼����� �߻� ��Ų��.

    DispatchMessage : ������ ���ν������� ���޵� �޼����� ���� ������� �����Ѵ�.*/


    return message.wParam;
}

//������ ���ν���
// hWnd:��� �����쿡�� �߻��� �޼������� ����
// iMessage : �޼��� ���� ��ȣ
// wParam : unsigned int ���콺 ��ư�� ���� / Ű���� ���� Ű�� ���¸� �����Ѵ�.
// lParam : unsigned long ���콺 Ŭ�� ��ǥ�� ����
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam) //Windowprocedure
{
    /*
    Window Procedure

     - �޼����� �ü���� ���� -> �ü���� ������ ȣ���� �ȴ�.
        �� WinMain�� �ƴ� �ü���� ���� ȣ���� �Ǵ� �ݹ� �Լ���� �� �� �ִ�.
        �� �����츦 �����Ҷ��� �ݵ�� ������ ���־�� �Ѵ�.

     - ������ ���ν��� ���ο����� �����쿡�� �߻��� ��� �޼����� ó���ϴ� ���� �ƴ϶� Ư�� �޼����� ó���ϰ�
     ������ �޼����� DefWindowProc �Լ��� ó���ϵ��� ������ �����ϴ� ���� �Ϲ���

     ���� ������ ������ �����Ϸ��� �ٸ����ϴ��߿��� �����츦 ������ ȣ���ؼ� ���ϰ��� �ִ� ��
    */
    //GDI
    // BMP/PNG/JPG
    // BMP - ȭ�Ұ� ����, �뷮�� ũ��, RGBA�� A(����)�� ����� ������ ����. ȸ���� ������ ���� �� �ִ�. ������ ���ѰŸ� BMP���ϸ� ����
    // GDI+
    // A�� �߰��Ͽ���(�������ϳ� ���̺귯�� �Լ��� �������� �ʾ� ����� �����)
    //�ڡڡڡڡ�
    HDC hdc;
    PAINTSTRUCT ps;
    char str[] = "������";
    //���̿� ���ؼ� ����
    //�� char[]
    //�� char*

    //RECT : �簢���� ��ǥ�� �����ϱ� ���� �ڷ���
    // // �� ������ SX, SY (L, T) / ���� EX, EY (R, B)�� �����Ѵ�.
    // ������ ���ȭ�� �������̸� *LPRECT , ������ ũ���*PRECT
    //RECT rc = { 100, 100, 200, 200 };
    

    switch (iMessage)
    {
    case WM_CREATE: //�����ڶ� ����
        rc = RectMakeCenter(400, 400, 100, 100);

        break;
        /*
        �� WM_PAINT

         - �����츦 �ٽ� �׷��� �Ҷ� �߻��ϴ� �޼���
         �� �����찡 ó�� ����� ������ �߻��Ѵ�.
         �� ������ ũ�⸦ �����Ҷ�
         �� �����찡 �ٸ� �����쿡 �������ٰ� �ٽ� ���϶�
         �� ���� �Լ��� ȣ��ɶ�
        
        
        */
        //��¿� ���� ��� ���� ����Ѵ�.(����, �׸�, ���� ��� ȭ�鿡 ���̴� ��� ��)


    case WM_PAINT:
    
       
       hdc = BeginPaint(hWnd, &ps);

       Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);

       DrawRectMake(hdc, rc);

//       SetPixel(hdc, 300, 200, RGB(255, 0, 0));
//
//       for (int i = 0; i < 10000; i++)
//       {
//           SetPixel(hdc, rand()%800, rand() % 800, RGB(rand() % 255, rand() % 255, rand() % 255));
//       }
//       
//       for (int i = 0; i < 100; i++)
//       {
//           for (int j = 0; j < 100; j++)
//           {
//               SetPixel(hdc, 400 + i, 300 + j, RGB(255, i*2, j*2));
//           }
//       }
//
////windowapi �� �»�ܿ��� ��ǥ�� ����. ��ī��Ʈ ��ǥ
////�ﰢ�� : �ָ�
//// �簢�� : �ְ�
////�� : �˾�(�ʿ��) �ڽ�Ʈ�� ���̵��.
////�ٰ��� : �ָ�
//       // ���׸���
//       Ellipse(hdc, 300, 100, 200, 200);
//       //�簢��
//       Rectangle(hdc, 100, 100, 200, 200);
//       //�츮�� ������ �����ؾ��ϱ⶧���� �Ʒ��� ���̾�
//       Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);
//       //�������� ���� �ﰢ���� �ٰ����� ������ �����ϴ�.
//       /*
//       ��Ƽ����Ʈ->�����ڵ� ->tchar
//       strlen->wcslen -> _tcslen
//       strcpy->wcscpy -> _tcscpy
//       strcmp->...
//       strcat->...
//       +
//       strtok->... ���ڿ� �ڸ���
//             
//       //API
//       strchr->... ���� ã��
//       strstr->... ���ڿ� ã��
//       
//       */
//       /*�޸𸮹��۸� üũ�Ҽ��ֳ� ����
//       strnlen()
//       strlen_s()
//       */
//
//       //���ڿ� / ���ڿ� ���� //�����÷ο찡 �߻��Ҷ� �����ϰ��ְų� ����Ű�������� ����, �������������� �Ճ��ͯt ����)
//       // �� strlen() �Ҵ� ���� �޸𸮿� ���ε� �� ���ڿ����� NULL ���� ������ ���ڿ� ����
//       TextOut(hdc, 300, 300, "������ �ʹ� ��մ�^^", strlen("������ �ʹ� ��մ�^^"));
//
//       SetTextColor(hdc, RGB(255, 0, 0));
//       TextOut(hdc, 300, 400, "�� ���� ������ �ʿ��ϴ�.", strlen("�� ���� ������ �ʿ��ϴ�."));
//
//
//       MoveToEx(hdc, 400, 400, NULL);
//       LineTo(hdc, 200, 400);
//
//       MoveToEx(hdc, 400, 400, NULL);
//       LineTo(hdc, 200, 400);
//


        EndPaint(hWnd, &ps);
        break;
    case WM_LBUTTONDOWN:
    hdc = GetDC(hWnd);

    SetTextColor(hdc, RGB(0, 0, 255));
    TextOut(hdc, 350, 500,str, strlen(str));

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
        //PostQuitMessage : �� �Լ��� �޼��� ť�� QUIT �޼����� ������ ������ ����
        // QUIT �޼����� �����ϴ� ���� GetMessage�� FALSE�� ��ȯ�ϹǷ� �޼��� ������ ����ȴ�.
        // In reads ���ͼ� �б⸸ �ض� ������ ������ �������� out reads�� �б�����
        PostQuitMessage(0);
        return 0;

    }
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));

}

void SetWindowSize(int x, int y, int width, int height)
{
    RECT rc = { 0,0,width, height };
    //���� ������ ũ�� ����
    //AdjustWindowRect(): RECT ����ü, ����Ÿ��, �޴�����
    AdjustWindowRect(&rc, WINSTYLE, false);

    //��Ʈ�� ������ ������ ������ ����
    SetWindowPos(_hWnd, NULL,
        x, y,
        (rc.right - rc.left), //cx
        (rc.bottom - rc.top), //cy
        SWP_NOZORDER | SWP_NOMOVE); //zoder ������ ���� �ǻ�ü���� ������������ ������ ��� �� �켱������ ǥ���� ���ΰ�
    // move�� �ϸ� �ػ󵵿� ���� ui�� �ȸ����� �� ����
}

/*
Ÿ�Ӿ���. ������ â �����

- �ð��� 10��
- �ܿ��� �� �ۼ��ϱ�

- ���н� ���� ->���� �ο� x 2


���� ����.

 - ��Ʈ�� ������ ����´�.(+����)
 �� CallBack Function, DC, GetDC / ReleaseDC, BeginPaint / EndPaint, WM_PAINT, PAINTSTRUCT

*/




//2���� ����
//����1. winAPI ���
/* -MotoEx() + LineTo()�� �̿��� ��
 - �ڱ� �̸� ��� (�ѱ�) + UnrealEngine (����)
     ��ũ��� 800x800 ���� ȭ�鿡 ������ ä��� ũ��� ����� ��

 - ���콺 ������ ������ �ѱ��ھ� ����� �ǰ� ��Ŭ���� �ϸ� �ѱ��ھ� ��������. �̸���
 
 �ص��� ���� �Լ� ��� ����


 ����2. ������

  - ����ó�� �ʼ�
  �� �������� ���� (1������x /9�� �̻�x)
  
  - ���콺 ���� Ŭ���� ���� �� 1�ܾ� ����� �ǰ� ��Ŭ���� �ϸ� 1�ܾ� ��������.

  - �׸��� 3�ܰ踶�� ������ �Ѵ�.


  �ݿ��ϱ���
  ����3. ���� �ΰ� ���

   - SetPixel()�� �̿��ؼ� �����.
   - �ټ� ok / �ݺ��� ok / �ļ� x
   
   �ݺ����������� ��..

   ��������.
   -SetTimer
   -KillTimer
   -InvalidateRect (����1���� 2����������)

 */

/*
3���� ����
����1. ������ ���

 - �������� ������ó�� ���

 - ��� �� ��� ������ ���� �������� �ﰢ �Լ� x

����2. �簢�� 2�� �����̱�
 - �� �簢�� ���� : 2��
  - �ϳ��� ������ �� �ִ� �簢�� / �ٸ� �ϳ��� ������ �� ���� �簢��
 - ������ �� ���� �簢���� �����ϼ��ִ� �簢���� �о �� ������ �ȴ�.

 ����ó��
 �� 1. 2���� �簢���� ȭ�� ������ ���� �� ����.
 �� 2. 2���� �簢���� �ʱ� ��ġ�� ������ ��ɵ� �߰��Ѵ�.

�غ��ٸ� ����� �ϱ������� �浹 �Լ��� ������� �� ��
���ǽ����� ���� ���ϸ� �ȴ�. ���ʳ׸��� ����Ʈ �� ������ �׸��ǿ���x��ǥ�� �����ʴ´���

������ ������
����3. �簢�� ��ȥ �о�ֱ�

 - ������ ū �簢�� 2���� ���� �簢�� 1��

 - ���� ������ �� �ִ� �簢�� �ȿ��� ���� �簢���� �ִ�.

 - �簢���� �����̸� ���� �簢�� ���� �����̰ų� / ū �簢���� �������� �Ѵ�.
 �� �������� ���� ��õ

 -����ó�� : ���� �簢���� ū �簢���� ��� �� ����.
 
 -ū �簢������ �浹�� �Ǹ� ���� �簢���� �浹�̵� �ݴ��� �簢������ �̵��Ѵ�.

 �� �̶� �����ϼ��ִ� �ֵ����� ���� �簢���� �����ϰ� �ִ� ū �簢��

 �ظ𼭸��� ���� ����ó�� ������ ��

*/
