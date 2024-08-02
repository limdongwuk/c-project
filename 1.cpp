#include <iostream>
using namespace std;

/*
class자
-객체지향 프로그래밍?
ㄴ우리가 살고 있는 실제 세계가 객체들로 구성되어 있는 것처럼
소프트웨어도 객체로 구성하는 방법
ㄴ사람, TV, 세탁기, 냉장고 등등.. 많은 객체가 존재함.
ㄴ고유한 기능을 수행하고 다른 객체들과 상호작용

-객체?
ㄴ클래스->틀이나 설계도->객체를 정의하는 틀이나 설계도
ㄴ틀만 만들었으면 됨?->써먹어야 되지 않음?
ㄴ객체는 설계도를 기반으로 실체화 시키는 것.->그래야 써먹으니까
*/

//구조체
struct Circle
{
public: //구조체는 암묵적으로 퍼블릭쓰고 생략가능

    //멤버변수
    int radius;
    string color;
    //멤버함수
    double calArea() 
    {
        return 3.14 * radius * radius;
    }
};
//클래스
//???구조체와 클래스가 뭐가 다른데?
class Circle1
{
private: //클래스는 기본적으로 프라이빗
    int radius;
    string color;

    double calArea()
    {
        return 3.14 * radius * radius;
    }
};


class Student
{
private :

public:

    void Print() { std::cout << "스튜던트 클래스의 프린트 함수"; }
    void Print(int a, int b) {};
    void Print(std::string str = "디폴트 매개변수") { std::cout << str << std::endl; }


    //클래스 내부에 함수 원형만
    int Sum(int a, int b);
};

class square
{
private :
    int a =0;
    int b =0;
    int c =0;
public : 
    void Print() 
    {
        cout << "사각형 클래스의 사각넓이 구하기" << endl;
    }
    void multiple(int a, int b)
    {
        c = a * b;
    }
    void resultPrint()
    {
        cout << c << endl;
    }
};




void main()
{
    //구조체
    Circle c;
    c.radius = 5;

    //클래스
    Circle1 cc;
    //엌 안되는데? 엑세스할 수 없습니다. 
    /*cc.radius = 5;*/

    //구조체(public)와 클래스(private)의 차이는 디폴트 접근제어지시자가 다르다.
    //private, public, protected
    //private : 클래스 내부에서만 참조가능
    //ㄴ숨겨야할 멤버변수
    //public : 함수, 생성자, 소멸자

    /*
    접근제어        클래스내부       클래스외부       상속클래스
    private            o                x               x
    public             o                o               o 
    protected          o                x               o
    */

    square sq;
    sq.Print();
    sq.multiple(20, 30);
    sq.resultPrint();
}

int Student::Sum(int a, int b) //Student 클래스 내부에 있는 sum이라는 함수 
{
    return 0;
}


/*

사각형의 클래스를 만들어 보세요.
-멤버함수로는 사각형의 넓이는 계산.
ㄴ출력까지 해보세요*/

//랜덤함수나오는 클래스