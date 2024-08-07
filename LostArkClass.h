#pragma once
#include <conio.h>
#include <iostream>
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75


class LostArkClass
{

protected:
    std::string name;
    int Hp;
  
    int Attack;
    int Defence;
    int input;
  

public : 
    LostArkClass(const std::string& _name, int _Hp, int _Attack, int _Defence);
    ~LostArkClass();
    virtual void status() const = 0;
    virtual void Move();
    virtual void Damage(int _Attack) = 0;
    void choice();
    virtual void classattack() const = 0;
    
   
};
