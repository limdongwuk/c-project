#include "bike.h"

Bike::Bike(const std::string& n)
    :Vehicle(n)
{
    std::cout << "�ڽ�(Bike) ������ ȣ��" << std::endl;

}

Bike::~Bike()
{
    std::cout << "�ڽ�(Bike) �Ҹ��� ȣ��" << std::endl;
}

void Bike::Move() const
{
    std::cout << "�ڽ�(Bike) Move�Լ� ȣ��" << std::endl;
}
