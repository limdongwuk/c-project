#include<iostream>

using namespace std;

/*
 ㆍ 사용자 정의 자료형
  ㄴ 구조체, 공용체, 열거형, 클래스가 있다.

*/

#pragma region C_enum
/*
    1. 열거형
     - 관련된 상수들을 하나의 그룹으로 묶는다.
     - 코드의 가독성을 높이고 의미있는 이름을 부여할 수 있다.

*/
//기본 선언 방법
enum Color {Red, Green, White};
//enum RGB { Red, Green, White };
//명시적인 값을 할당
enum Direction {Left, Right=2, Up, Down};

#pragma endregion

#pragma region enumClass

enum class MyEnumClass
{

};


#pragma endregion





void main()
{
    Color color = Red;

    if (color==Red)
    {
        cout << "빨강" << endl;
    }
    else if(color==Green)
    {
        cout << "녹색" << endl;
    }

    Direction key = Left;

    switch (key)
    {
    case Left:

        cout << "왼쪽으로 이동" << endl;
        break;

    case Right:

        cout << "오른쪽으로 이동" << endl;
        break;

    case Up:

        cout << "위쪽으로 이동" << endl;
        break;

    case Down:

        cout << "아래쪽으로 이동" << endl;
        break;

    }
        
    int red = Red; //암시적으로 enum이 형변환 해줌

    cout << red << endl;




    
















}
