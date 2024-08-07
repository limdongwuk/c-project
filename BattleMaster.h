#pragma once
#include "LostArkClass.h"

class BattleMaster : public LostArkClass
{
    int Agility;
public:
    BattleMaster(const std::string& _name, int _Hp, int _Agility, int _Attack, int _Defence);
    void status() const override;
    void Move() override;
    void Damage(int _Attack) override;
    void classattack()const override;
    std::string getName();
};

