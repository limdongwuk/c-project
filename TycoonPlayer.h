#pragma once
#include <Windows.h>
#include <iostream>
#include "Customer.h"
class TycoonPlayer
{
private:
    int _gold;
    int _Breadstock;
    int _hp;
public:
    TycoonPlayer() : _gold(0), _Breadstock(0), _hp(10) {}
    TycoonPlayer(int gold, int Breadstock, int hp) : _gold(gold), _Breadstock(Breadstock), _hp(10) {};
      
    void Breadstock(); 
    void HpPrint()const;
    void BreadstockPrint() const;
    void Breadstock0or30();
    int getHp() const { return _hp; }
    void DecreaseHp();
    int getBreadstock()const  { return _Breadstock; }
    void setBreadstock(int amount);
  
};



