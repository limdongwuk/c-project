#pragma once

#include<iostream>
//���� �θ� Ŭ����
//��������� �ߺ� ���Ǹ� �����ִ� �༮

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

