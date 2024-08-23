#pragma once
#include "03_Food.h"
#include <iostream>

class Person
{
public:
	void EatFood(Food& food);
	Food* MakeFood(const std::string& name);
};

