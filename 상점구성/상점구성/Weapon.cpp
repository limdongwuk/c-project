#include "Weapon.h"

Weapon::Weapon(std::string name, int damage, int gold)
	: Item(name), _Damage(damage), _Gold(gold)
{
}

Weapon::~Weapon()
{
}

int Weapon::getDamage() const
{
	return _Damage;
}

int Weapon::getGold() const
{
	return _Gold;
}

void Weapon::ItemSpec() const
{
	std::cout << "데미지 : " << _Damage << "가격 : " << _Gold << std::endl;
}



//int Weapon::CriticalDamage()
//{
//	int _Critical;
//	srand(time(NULL));
//	_Critical = rand() % 80+1;
//	int arr[80] = {};
//
//	for (int i = 0; i < 80; i++)
//	{
//		arr[i] == i + 1;
//		if (arr[i] == _Critical)
//		{
//			return _Damage *= 1.5;
//		}
//		else
//		{
//			return _Damage;
//		}
//	}
//}


