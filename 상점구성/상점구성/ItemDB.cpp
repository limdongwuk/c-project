#include "ItemDB.h"


ItemDB::ItemDB()
{
		Weaponadditem("일반 건틀릿", 1200, 1000);
		Weaponadditem("고급 건틀릿", 2400, 2000);
		Weaponadditem("일반 총", 1300, 1000);
		Weaponadditem("고급 총", 2600, 2000);
		Weaponadditem("일반 검", 1100, 1000);
		Weaponadditem("고급 검", 2200, 2000);
		Armoradditem("헬멧", 2000, 300, 1500);
		Armoradditem("견갑", 2000, 300, 1500);
		Armoradditem("상의", 2000, 300, 1500);
		Armoradditem("하의", 2000, 300, 1500);
		Armoradditem("장갑", 2000, 300, 1500);
		
}

void ItemDB::Weaponadditem(const std::string& name, int damage, int gold)
{
	items.push_back(new Weapon(name, damage, gold));
	
}

void ItemDB::Armoradditem(const std::string& name, int hp, int defence, int gold)
{
	items.push_back(new Armor(name, hp, defence, gold));
}

std::vector<Item*> ItemDB::getVector() //<>에 돌려줄때 타입을 적어준다.
{
	return items;
}

std::vector<Item*> ItemDB::getInfo()
{
	return std::vector<Item*>();
}










