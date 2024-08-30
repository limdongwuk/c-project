#include "04_Person.h"

Person::Person(const std::string& name) : name(name)
{
}

Person::Person(const Person& p)
{
	name = p.name;
	std::cout << "Person Ŭ���� ��������� ȣ��! Bonus 2�� ���� Ʋ��!" << std::endl;
}

const std::string& Person::GetName() const
{
	return name;
}

void Person::TurnOnAircon(AirConditioner& activate)
{
	activate.SetActivate(1);
}

