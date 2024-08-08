
#include "Weapon.h"

Weapon::Weapon(const std::string& _name, int _Strength, int _Agility, int _Intelligence, int _Damage)
    :Item(_name), Strength(_Strength), Agility(_Agility), Intelligence(_Intelligence), Damage(_Damage)
{
}
