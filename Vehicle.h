#pragma once
#include<iostream>
//부모 클래스
class Vehicle
{
protected:
    std::string name;
public:
    Vehicle(std::string& n);
    Vehicle() {};

   virtual~Vehicle(); //객체가 올바르게 해제가 될수있도록 소멸자 앞에 virtual
   //다형성을 활용할때 객체가 올바르게 소멸되도록  virtual을 쓰지않으면 기본클래스의 소멸자만 호출되고 자식클래스의 소멸자는 호출되지 않는다.
   //안쓰면 기본클래스의 소멸자만호출됨 //자식클래스의 동적할당한게 있으면 소멸자가 호출이 되어야 하므로 

    virtual void Move()const; //0또는 abstract 붙으면 순수 가상함수

};

