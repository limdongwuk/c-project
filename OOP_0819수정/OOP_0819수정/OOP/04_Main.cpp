#include "04_AirConditioner.h"
#include "04_Person.h"
#include <iostream>

void SwapPerson(Person* p1, Person* p2)
{
	std::cout << "���� ȣ��!" << std::endl;
	Person* tmp = p1;
	p1 = p2;
	p2 = tmp;
}

int main()
{
	AirConditioner aircon;
	Person p("ö��");
#pragma region 1-1�� ����
	if (aircon.GetIsActivated())
		std::cout << "������ ����" << std::endl;
	else
		std::cout << "������ ����" << std::endl;
	
	p.TurnOnAircon(aircon);
	if (aircon.GetIsActivated())
		std::cout << "������ ����" << std::endl;
	else
		std::cout << "������ ����" << std::endl;

#pragma endregion


#pragma region 1-1�� ����
	// ���⿡�� p.Emotion �Լ��� ȣ���ؼ� ��� ����� Ȯ���ϼ���.

#pragma endregion


#pragma region Bonus 2
	Person* p1 = new Person("�μ�");
	Person* p2 = new Person("����");
	std::cout << "p1�� �̸�: " << p1->GetName() << std::endl;
	std::cout << "p2�� �̸�: " << p2->GetName() << std::endl;
	SwapPerson(p1, p2);
	std::cout << "p1�� �̸�: " << p1->GetName() << std::endl;
	std::cout << "p2�� �̸�: " << p2->GetName() << std::endl;
#pragma endregion


	return 0;
}