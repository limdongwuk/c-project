#pragma once
#include<iostream>
//virtual void Move()const = 0; //0또는 abstract 붙으면 순수 가상함수
//순수 가상함수 : 선언만하고 구현하진 않음.
//순수가상함수를 한개 이상을 포함한다면 추상클래스라고 함.
// 추상클래스 : 인스턴스화 시킬 수 없음. 다른 클래스들이 상속받아야 하는 기본 인터페이스나 기본 동작을 정의하는데 사용
//다형성, 코드 재사용성 연관있음...
//특정 함수들이 자식클래스에 의해 구현되도록 강제함.


//추상클래스
class Unit
{
protected:
    std::string name;
    int health;

public:
    Unit(const std::string& n, const int g);
    virtual~Unit();

public:
    //순수 가상함수
    virtual void Attack()const = 0;
    virtual void TakeDamage(int damage)const = 0;
};

