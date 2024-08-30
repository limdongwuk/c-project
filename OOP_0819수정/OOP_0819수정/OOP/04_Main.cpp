#include "04_AirConditioner.h"
#include "04_Person.h"
#include <iostream>

void SwapPerson(Person* p1, Person* p2)
{
	std::cout << "스왑 호출!" << std::endl;
	Person* tmp = p1;
	p1 = p2;
	p2 = tmp;
}

int main()
{
	AirConditioner aircon;
	Person p("철수");
#pragma region 1-1번 문제
	if (aircon.GetIsActivated())
		std::cout << "에어컨 켜짐" << std::endl;
	else
		std::cout << "에어컨 꺼짐" << std::endl;
	
	p.TurnOnAircon(aircon);
	if (aircon.GetIsActivated())
		std::cout << "에어컨 켜짐" << std::endl;
	else
		std::cout << "에어컨 꺼짐" << std::endl;

#pragma endregion


#pragma region 1-1번 문제
	// 여기에서 p.Emotion 함수를 호출해서 출력 결과를 확인하세요.

#pragma endregion


#pragma region Bonus 2
	Person* p1 = new Person("민수");
	Person* p2 = new Person("영희");
	std::cout << "p1의 이름: " << p1->GetName() << std::endl;
	std::cout << "p2의 이름: " << p2->GetName() << std::endl;
	SwapPerson(p1, p2);
	std::cout << "p1의 이름: " << p1->GetName() << std::endl;
	std::cout << "p2의 이름: " << p2->GetName() << std::endl;
#pragma endregion


	return 0;
}