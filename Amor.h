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
    
public:
    Amor(const std::string& _name, int _Hp, int _Defence, int _Strength, int _Agility, int _Intelligence);
};
void main()
{
    std::vector<Amor*>amor;
    amor.push_back(new Amor("«Ô∏‰", 700, 70, 150, 150, 0));
    amor.push_back(new Amor("∞ﬂ∞©", 500, 40, 300, 300, 0));
    amor.push_back(new Amor("ªÛ¿«", 1000, 80, 70, 70, 0));
    amor.push_back(new Amor("«œ¿«", 800, 60, 30, 30, 0));
    amor.push_back(new Amor("¿Â∞©", 400, 20, 400, 400, 0));
}