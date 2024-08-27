
#include <Windows.h>
#include <tchar.h> //텍스트 케릭터

#pragma region WinAPI
/*
▶ API(Application Programming Interface)

 - 운영체제가 응용 프로그램 개발을 위해 제공하는 함수의 집합이라고 할 수 있다.

 - 명령어의 집합으로 어플리케이션 프로그램에서 오퍼레이팅 시스템의 기본적인 기능을 사용할 필요가 있을 경우
 API에서 명령어 호출이 진행된다.

 EX)
 하드웨어 ------------------운영체제(Windows) ----------------응용 프로그램
(API 함수)

○ 장점
 - 운영체제가 같으면 같은 기능의 집합을 사용하기에 확장성 및 연동성 / 그리고 유지보수에 매우 유리하다.
 ㄴ윈도우즈 != 리눅스

○ 단점
 - 사용하는 프로그래머의 역량에 따라 플랫폼에 대한 고착화가 발생할 수 있다. (WinAPI)
 ㄴ C언어로 개발된 플랫폼의 한계점을 극복하지 못한다는 프로그래머의 모순

 - 이는 대부분의 타 라이브러리 확장으로 해결은 되지만 프로그래머의 역량을 많이 요구하기 때문에 이는 사람 입장에서는
  단점이라고 할 수 있다.

 ▷ API 구조
  - 크게 3가지만 기억하면 OK
  ㄴ 진입점 / 루프(메세지) / Window Procedure

*/
#pragma endregion




/*
 - 인스턴스
  ㄴ 윈도우 OS가 현재 실행되고 있는 프로그램을 확인하기 위한 값
  ㄴ 같은 프로그램이면 일반적으로 같은 인스턴스 값을 가진다.
  ㄴ 클래스가 메모리에 실제로 구현된 실체
  ㄴ 실행되고 있는 각각의 프로그램들
*/
HINSTANCE _hInstance;  

// 핸들 : 윈도우 창
HWND _hWnd;

// 윈도우 타이틀
LPTSTR _lpszClass = TEXT("Windows API");
//TCHAR* pszString = _T("Windows API");
// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:

/*
▶ TCHAR
 - 이 자료형은 프로젝트 문자셋 설정에 따라 자동적으로 변환을 해주는 중간 매크로 자료형
  ㄴ Type Casting을 유발하며 char 또는 wchar_t로 변환한다.

 - 멀티와 유니 환경에서 별도의 수정 작업 없이 프로그램을 구동하기 위해서는 TCHAR형으로 문자열을 표현하는 것을
 권장한다.

 - 윈도우 어플리케이션을 사용하는 프로그램부터는 응용 프로그램에서 문자열 상수를 쓰기 위해서는 중간 설정에 따라
 char*-> wchar_t*로 변환을 해주는 _T 매크로도 유효하다.


LPSTR = char*
LPCSTR = const char*
LPCTSTR = const tchar*


LPCSTR script1 = "ABC";
LPCWSTR script2 = L"ABC"; //W는 월드와이드 /멀티 ///L은 유니코드를 뜻함
TCHAR* script3 = _T("ABC"); //컴퓨터가 알아서 멀티와 유니를 변환해주기때문에 절차가 들어가서 느림
 */

 //콜백 함수
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

/*
hInstance : 프로그램 인스턴스 핸들
hPrevInstance : 이전에 실행된 인스턴스 핸들
lpszCmdParam : 명령형으로 입력된 프로그램 인자(수)
nCmdShow : 프로그램이 시작될 형태 (최소화 / 보통 크기 등등...)
*/
int APIENTRY WinMain(HINSTANCE hInstance, //진입점 , wWinMain에서 w뺐음 / 월드와이드 기반 약자w 
    HINSTANCE hPrevInstance,
    LPSTR    lpszCmdParam,
    int       nCmdShow)
{
    _hInstance = hInstance;

    /*
    WinMain 역할
    ㄴ 1. 윈도우 창을 세팅 후 화면에 띄우기
        ㄴ 화면에 창을 띄우기 위해서는 4가지 처리가 선행
    ㄴ 2. 메세지 루프

    */

    // 1-1. 윈도우창 구조체 선언 및 초기화
    WNDCLASS wndClass; //WNDCLASSEX에서 EX는 확장을 의미함
    wndClass.cbClsExtra = 0; //클래스에대한 추가메모리를 할당한건가?  //클래스 여분 메모리
    wndClass.cbWndExtra = 0;////윈도우 여분 메모리
    wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); //배경색에 관련된것 //백그라운드
    wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);        //마우스 커서
    wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION); //게임 실행할때 위쪽표시줄 왼쪽 아이콘
    wndClass.hInstance = hInstance;                          //소유한 식별자 정보
    wndClass.lpfnWndProc = (WNDPROC)WndProc; //외워 롱포인터 펑셔널 넘버링 0번으로 매핑 될거기때문에 일반적으로는 건들지 않아도 됨 //윈도우 프로시져
    wndClass.lpszClassName = _lpszClass;  //클래스 이름
    wndClass.lpszMenuName = NULL;             //메뉴이름
    wndClass.style = CS_HREDRAW | CS_VREDRAW; //도구상자 뜻함 오른쪽 상단  //윈도우 스타일



    // 1-2. 윈도우 클래스 등록
    RegisterClass(&wndClass);


    // 1-3. 화면에 보여줄 윈도우 창 생성
    _hWnd = CreateWindowW
    (
        _lpszClass,                //윈도우 클래스 식별자
        _lpszClass,                //윈도우 타이틀 바 이름
        WS_OVERLAPPEDWINDOW,        //윈도우 스타일
        400,                       //윈도우 화면 X 좌표
        100,                       //윈도우 화면 Y 좌표
        800,                       //윈도우 화면 가로크기
        800,                       //윈도우 화면 세로크기
        NULL,                      //부모 윈도우 GetDesktopWindow()도 가능 창을 여러개 쓸수있음
        (HMENU)NULL,               //메뉴 핸들
        hInstance,                 //인스턴스 지정
        NULL                       //윈도우의 자식 윈도우를 생성하면 지정 / NULL //부모윈도우와 자식윈도우를 연결시켜주는 것
    );


    // 1-4. 화면에 윈도우창 보여주기
    ShowWindow(_hWnd, nCmdShow);



    // MSG: 운영체제에서 발생하는 메세지 정보를 저장하기 위한 구조체
    MSG message;
    //ZeroMemory(&message, sizeof(message));


    //★★★★★
    //2. 기본 메세지 루프
    // - GetMessage : 메세지를 꺼내올 수 있을때까지 대기
    // ㄴ 메세지 큐로부터 하나의 메세지를 가져오는 역할을 수행한다.
    // ㄴ 다만 메시지 큐가 비어있을 경우 메세지가 들어올때까지 대기

    // - PeekMessage : 메세지가 없더라도 반환이 된다.
    while (GetMessage(&message, 0, 0, 0))
    {

        TranslateMessage(&message);
        DispatchMessage(&message);
    }

    /*
    TranslateMessage : 키보드의 입력 메세지 처리를 담당한다. 입력된 키가 문자 키인지 확인하고 대문자 혹은 소문자,
    한글, 영문인지에 대한 WM_CHAR 메세지를 발생 시킨다.

    DispatchMessage : 윈도우 프로시저에서 전달된 메세지를 실제 윈도우로 전달한다.*/


    return message.wParam;
}

//윈도우 프로시저
// hWnd:어느 윈도우에서 발생한 메세지인지 구분
// iMessage : 메세지 구분 번호
// wParam : unsigned int 마우스 버튼의 상태 / 키보드 조합 키의 상태를 전달한다.
// lParam : unsigned long 마우스 클릭 좌표를 전달
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam) //Windowprocedure
{
    /*
    Window Procedure

     - 메세지를 운영체제에 전달 -> 운영체제는 강제로 호출이 된다.
        ㄴ WinMain이 아닌 운영체제에 의해 호출이 되는 콜백 함수라고 할 수 있다.
        ㄴ 윈도우를 생성할때는 반드시 지정을 해주어야 한다.

     - 윈도우 프로시저 내부에서는 윈도우에서 발생한 모든 메세지를 처리하는 것이 아니라 특정 메세지만 처리하고
     나머지 메세지는 DefWindowProc 함수가 처리하도록 로직을 설계하는 것이 일반적

     점프 누르면 점프가 컴파일러에 다른일하던중에도 윈도우를 강제로 호출해서 리턴값을 주는 것
    */



    switch (iMessage)
    {
    case WM_CREATE: //생성자랑 동일
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
        //PostQuitMessage : 이 함수는 메세지 큐에 QUIT 메세지를 보내는 역할을 수행
        // QUIT 메세지를 수신하는 순간 GetMessage가 FALSE를 반환하므로 메세지 루프는 종료된다.
        PostQuitMessage(0);
        return 0;

    }
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));

}

/*
타임어택. 윈도우 창 만들기

- 시간은 10분
- 외워서 다 작성하기

- 실패시 깜지 ->못한 인원 x 2


한줄 조사.

 - 노트에 열심히 적어온다.(+공부)
 ㄴ CallBack Function, DC, GetDC / ReleaseDC, BeginPaint / EndPaint, WM_PAINT, PAINTSTRUCT




*/
