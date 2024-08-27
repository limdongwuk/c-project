#include "03_Person.h"
#include <iostream>

void Person::EatFood(Food& food)
{
	std::cout << "나는 " << food.name << "를(을) 먹는다." << std::endl;
	food.name = "빈 그릇";
}

Food* Person::MakeFood(const std::string& name) //food* 반환타입 person::makefood함수
{
	Food myFood(name);
	std::cout << "나는 " << name << "를(을) 요리한다." << std::endl;
	return &myFood;
}
