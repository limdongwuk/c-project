#pragma once
#include <vector>
#include "Item.h"
class Weapon : public Item
{
private:
	int _Damage;
	int _Gold;
	public : 
	Weapon(std::string name, int damage, int gold);
	~Weapon();
	/*int CriticalDamage();*/
	
public: 
	int getDamage() const;
	int getGold() const;
	void ItemSpec() const override;

};

