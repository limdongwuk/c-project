#include "Item.h"
#include "Weapon.h"
#include <vector>
#include "Shop.h"
#include "System.h"

void main()
{
	System system;
	system.Menu();
	Shop* S;
	S = new Shop();
	S->specverify();
	/*
	Item I;
	I.NamePrint();*/
}