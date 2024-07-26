// 한줄 주석: 코드에 영향을 주지않는다.

// 주석은 최대한 많이 남기는게 좋다.

// 주석의 역할은 컴퓨터가 읽어 들이지 않는다.-> 해석을 하지 않는다.

// 컴퓨터는 기본적으로 똑똑하고 스마트한 친구 > 단, 유도리는 없다.

// 컴퓨터는 효율적인걸 좋아한다.

// S / E     start / end

// 전처리기 명령어 
// # : 명령 지시자
// #pragma once 
// c 나 c++ = 메모리 최적화 언어
#pragma region 프로그래밍 언어

/*
▶ 프로그래밍이란 ? 

-  Programing, Program + ing 가 붙었으니 지금 프로그램을 하고 있다 라고 직역할수있다.
ㄴ 지금 프로그램을 하고 있다라는 말은 결국 프로그램을 만드는 것 -> 개발을 의미한다.

▶ 프로그래밍 언어란 ?

- 컴퓨터와 대화 또는 명령을 할 수 있는 일련의 명령문을 작성할 수 있는 언어를 의미한다.
ㄴ 프로그래밍 언어를 이용하면 프로그램을 만드는 것이 가능

- 프로그래밍 언어에는 다양한 언어가 존재하지만 크게 2가지로 분류할 수 있다.
ㄴ 1. 특정 기능 구현에 최적화 된 언어
ㄴ 2. 범용적 언어

▶ 프로그래밍 언어를 컴퓨터에서 이해하는 방법
- C / C++ 언어로 작성되어 있는 코드는 컴퓨터가 이해 할 수 없는 명령문이기 때문에 C / C++언어는
중간에서 언어를 해석해주는 번역가 역할을 하는 무언가가 필요하다.

★ 이 기능을 수행 하는 친구가 바로 컴파일러
ㄴ 컴파일러는 해당 코드를 컴퓨터가 이해 할 수 있는 언어로 변환하는 역할을 수행한다.


- 컴파일러가 프로그래밍 언어와 컴퓨터 사이에서 통역사 역할을 해주기 때문에 프로그래밍 언어를 작성하는
사람은 컴퓨터의 언어를 모른다고 하더라도 컴퓨터에게 명령문을 내리는 것이 가능하다.

- C / C++ 컴파일 절차는 절차지향적이 기본 값으로 세팅되어 있다.
ㄴ 컴파일러 !* 인터프리터


▶ 프로그래밍 기술 및 기법
- 프로그래밍 기술은 점차 발전해 왔으며 앞으로도 발전할 것임
ㄴ 다양한 기법 중 현재는 크게 4가지만 기억하면 된다.

1. 순차적 프로그래밍 (절차지향)
ㄴ 프로그래밍 초기 단계부터 사용된 기법으로 코드의 흐름에 따라 프로그래밍 하는 기술
 ㄴ 요약하면 프로그램의 실행부터 종료까지의 흐름을 그대로 프로그래밍 한다.
ㄴ 이러한 방식은 프로그램의 흐름을 따라가기 때문에 구조적이지 못하고 코드가 여기저기 흩어져 있기 때문에
 유지보수가 힘들다는 단점이 존재한다.
ㄴ C 스타일


2. 구조적 프로그래밍
ㄴ 순차적 프로그래밍의 단점을 보완하기 위해 나온 방식
 ㄴ 절차와의 차이점은 코드의 구조를 기능 단위로 묶는 방식을 채택한다.
ㄴ함수 지향 프로그래밍이라고도 부르며 순차적 프로그래밍보다는 유지 보수가 용이하다는 장점이 있다.

※ 이러한 기능들을 한데 묶어 모듈이라는 형태로 만들게 되고 이는 프로그래밍 라이브러리로 발전
ㄴ C 스타일



3. 객체지향 프로그래밍
ㄴ 위의 언급한 두 방식과는 전혀 다른 방법으로 코드의 기준을"객체"단위로 묶어 프로그래밍 하는 방식
ㄴ 모든 대상에는 속성과 메서드가 있고 이를 하나로 묶어 객체로 만드는 방식이며 여기에서 말하는 대상에는
눈에 보이지 않는 것도 포함이 된다.
ㄴ 객체지향 기법에는 다양한 기법이 있으나 이는 객체지향 수업때 다룬다.
ㄴ C++ 스타일 + C# 스타일
- 활용성이 떨어짐, 오염 변형이 됬을때 추가코딩을해야함
예를들어 좀비를 팔다리2 목 얼굴 을갖고있을때 팔이 떨어지면 좀비가 아니게되는것은 아님

4. 컴포넌트 (기반) 프로그래밍
ㄴ 엔진 스타일 + 플랫폼 스타일
ㄴ 코딩의 기준을 객체가 아닌 컴포넌트 단위로 프로그래밍 한다.
ㄴ 각각의 컴포넌트는 독립적으로 움직이는 부품과 같으므로 다리를 떼서 동물에게 붙여주면 걷거나 달리는 것이 가능하게 되며 앞으로 배우게 될
언리얼 엔진이 추구하는 방식이 바로 컴포넌트 기반 프로그램










아래로 올라갈수록 하위 를 포함하기때문에 다쓸줄알아야함 컴포넌트는 객체를 포함 객체는 구조 포함 이런식


*/

#pragma endregion 여기도 들어간다.

/*
단위주석 
주석은 최대한 많이 남기는게 좋다.

주석의 역할은 컴퓨터가 읽어 들이지 않는다.-> 해석을 하지 않는다.

컴퓨터는 기본적으로 똑똑하고 스마트한 친구 > 단, 유도리는 없다.

컴퓨터는 효율적인걸 좋아한다.

글꼴
1iIlL0Ood
*/

/*
메인 함수  > (EP (진입점))
- 메인 함수는 1개만 존재해야 한다.
ㄴ C / C++ 언어로 작성 되어있는 프로그램이 처음 실행되는 부분

- C / C++ 언어는 프로그램이 처음 실행되기 위해서 반드시 main 함수를 포함하고 있어야 한다.
ㄴ 만약 main 함수를 포함하고 있지 않다면 실행 자체가 안된다.

- C / C++ 언어가 프로그램으로 변환되기 위해서 거치는 큰 단계

1. 전처리기 단계
2. 컴파일 단계
3. 링크 단계

*/

// include 복사
// 헤더 파일 (표준)
// C++ 코어 헤더
#include <iostream>
#include <Windows.h> 
/*
★ iostream : 입 ,출력을 담당하는 C++ 표준 라이브러리 (input output stream)

- #include는 해당 경로에 있는 파일의 내용을 단순하게 복사한다.

- iostream에 선언되어 있는 cout / cin /endl    /console out / console in / endline

input output이 나갈수 있는 통로  > stream

*/


// 절대 / 상대
//#include "Debug\Console.tlog\"


// 프로그래머 생성 
//#include "MainGame.h"
// () {} [] 소 중 대


void TextColor(int font, int backGround);
using namespace std; //std 나오면 생략한다고 선언

void main()
{
	/*
	▶ 코드 작성의 기본
	ㄴ 빨간색 밑줄을 보게 된다면...

	1. 오타 체크
	2. 앞, 뒤를 체크할것
	3. 세미클론을 체크한다.
	4. 논리적으로 성립이 되는지 확인한다.

	※ 일단 ; 은 코딩의 마침표 -> 반드시 찍어줘야 한다.
	*/
	// cout: 출력해라
	// endl: 줄을 바꾼다.
	// <<: 출력 연산자 ->cout (C 언어 -> printf())
	// >>: 입력 연산자 ->cin	 (C 언어 -> scanf())

	// :: -> 접근 연산자.
	// 대부분의 문법은 프로그래머가 귀찮으면 효율적이다.
	// ㄴ 저 귀찮음을 설계로 풀어 주는 방식이 그 프로그래머의 역량
	// 1. - 포폴때는 1번 최적화 2번은 편하지만 메모리 많이먹음
	std::cout << "지옥에 온걸 환영해 애들아" << std::endl;
	// 2.
	cout << "지옥에 온걸 환영해 애들아" << endl;

	cout << "문자 출력: " << "그냥 쌍따움표 안에 적으면 된다. " << endl;
	cout << "숫자 출력: " << 12345 << "그냥 숫자 적으면 된다. " << endl;

	cout << "★" << endl;
	cout << "■" << endl;


	printf("지옥에 온걸 환영해 애들아! \n");



/*
▶ printf() / scanf()의 서식 문자

 - 서식 문자는 문자열을 출력 / 입력을 받을 때 해당 서식 문자의 자리를 다른 수로 대체하기 위한 자리 매김 역할을 하는 문자를 의미한다.

 - 사용하는 이유는 고정되어 있지 않는 문자열을 출력 / 입력 받는 것이 가능하기 때문


 ▷ printf / scanf 서식문자
 a. %d			->		 int
 b. %ld			->		 long
 c. %lld		->		 long long
 d. %c			->		 char
 e. %s			->		 문자열 (string)
 f. %f			->		 float
 g. %lf			->		 doulbe

 ▷ printf 특수문자
 (특수문자로 발동되는)
  - \n -> 개행
  - \t -> 수평
  - \v -> 수직
  - \\ -> \
  - \? -> ?
  - \' -> '
  - \" -> "

  
*/
	

/*
01. 취업을 위해서 지금부터 정리하는 습관을 들이면 아주 좋다.
ㄴ a. 기술 면접 + 이론
ㄴ b. 우리의 성장 과정
우리의 관점이 중요

※이 수업을 수강하는 우리에게 원하는 점
ㄴ 1. 방향성을 잘 따라온다.
ㄴ 2. 공부를 아주 열심히 한다.
ㄴ 3. 우리 목표인 취업에 성공해야 한다.
 v ㄴ a. 논리 사고 개방
 v ㄴ b. 추론
 ㄴ c. 설계
 ㄴ d. 오류를 고칠 수 있나 /없나 ?

 과제1. 좋아하는 캐릭터 출력

 - 캐릭터 양식은 자유

 - 최소 사이즈 40x40 지킬것

 ※ 자질구레한 꼼수 x

 과제2. 자기 소개 출력

 - 이름 ,나이 ,연락처 , 주소, 이메일, 각오 ,가고 싶은 회사, 만들고 싶은 게임, 취미

 - 가독성을 본인의 판단하에 잘 만들어 온다.


 도전 과제1. 자기 소개 출력

 - 이름 ,나이 ,연락처 , 주소, 이메일, 각오 ,가고 싶은 회사, 만들고 싶은 게임, 취미

 -항목은 동일

 - 단, 입력한 정보에 대한 단일 출력이 아닌 확정성을 고려한 설계 및 모듈화를 시켜올 것
 ㄴ 객체(추상 클/ 인터페이스) / 컴포넌트 (디자인 패턴) 택1
*/


//7월 17일
printf("지옥에 온걸 환영해 애들아! \n");

/*
▶ printf() / scanf()의 서식 문자

 - 서식 문자는 문자열을 출력 / 입력을 받을 때 해당 서식 문자의 자리를 다른 수로 대체하기 위한 자리 매김 역할을 하는 문자를 의미한다.

 - 사용하는 이유는 고정되어 있지 않는 문자열을 출력 / 입력 받는 것이 가능하기 때문


 ▷ printf / scanf 서식문자
 a. %d			->		 int
 b. %ld			->		 long
 c. %lld		->		 long long
 d. %c			->		 char
 e. %s			->		 문자열 (string)
 f. %f			->		 float
 g. %lf			->		 doulbe

 ▷ printf 특수문자
 (특수문자로 발동되는)
  - \n -> 개행
  - \t -> 수평
  - \v -> 수직
  - \\ -> \
  - \? -> ?
  - \' -> '
  - \" -> "

  
*/
	cout << "오늘 날씨가 \"매우\" 안좋다" << endl;

	TextColor(4, 15);

	cout << "================" << endl;
}


void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);



}