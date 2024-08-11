#pragma once
#include <iostream>
#include <vector>
#include "Item.h"
#include "LostArkClass.h"
class Weapon : public Item
{
private:
    std::vector<Weapon>weapon;
    int Strength;
    int Agility;
    int Intelligence;
    int Damage;
    
public:
    Weapon(const std::string& _name, int _Strength, int _Agility, int _Intelligence, int _Damage);
    Weapon(const std::string& _name);
    Weapon();
    virtual void ItemPrint(int ClassChoice);
    void WeaponListSpec();
};


