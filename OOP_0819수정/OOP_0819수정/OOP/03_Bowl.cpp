#include "03_Bowl.h"
#include <iostream>

Bowl::Bowl(Food& food) : food(food)
{
	std::cout << "그릇에 " << food.name << "를(을) 담았습니다." << std::endl;
}
