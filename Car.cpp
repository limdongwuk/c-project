#include "Car.h"

Car::Car(const std::string& n)
    :Vehicle(n)
{
    std::cout <<"�ڽ� Car ������ ȣ��"<<std::endl;
}

Car::~Car()
{
    std::cout << "�ڽ�(Car) �Ҹ��� ȣ��" << std::endl;
}

void Car::Move() const
{
    std::cout << "�ڽ�(Car) Move�Լ� ȣ��" << std::endl;
}