
#include "Weapon.h"

Weapon::Weapon(const std::string& _name, int _Strength, int _Agility, int _Intelligence, int _Damage)
    :Item(_name), Strength(_Strength), Agility(_Agility), Intelligence(_Intelligence), Damage(_Damage)
{
}

Weapon::Weapon(const std::string& _name): Item(_name)
{

}

void Weapon::WeaponPrint(int ClassChoice)
{
    
    switch (ClassChoice)
    {
    case 1:
        printf("≥∞¿∫ ∞«∆≤∏¥\n");
        printf("√÷∞Ì±ﬁ ∞«∆≤∏¥\n");
        break;
    case 2:
        printf("≥∞¿∫ ∞«∆≤∏¥\n");
        printf("√÷∞Ì±ﬁ ∞«∆≤∏¥\n");
        break;
    case 3:
        printf("≥∞¿∫ ∞«∆≤∏¥\n");
        printf("√÷∞Ì±ﬁ ∞«∆≤∏¥\n");
        break;
    }
}

void Weapon::WeaponListSpec()
{
    weapon.push_back(Weapon("≥∞¿∫ ∞«∆≤∏¥", 100, 300, 0, 1800));
    weapon.push_back(Weapon("√÷∞Ì±ﬁ ∞«∆≤∏¥", 500, 3000, 0, 5400));
    weapon.push_back(Weapon("≥∞¿∫ º¶∞«", 100, 300, 0, 1800));
    weapon.push_back(Weapon("√÷∞Ì±ﬁ º¶∞«", 500, 3000, 0, 5400));
    weapon.push_back(Weapon("≥∞¿∫ ¥‹∞À", 400, 100, 0, 1800));
    weapon.push_back(Weapon("√÷∞Ì±ﬁ ¥‹∞À", 4000, 500, 0, 5400));
}


