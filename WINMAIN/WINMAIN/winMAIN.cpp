
#include <Windows.h>
#include <tchar.h> //�ؽ�Ʈ �ɸ���

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
HINSTANCE _hInstance;  

// �ڵ� : ������ â
HWND _hWnd;

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
    wndClass.lpszClassName = _lpszClass;  //Ŭ���� �̸�
    wndClass.lpszMenuName = NULL;             //�޴��̸�
    wndClass.style = CS_HREDRAW | CS_VREDRAW; //�������� ���� ������ ���  //������ ��Ÿ��



    // 1-2. ������ Ŭ���� ���
    RegisterClass(&wndClass);


    // 1-3. ȭ�鿡 ������ ������ â ����
    _hWnd = CreateWindowW
    (
        _lpszClass,                //������ Ŭ���� �ĺ���
        _lpszClass,                //������ Ÿ��Ʋ �� �̸�
        WS_OVERLAPPEDWINDOW,        //������ ��Ÿ��
        400,                       //������ ȭ�� X ��ǥ
        100,                       //������ ȭ�� Y ��ǥ
        800,                       //������ ȭ�� ����ũ��
        800,                       //������ ȭ�� ����ũ��
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



    switch (iMessage)
    {
    case WM_CREATE: //�����ڶ� ����
        break;

        //case WM_PAINT:
        //{
        //    PAINTSTRUCT ps;
        //    HDC hdc = BeginPaint(hWnd, &ps);
        //    
        //    EndPaint(hWnd, &ps);
        //}
        //break;
    case WM_DESTROY:
        //PostQuitMessage : �� �Լ��� �޼��� ť�� QUIT �޼����� ������ ������ ����
        // QUIT �޼����� �����ϴ� ���� GetMessage�� FALSE�� ��ȯ�ϹǷ� �޼��� ������ ����ȴ�.
        PostQuitMessage(0);
        return 0;

    }
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));

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
