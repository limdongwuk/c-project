#include "03_Person.h"
#include <iostream>

void Person::EatFood(Food& food)
{
	std::cout << "���� " << food.name << "��(��) �Դ´�." << std::endl;
	food.name = "�� �׸�";
}

Food* Person::MakeFood(const std::string& name) //food* ��ȯŸ�� person::makefood�Լ�
{
	Food myFood(name);
	std::cout << "���� " << name << "��(��) �丮�Ѵ�." << std::endl;
	return &myFood;
}
