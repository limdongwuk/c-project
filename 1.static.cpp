#include <iostream>
using namespace std;

/*
static,

extern
외부변수
다른파일에 있는 전역변수를 여러파일에서 공유하기위해 사용



*/
//staticVariable.cpp안에 있는 전역변수를 참조한다.
//extern int num1;
//
//static int a; //전역변수에서 붙는 static과 함수안에서, 클래스내 멤버변수에 붙이는 스태틱 성격이 다다름
//
//void Count();
//
//static int sNum;//스태틱붙으면 알아서 0으로 초기화 해준다.
//=================================
//클래스 내의 static?
//클래스 내부에서 static으로 선언된 변수는 해당 클래스의
//모든 인스턴스에서 공유됨. 클래스의 인스턴스 끼리 공통으로 사용되는 변수
//클래스의 인스턴스가 없이도 접근이 가능하다.


//선언방법
//클래스 내부에서 static을 사용하여 선언
//이 선언은 컴파일러한테 해당 클래스에 정적 멤버변수가 있음을 알려줌
//외부에서 초기화해야함.
//::을 사용해서 초기화를 해야함.
//=================================

class Character
{
    private:
        static int count;
        int num;
        public:
            Character() {
                count++;
            }
            static void PrintCount() //클래스 인스턴스 없이 호출가능한 함수
            {
                cout << count << endl;
                //오류 : static멤버함수는 일반 멤버 변수를 호출할 수 없다.
               /* cout << num << endl;*/
            }

};

int Character::count = 0;

void main()
{
    //Count();
    //Count();
    //Count();
    Character::PrintCount(); //인스턴스 생성안했는데 함수 호출 가능
    Character baba; //객체가 생성될때마다 생성자발동하여 카운트+
    Character::PrintCount(); 
    Character war;
    Character::PrintCount();

}

//void Count()
//{
//    static int x = 0;//정적
//    int y = 0; //지역
//    x = x + 1;
//    y = y + 1;
//
//    cout << "x값  : " << x << "y값 : " << y << endl;
//}
