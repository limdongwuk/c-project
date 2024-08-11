#include <iostream>
using namespace std;
/*
다형성
- 객체의 속성이나 기능이 상황에 따라 여러가지 형태를 가질 수 있는 성질

VirtualFunction(가상함수)
//상속관계에 있는 클래스에서 부모클래스의 함수를 자식 클래스에서 재정의(오버라이딩)
//하고 부모클래스의 포인터나 참조를 통해 자식클래스의 함수 호출
//오버로딩 vs 오버라이딩?<<★★★★면접질문
//버추얼을 붙여야 오버라이딩된 함수가 호출됨


*/
#include"Bike.h"
#include"Car.h"
void show(const Vehicle& obj)
{
    obj.Move();
}
void main() 
{
    Vehicle* v;//(v라는 객체 생성된것아님 new할때 생성됨)
    Vehicle c;//c라는 객체 생성된것 
    
    //부모의 포인터(v)로 자식클래스 참조 --> 동적바인딩이라고 함
    //생성자 소멸자 발동 순서 : 부모생성자-> 자식생성자 ->자식소멸자 ->부모 소멸자

    //부모클래스에서 ~vehicle앞에 버추얼 지우면 자식클래스 소멸자 호출안됨
    v = new Car("현기차");  //new를 통해 Car라는 클래스의 객체가 생성되는 것이고 v가 가리키고 있는 객체는 Car클래스의 객체가 됨.  
    v->Move();  //메서드 표현하는 방법 // v가 가리키는 객체의 Move함수를 실행하라는 뜻이 됨
    delete v;

    v = new Bike("오토바이");
    v->Move();
    delete v;
}