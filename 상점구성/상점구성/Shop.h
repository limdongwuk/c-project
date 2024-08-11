#pragma once
#include <iostream>
#include "ItemDB.h"

class Shop
{
private:
	
	ItemDB* DB;
	
	
public:
	Shop(){ DB = new ItemDB; }
	void specverify();
	void ShopItemList();
	void ItemSell();
	void ItemCountdown();
};