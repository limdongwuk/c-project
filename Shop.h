#pragma once
#include "LostArkClass.h"
#include "gunslinger.h"
#include "blade.h"
#include "Battlemaster.h"

class Shop
{private : 
    LostArkClass* CL;

public:
    void Sell();
    void Buy();
    void PrintList();
    void QuantityLeft();
    void ClassWeaponPrint();
};

