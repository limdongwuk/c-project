#include "04_Person.h"

Person::Person(const std::string& name) : name(name)
{
}

Person::Person(const Person& p)
{
	name = p.name;
	std::cout << "Person 클래스 복사생성자 호출! Bonus 2번 문제 틀림!" << std::endl;
}

const std::string& Person::GetName() const
{
	return name;
}

void Person::TurnOnAircon(AirConditioner& activate)
{
	activate.SetActivate(1);
}

