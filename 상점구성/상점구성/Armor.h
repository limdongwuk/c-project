#pragma once
#include <vector>
#include "Item.h"
class Armor : public Item
{
private:
	int _Hp;
	int _Defence;
	int _Gold;
	
public:
	Armor(std::string name, int hp, int defence, int gold);
	~Armor();
	
	int getHp() const;
	int getDefence() const;
	
	int getGold() const;
	 
	void ItemSpec() const override;
};

