#pragma once
#include <iostream>
#include <vector>
#include "Item.h"
class Weapon : public Item
{
    private:
        int Strength;
        int Agility;
        int Intelligence;
        int Damage;
       


        
    public: 
        Weapon(const std::string& _name, int _Strength, int _Agility, int _Intelligence, int _Damage);
            
        

};

    void main()
{//
        std::vector<Weapon*>weapons;
        weapons.push_back(new Weapon("≥∞¿∫ ∞«∆≤∏¥", 100, 300, 0, 1800));
        weapons.push_back(new Weapon("√÷∞Ì±ﬁ ∞«∆≤∏¥", 500, 3000, 0, 5400));
        weapons.push_back(new Weapon("≥∞¿∫ º¶∞«", 100, 300, 0, 1800));
        weapons.push_back(new Weapon("√÷∞Ì±ﬁ º¶∞«", 500, 3000, 0, 5400));
        weapons.push_back(new Weapon("≥∞¿∫ ¥‹∞À", 400, 100, 0, 1800));
        weapons.push_back(new Weapon("√÷∞Ì±ﬁ ¥‹∞À", 4000, 500, 0, 5400));
       
        
}
