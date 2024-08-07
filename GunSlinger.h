#pragma once
#include "LostArkClass.h"
class GunSlinger : public LostArkClass
{
    int Agility;
public : 
    GunSlinger(const std::string& _name, int _Hp, int _Attack, int _Defence, int Agility);
    void status() const override;
    void Move() override;
void Damage(int _Attack) override;
void classattack()const override;
std::string getName();
};

