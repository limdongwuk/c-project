#pragma once
#include "LostArkClass.h"

class Blade : public LostArkClass
{
    int Strength;
public:
    Blade (const std::string& _name, int _Hp, int _Strength, int _Attack, int _Defence);
    void status() const override;
    void Move() override;
    void Damage(int _Attack) override;
    void classattack()const override;
};

