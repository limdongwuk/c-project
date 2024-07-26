#include <iostream>

using namespace std;


#pragma region 함수
/*

▶ 상수란?

 - 변수와 달리 저장된 데이터를 변경할 수 없는 공간에 붙여진 이름을 의미
 ㄴ 상수는 한번 데이터가 저장되고 나면 변경하는 것이 "일반적"으로 불가능
 

 ▷ C / C++ 언어 상수의 종류

 - 리터럴 상수
 ㄴ 이름이 없는 상수
 ㄴ 리터럴 상수는 이름(메모리적 이름)이 없는 상수를 의미하며 임시 값이라고 지칭한다.(numL, numR)


 - 심볼릭 상수
 ㄴ 이름이 존재하는 상수
 ㄴ 심볼릭 상수는 const 키워드를 통해서 선언이 가능하며 리터럴 상수와 달리 이름을 통해서 저장되어 있는 데이터를 읽어 들이는 것이 가능하다.


 ▶ constexpr

 - C++11 상수화 키워드
 ㄴ 객체 / 함수앞에 붙일 수가 있고 해당 객체나 함수의 반환값을 "컴파일 타임"에 알 수 있다.
 ㄴ C++ 17부터 람다식에도 적용 가능

 ※ 컴파일 타임 확정이기 때문에 템플릿과 궁합이 좋다.

 
 ▶ readonly
 - C#에서 지원하는 상수화 키워드

 ㆍ const vs readonly
 const
 ㄴ 초기화 이후 값을 변경할 수 없다.
 ㄴ 선언하는 시점에만 초기화 가능
 ㄴ 컴파일 타임 상수

 redonly
 ㄴ 초기화 이후 값을 변경할 수 없다.
 ㄴ 단, 선언하는 시점과 생성자라는 놈에서 초기화가 1번 가능하다.
 ㄴ 런타임 상수

 - 컴파일 타임 상수는 변수가 실제 값으로 대체되고 런타임 상수는 변수 참조 형식이기 때문에 성능과 속도를 고려하면 const가 유리하다.

 - 다만 인스턴스마다 다른 값을 할당하고 싶거나 사용자 정의 자료형이라면 readonly를 사용하는게 유지보수에 더 좋다.

 
 ★★★★★
 define vs const
 ㄴ 매크로를 배우고 나서....
 



 ★★★★★
 const VS constexpr
 불완전 상수화 vs 완전 상수화
런타임에 확정을 지을 수 있는지, 컴파일 타임에 확정을 지을 수 있는지
오류가 발견되는 시기가 다름(constexpr이 더빠름)



※ 신입이 약한 파트
ㄴ 문자 / 열 + 상수

*/
#pragma endregion

void main()
{
    cout << "== 리터럴 상수 ==" << endl;
    cout << "정수형: " << 10 << ", " << 10L << ", " << 10LL << endl;
    cout << "실수형: " << 3.14f << ", " << 3.14 << endl;
    cout << "문자형: " << 'A' << endl;

    printf("\n");

    // 변/상수는 생성과 동시에 값을 대입하는 것이 가능하다.
    // ㄴ 이것을 바로 초기화라 했었다.

    // A (변수 초기화)
    int numberA = 10;
    // B (선언 이후 할당)
    int numberB;
    numberB = 10;

    cout << "== 심볼릭 상수 ==" << endl;
    const int nValueA = 0;
    const float fValueB = 3.14f;
    const double dbValueA = 3.14;
    
    cout << "출력 값:" << nValueA << ", " << fValueB << ", " << dbValueA << endl;
    printf(" %d, %f, % 1f\n", nValueA, fValueB, dbValueA);

   
        //상수는 다양하게 사용이 되니 꼭 숙지할 것
    //1. 
    const int cNumberA = 100;
    int const cNumberB = 200;
    
    //2. 변수명이 가르키는 주소의 값을 변경할 수 없다.
    //ㄴ 주소의 상수화
    const int* cNumberC;

    // 3. 포인터 변수의 상수화
    int pNum;
    int* const cNumberD = &pNum;
    
    // 4. 주소와 포인터 변수의 상수화
    const int* const cNumberE = &pNum;



}
