#include "03_Bowl.h"
#include <iostream>

Bowl::Bowl(Food& food) : food(food)
{
	std::cout << "�׸��� " << food.name << "��(��) ��ҽ��ϴ�." << std::endl;
}
