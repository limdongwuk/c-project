#pragma once
#include <iostream>
#include <vector>
#include "Item.h"

class Amor : public Item
{
private :
    int Hp;
    int Defence;
    int Strength;
    int Agility;
    int Intelligence;
    std::vector<Amor>amor;
public:
    Amor(const std::string& _name, int _Hp, int _Defence, int _Strength, int _Agility, int _Intelligence);
    
    void AmorPrint();
    void AmorListSpec();
};
