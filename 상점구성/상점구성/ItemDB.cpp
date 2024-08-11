#include "ItemDB.h"


ItemDB::ItemDB()
{
		Weaponadditem("�Ϲ� ��Ʋ��", 1200, 1000);
		Weaponadditem("��� ��Ʋ��", 2400, 2000);
		Weaponadditem("�Ϲ� ��", 1300, 1000);
		Weaponadditem("��� ��", 2600, 2000);
		Weaponadditem("�Ϲ� ��", 1100, 1000);
		Weaponadditem("��� ��", 2200, 2000);
		Armoradditem("���", 2000, 300, 1500);
		Armoradditem("�߰�", 2000, 300, 1500);
		Armoradditem("����", 2000, 300, 1500);
		Armoradditem("����", 2000, 300, 1500);
		Armoradditem("�尩", 2000, 300, 1500);
		
}

void ItemDB::Weaponadditem(const std::string& name, int damage, int gold)
{
	items.push_back(new Weapon(name, damage, gold));
	
}

void ItemDB::Armoradditem(const std::string& name, int hp, int defence, int gold)
{
	items.push_back(new Armor(name, hp, defence, gold));
}

std::vector<Item*> ItemDB::getVector() //<>�� �����ٶ� Ÿ���� �����ش�.
{
	return items;
}

std::vector<Item*> ItemDB::getInfo()
{
	return std::vector<Item*>();
}










