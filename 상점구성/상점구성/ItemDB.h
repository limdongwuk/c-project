#pragma once
#include <iostream>
#include <vector>
#include "Item.h"
#include "Weapon.h"
#include "Armor.h"
class ItemDB
{
private:
	std::vector<Item*> items;
	
public:
	ItemDB();
	void Weaponadditem(const std::string& name, int damage, int gold);
	void Armoradditem(const std::string& name, int hp, int defence, int gold);	
	std::vector<Item*> getVector();
	std::vector<Item*> getInfo();
};

