#include "Vehicle.h"

Vehicle::Vehicle(const std::string& n)
    : name(n)
{
    std::cout << "�θ�Ŭ���� ������ ȣ��" << std::endl;
}

Vehicle::~Vehicle()
{
    std::cout << "�θ�Ŭ���� �Ҹ��� ȣ��" << std::endl;
}

void Vehicle::Move() const
{
    std::cout << "�θ�Ŭ���� Move�Լ� ȣ��" << std::endl;
}
