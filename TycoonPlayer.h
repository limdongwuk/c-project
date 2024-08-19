#pragma once
#include <Windows.h>
#include "System.h"
#include <iostream>
class TycoonPlayer
{
    private:
        int _gold;
        int _Breadstock;
        int _hp;
public:

    TycoonPlayer(int gold, int Breadstock, int hp) : _gold(gold), _Breadstock(Breadstock), _hp(10) {};
    void Hp();  
    void Breadstock(); 
    void HpPrint();
    
    int getHp() const { return _hp; }
    int getBreadstock() const { return _Breadstock; }
};



