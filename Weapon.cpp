
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
        printf("���� ��Ʋ��\n");
        printf("�ְ�� ��Ʋ��\n");
        break;
    case 2:
        printf("���� ��Ʋ��\n");
        printf("�ְ�� ��Ʋ��\n");
        break;
    case 3:
        printf("���� ��Ʋ��\n");
        printf("�ְ�� ��Ʋ��\n");
        break;
    }
}

void Weapon::WeaponListSpec()
{
    weapon.push_back(Weapon("���� ��Ʋ��", 100, 300, 0, 1800));
    weapon.push_back(Weapon("�ְ�� ��Ʋ��", 500, 3000, 0, 5400));
    weapon.push_back(Weapon("���� ����", 100, 300, 0, 1800));
    weapon.push_back(Weapon("�ְ�� ����", 500, 3000, 0, 5400));
    weapon.push_back(Weapon("���� �ܰ�", 400, 100, 0, 1800));
    weapon.push_back(Weapon("�ְ�� �ܰ�", 4000, 500, 0, 5400));
}


