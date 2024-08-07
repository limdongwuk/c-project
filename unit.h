#pragma once

#include<iostream>
//여긴 부모 클래스
//헤더파일의 중복 정의를 막아주는 녀석

class Unit
{
protected:
    std :: string name;
    int health;
public:
    Unit();
    Unit(const std::string& n, const int h);
    ~Unit();
public:
    void TakeDamage(const int damage);
};

