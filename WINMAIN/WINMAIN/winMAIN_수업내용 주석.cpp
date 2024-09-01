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

#pragma region 인스턴스
/*
ㄴ 윈도우 OS가 현재 실행되고 있는 프로그램을 확인하기 위한 값
ㄴ 같은 프로그램이면 일반적으로 같은 인스턴스 값을 가진다.
ㄴ 클래스가 메모리에 실제로 구현된 실체
ㄴ 실행되고 있는 각각의 프로그램들
*/
#pragma endregion

#pragma region TCHAR
/*
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
#pragma endregion
#pragma region WinMain 역할
/*
1. 윈도우 창을 세팅 후 화면에 띄우기
 ㄴ 화면에 창을 띄우기 위해서는 4가지 처리가 선행
  1-1. 윈도우창 구조체 선언 및 초기화
  1-2. 윈도우 클래스 등록
  1-3. 화면에 보여줄 윈도우 창 생성
  1-4. 화면에 윈도우창 보여주기
2. 메세지 루프
- GetMessage : 메세지를 꺼내올 수 있을때까지 대기
ㄴ 메세지 큐로부터 하나의 메세지를 가져오는 역할을 수행한다.
ㄴ 다만 메시지 큐가 비어있을 경우 메세지가 들어올때까지 대기

- PeekMessage : 메세지가 없더라도 반환이 된다.고성능 타이머랑 같이 써야한다. peekmessage는 기본적으로 느리기때문에 레이싱게임 같은경우
플레이어가 지나가는지 체크가 누락되는 버그가 발생할 수 있음

TranslateMessage : 키보드의 입력 메세지 처리를 담당한다. 입력된 키가 문자 키인지 확인하고 대문자 혹은 소문자,
    한글, 영문인지에 대한 WM_CHAR 메세지를 발생 시킨다.

    DispatchMessage : 윈도우 프로시저에서 전달된 메세지를 실제 윈도우로 전달한다.
*/
#pragma endregion
#pragma region 윈도우 프로시저
/*
hWnd:어느 윈도우에서 발생한 메세지인지 구분
iMessage : 메세지 구분 번호
wParam : unsigned int 마우스 버튼의 상태 / 키보드 조합 키의 상태를 전달한다.
lParam : unsigned long 마우스 클릭 좌표를 전달

Window Procedure

 - 메세지를 운영체제에 전달 -> 운영체제는 강제로 호출이 된다.
 ㄴ WinMain이 아닌 운영체제에 의해 호출이 되는 콜백 함수라고 할 수 있다.
ㄴ 윈도우를 생성할때는 반드시 지정을 해주어야 한다.

- 윈도우 프로시저 내부에서는 윈도우에서 발생한 모든 메세지를 처리하는 것이 아니라 특정 메세지만 처리하고
  나머지 메세지는 DefWindowProc 함수가 처리하도록 로직을 설계하는 것이 일반적
- 점프 누르면 점프가 컴파일러에 다른일하던중에도 윈도우를 강제로 호출해서 리턴값을 주는 것
  
   
*/
#pragma endregion
#pragma region GDI
/*
BMP - 화소가 높다, 용량이 크다, RGBA중 A(투명도)의 부재로 보간이 없다. 회전에 문제가 많을 수 있다. 원색이 강한거를 BMP로하면 좋음   
GDI+ - A를 추가하였음(지원은하나 라이브러리 함수를 지원하지 않아 만들어 써야함)
*/
#pragma endregion
#pragma region char[] VS char*
/*
char[]
 - 배열의 크기를 미리 정해야 하므로 메모리 낭비의 여지가 있음
 - char라는 1바이트 자료형을 문자 배열로 사용한 것, 한글은 2바이트 이상이기때문에 깨짐
 - 주소값에 대해서 접근하는 것이 아니기 때문에 문자열 하나하나 수정이 가능(문자열이 저장되며 변수 성향의 문자열)
 - char[100] 의 size는 100바이트
 - char a[10] = "abcd";
a[2] = 'q'; <- 이렇게 2번째 인덱스의 값을 변경할 수 있다. 변경 후 char a[10] = "abqd";


 
char*
 - char*a = (char*)malloc(100) 의 경우 주소의 메모리인 4바이트만 먹음
 - 문자열 주소가 저장되며 상수 성향의 문자열(문자열의 내용 변경 불가)
*/
#pragma endregion


#pragma region L*PRECT VS *PRECT
/*
 *LPRECT
  - 가변적일때는 LPRECT를 써라
  - 호환성의 문제때문에 표준적으로 사용
*PRECT
 - 정해진 크기는 PRECT를 써라
 - RECT 구조체의 포인터를 의미
 - PRECT를 통해 RECT 구조체의 메모리 주소를 받아서 데이터를 수정하거나 읽을 수 있다.
*/
#pragma endregion
#pragma region 멀티바이트 VS 유니코드
/*
멀티바이트                                       유니코드
영어 1바이트 한글 2바이트                     무조건 2바이트
표현방식은 char                                  wchar_t(상수로 지정한 "ㄴㅁㄴㅁㅇㄹ" 앞에 L붙여서 L"ㄴㅁㄴㅁㅇㄹ"로 사용)
strlen                                          wcslen
*/
#pragma endregion
#pragma region
/*
PostQuitMessage : 이 함수는 메세지 큐에 QUIT 메세지를 보내는 역할을 수행
QUIT 메세지를 수신하는 순간 GetMessage가 FALSE를 반환하므로 메세지 루프는 종료된다.
 In reads 들어와서 읽기만 해라 참조나 포인터 걸지마라 out reads는 읽기전용
*/
#pragma endregion
#pragma region Stdafx.h (스탠다드 애플리캐이션 익스텐션 = PCH)
/*
자주 쓰이는 헤더들 여러개를 한꺼번에 미리 컴파일 해놓는 것
4005: 그래픽 인터페이스 ->매크로 관련한 경고 -> 이를 무시하겠다.
#pragma warning(dsiable :4005)

거의 사용되지 않는 내용을 Windows 헤더에서 비활성화합니다.
#define WIN32_LEAN_AND_MEAN
#include <ole2.h> 회전할때 씀 오일러 앵글 win32_lean_and_mean안에 포함되어있기때문에 undefine 해줘야함

 // ! Windows 헤더 파일
#include <Windows.h>

// ! C 런타임 헤더 파일
#include <stdlib.h>
#include<malloc.h> //malloc은 클래스가 없기때문에 생성자를 호출하지 않고 new는 호출함
#include<memory.h>
// memcpy() 메모리 복사
첫번째 인자 void* dest= 복사 받을 메모리를 가리키는 포인터
두번째 인자 const void* source= 복사할 메모리를 가리키고 있는 포인터
세번째 인자 size_t num= 복사할 데이터(값)의 길이(바이트 단위)
 
 memset() 메모리 조작에 관련된 부분
 void* memset(void* ptr, int value, size_t num);첫번째 인자 void* ptr은 세팅하고자 하는 메모리의 시작 주소.즉, 그 주소를 가리키고 있는 포인터가 위치하는 자리 입니다.
 두번째 인자 value는 메모리에 세팅하고자 하는 값을 집어 넣으면 됩니다.int 타입으로 받지만 내부에서는 unsigned char 로 변환되어서 저장됩니다. 즉 'a' 이런것을 넣어도 무방하다는 뜻입니다.
 세번째?인자 size_t num은 길이를 뜻합니다. 이 길이는 바이트 단위로써 메모리의 크기 한조각 단위의 길이를 말합니다. 이는 보통 "길이 * sizeof(데이터타입)" 의 형태로 작성하면 됩니다.

#include <stdio.h>
#include <tchar.h>
문자셋 설정에 따라 자동적으로 변환을 해주는 중간 매크로 자료형
MBCS / WBCS 멀티바이트 캐릭터 샛(1바이트) , 월드와이드 캐릭터 샛(2바이트)


//! C++ 런타임 헤더 파일
#include <iostream>

// STL -> 다양한 기능 / 정밀도가 높다 (나노 밀리)
// ㄴ OS와 독립적으로 동작을 한다는게 아주 매리트가 있다.(완전한 난수라고 생각하면된다)
#include <chrono>
#include <random>
#include <vector> //가용가능한 데이터이상 값이 들어오면? ERASE나 CLEAR 차이점 (방과 데이터 둘다 삭제하냐 데이터만 삭제하냐)

//검색속도가 벡터가 느리고 맵이 빠르다.

#include <map> //자료구조 많이 물어봄 트리구조(비선형) 레드블랙트리<<찾아볼것

//일반적 상황에서는 map보다 빠를 수 있다.
// ㄴ 그 이유는 일단 중복 데이터를 허용하지 않는다.
// ㄴ 단, 유사 데이터가 많다면 해시 충돌 발생 여부가 항상 존재한다.
#include <unordered_map>//해쉬 자료구조형
*/
#pragma endregion

#pragma region define VS constexpr
/*
define
전처리기 지시자로 c++전처리기를 통해 상수를 정의 텍스트 치환을 통해 해당 정의 내용으로 그대로 바뀐다.
타입 검사나 범위 지정이 없기 때문에, 컴파일 과정에서 다른 헤더 파일에 정의되어 있는
매크로 값과 사용자가 정의한 매크로 값이 중복되어 오류나 모호성이 발생할 수 있다.

constexpr
컴파일 시간에 미리 계산될 수 있도록 지정할 수 있는 키워드
변수를 선언하는 방법과 같게, 타입 지정이나 리터럴 지정, 템플릿, 사용자 정의 형식도 가능
런타임에 계산을 안하고 컴파일 타임에 하기 때문에 빠르다.
constexpr 함수 사용시 조건사항
1. 함수 바깥의 데이터를 읽거나 쓰면 안 된다.
2. if나 for 같은 제어 구조가 없어야 한다.
3. 하나의 계산 문장만 간단하게 담을 수 있다.
4. 다른 constexpr 함수만 호출이 가능하다.

문자열 치환 등과 같이 텍스트치환 목적이면
define 사용해야 하고
상수나 함수를 쓸때는 되도록 constexpr

// constexpr 함수 예제
constexpr int square(int x) 
{
    return x * x;
}
int main() {
    // 컴파일 타임에 계산됨
    constexpr int result = square(5);

    // 일반 변수에도 사용 가능
    int num = 10;
    int result2 = square(num);
*/
#pragma endregion
#pragma region 매크로 함수
#pragma endregion
#pragma region extern
/*
//#전역변수#
// 변수가 선언되어있다는걸 명시하는 명시키워드로 생각해야함 
// 선언했다고 생각하면 안된다. 이게 있다고 명시만 해주는 것
//캐릭터 로딩창에서 캐릭터가 불러와지지 않고 관련된 다른것들이 불러와졌을때 캐릭터와 연결된것에 대해 오류띄우지말고 넘어가게 하는 명시키워드
extern HINSTANCE    _hInstance;
extern HWND         _hWnd;
extern POINT        _ptMouse;
*/
#pragma endregion
#pragma region 
#pragma endregion
#pragma region 
#pragma endregion
#pragma region 
#pragma endregion
#pragma region 
#pragma endregion
#pragma region 
#pragma endregion