#include <iostream>
#include <time.h>

// 편하다. -> 무겁다.
using namespace std;

// using 지시자 : 지정된 네임스페이스의 모든 명칭을 이 선언이 있는 영역으로 가져와 소속 지정없이 사용하겠다.

using std::cin;
using std::cout;
using std::endl;



namespace A
{
    namespace B
    {
        namespace C
        {
            int EnemyAttack;
        }
    }
}

namespace ABC = A::B::C;


#pragma region 자료형 + 변수 선언
/*
▶ 자료형

 - 변수의 종류를 의미하며 기초 자료형(Data Type)이라고 생각하면 된다.

 · 변수란?

 - 변할 수 있는 숫자나 데이터를 의미
 - 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름이 되겠다.
 - 변수를 이용하면 특정 값을 저장 후 해당 값을 이용한 여러가지 연산이 가능하다. (혹은 처리할 수 있다.)

▶ 자료형의 종류 ( C / C++)

- 정수형 (소수점이 없는 수를 표현하기 위한 자료형)
- 실수형 (소수점이 존재하는 수를 표현하기 위한 자료형)
- 문자형 (문자를 표현하기 위한 자료형)
- 논리형 (참 / 거짓을 판별하는 자료형)

 · 자료형의 종류 (정수형)

 - short		(2 바이트)
 - int			(4 바이트)
 ★- long		(4 ~ 8 바이트)
 - long long	(8 바이트)


 · 자료형의 종류 (실수형)

 - float (4 바이트)(0.0000000)8자리까지 지원
 - double (8 바이트)14자리~16자리까지 지원

 ※ decimal(!6바이트)
 -29자리 지원
 -쓰지말것
 

 · 자료형의 종류 (문자형)

 - char (1바이트)


 · 자료형의 종류 (논리형)

 - bool (1바이트 -> 0(거짓) / 1(참)을 나타내는 자료형)
 ㄴ bool 자료형은 정수가 와야 할 위치에 오면 각각 1과 0으로 반환이 될뿐 각각 정수를 의미하는게 아니다.


 - 기본적으로 C언어는 논리형에 해당하는 참 /거짓이라는 자료형이 별도로 존재하지 않았다.
 ㄴ 그렇기 때문에 정수 0을 거짓 / 0을 제외한 정수는 참으로 인지를 시켰다.
 ㄴ 현재는 C언어에도 bool 자료형이 존재하니 헷갈리지 말 것
        ㄴ#include <stdbool.h>

  - C++로 넘어 오면서 참 또는 거짓을 나타내는 키워드를 추가했고 이게 true / false가 되겠다.

  - 그리고 C / C++ 자료형은 기본적으로 음수를 표현하는 것이 가능하지만 경우에 따라서 음수를 표현하지 않는 대신에 양수를 좀 더 크게 표현하는 방법이 있다.
  (signed(음) / unsighned(양)


  
  ▶ 자료형의 크기

  1. 정수형

  자료형 타입            크기                       범위
  short                 2바이트          -32767 ~ 32767까지의 수를 담는다.
  unsigned short        2바이트          0 ~ 65535까지의 수를 담는다.
  int                   4바이트          -21억 ~ 21억까지의 수를 담는다.
  unsigned int          4바이트          0 ~ 약 43억까지의 수를 담는다.
  long                  4바이트(32)      -21억 ~ 21억까지의 수를 담는다.


  2. 실수형
  float                 4바이트                소수점을 담는다.
  double                8바이트                소수점을 담는다.


  3. 문자형

  char                  1바이트                정수를 담는다. (문자)
  unsigned char         1바이트                양의 정수를 담는다. (문자)

  4. 논리형

  bool                  1바이트                0 (거짓) / 1(참)


  ▶ 변수 선언

   - 변수 선언이란?(변수를 만들었다)
   ㄴ 값을 저장할 수 있는 메모리 공간에 이름을 정의하는걸 뜻한다.

   EX: 기본 형식 -> 변수 형태(종류) 변수명
   ㄴ int number;

   EX: int number = 20;(=은 우측값이 왼쪽으로)
   ㄴ 변수의 선언으로 인해서 number 라는 이름으로 메모리 공간이 할당이 되었다.
   ㄴ int number = 20; 은 단순히 number에 20을 저장하는게 아닌 number가 의미하는 메모리 공간에 20을 넣어라 라는 의미가 되겠다.
*/
#pragma endregion


void main()
{
    A::B::C::EnemyAttack;
        ABC::EnemyAttack;
    
    //unsigned int
    //cout << endl;
    // 효율적이다. -> 개발자가 고통 받는다.
    //std::cout << std::endl;


    //1번케이스
    //int EnemyAttack;
    //int EnemyAttack;
       // (왜 안되는지 찾아보기)(메모리에 할당은 되지만)


    int TestNumA = true;
        int TestNumB = false;
        int TestResult = TestNumA + TestNumB;


        //
        cout << "boolean: " << TestResult << endl;

        cout << endl;

        // 변수 초기화 -> 일단 다양한 방법이 존재한다.
        // A(선언 이후 할당)
        int Num0;
        Num0 = 10;

        // 변수 초기화
        // B
        int Num1 = 3;
        int Num2 = 6;
        
        
        int Total;
        int Num3;
        int Num4;
        int Num5;
        int Num6, Num7, Num8;
        Num6 = Num7 = Num8 = 100;


        // sizeof(): 키워드의 한 종류로 변수 또는 자료형의 크기를 계산하는 것이 가능하다.
        cout << "정수 사이즈" << sizeof(1) << endl;
        cout << "정수 사이즈" << sizeof(2) << endl;
        cout << "true 사이즈" << sizeof(true) << endl;
        cout << "false 사이즈" << sizeof(false) << endl;

        cout << endl;


        // =======

        // 입력이 추가

        int nValue = 0;
        
        // c++
        cout << "숫자 입력: " << endl;
        cin >> nValue;

        cout << "내가 입력한 숫자:" << nValue << endl;

        cout << endl;

        // c
        printf("정수 입력: ");
        scanf_s("%d", &nValue);

        cout << endl;

        short ValueA = 10;
        int ValueB = 20;
        long ValueC = 30;
        long long ValueD = 40;

        cout << "C++ short: " << ValueA << ", " << "사이즈: " << sizeof(ValueA) << endl;
        cout << "C++ int: " << ValueB << ", " << "사이즈: " << sizeof(ValueB) << endl;
        cout << "C++ long: " << ValueC << ", " << "사이즈: " << sizeof(ValueC) << endl;
        cout << "C++ long long: " << ValueD << ", " << "사이즈: " << sizeof(ValueD) << endl;

        printf("C언어 Short: %d, %d \n", ValueA, sizeof(ValueA));
        printf("C언어 int: %d, %d \n", ValueB, sizeof(ValueB));
        printf("C언어 long: %ld, %ld \n", ValueC, sizeof(ValueC));
        printf("C언어 long long: %lld, %lld \n", ValueD, sizeof(ValueD));

        /*
        ▶ 변수 포기법
        
        1. 헝가리안

         - 예전 절차지향적인 방식으로 코딩을 할때 많이 사용된 표기법
         ㄴ 이 변수가 어떤 변수인지 알기 위하여 서로 약속하듯이 앞에 그 변수형태가 뜻하는 약자를 붙인다.

         EX
         int num        <->         nNum;
         float ValueA   <->         fValueA;
         double ValueA  <->        dbValueA;
         char ValueA    <->         chValueA;
         bool ValueA    <->         bValueA;
          - 현재 네이티브 코딩 방식에서는 거의 채용되지 않는다.
            ㄴ 객체지향을 사용하기 때문

        
        
        2. 카멜식

        - 객체지향적인 방식의 코딩으로 전환이 되면서 가독성을 챙긴 표기법

        EX
        int playerselectnum     <->     playerSelectNum

        playerselectnum
        playerSelectNum


        3. 파스칼 케이스

         int playerselectnum     <->     PlayerSelectNum

        playerselectnum
        playerSelectNum
        PlayerSelectNum

        4. 스네이크
         
         int playerselectnum     <->     Player_Select_Num
        
        playerselectnum
        playerSelectNum
        PlayerSelectNum
        Player_Select_Num



        5. 레스

        int playerselectnum     <->     PlSelN

        ˙ 변수 이름의 특징
         - 기본적으로 변수의 이름은 알파벳, 숫자, _로 구성된다.
         - c언어는 대소문자를 구분하며 Num과 num은 다른 변수 이름이다.

         a. 변수의 이름은 숫자로 시작할 수 없다.
         b. 키워드 역시 변수 이름으로 사용할 수 없다.
         c. 이름 사이에 공백이 삽입 될 수 없다.


         int Num100;
         int Num101;
         int _Num102;
         int 6Num103;
         int 6Num;(숫자 시작)
         int Num look;(공백 삽입)
         int bool;(bool이 변수의 이름)
        
        */

        //랜덤시드 초기화
        srand(time(NULL));

        int numR;

        // 0, 1, 2, 3, 4
        numR = rand() % 5;
        cout << numR << endl;

        //Rand 

        int weaponA = 0;

        weaponA = rand() % 26+20;

        // 20 ~ 25 무기값 나오기
        cout << "이번에 나온 무기의 공격력: " << weaponA << endl;

}

/*
과제1. 좋아하는 캐릭터 출력 II

 - 동일 캐릭터 사용 금지

 - 어제 진행한 과제와 동일하지만 컬러풀하게 만들어 온다.

 - 최소 사이즈 : 50 x 50


 과제2. 간단한 아이템 만들기

 - 종류와 대미지, 그리고 가격이 다른 무기 및 방어구 5종을 만들고 화면에 출력한다.

 - 출력된 하면에는 아이템 종류에 따른 가격 + 특성이 함께 나열되야 한다.

 - 무기 1종 + 방어구 1종에는 반드시 도트를 적용해야 한다.
 ㄴ 총 2종

 과제3. 랜덤 숫자 담기
 - 1 ~ 5까지의 랜덤 숫자
 
 -6 ~19까지의 랜덤 숫자
 
 - 23 ~189까지의 랜덤 숫자
 ㄴ 출력이 될때 최소와 최대값을 명시해야 한다.


 한줄 조사. 반복문 + 연산자

  - 반복문의 종류 + 연산자의 종류

  - 노트에 적어온다.




*/

/*




*/