#include "Armor.h"

Armor::Armor(std::string name, int hp, int defence, int gold)
	: Item(name), _Hp(hp), _Defence(defence), _Gold(gold)
{
}

Armor::~Armor()
{
}

int Armor::getHp() const
{
	return _Hp;
}

int Armor::getDefence() const
{
	return _Defence;
}

int Armor::getGold() const
{
	return _Gold;
}

void Armor::ItemSpec() const
{
	std::cout << "방어력 : " << _Defence << "체력 : " << _Hp << "골드 : " << _Gold << std::endl;
}

