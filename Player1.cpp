#include "Player1.h"


Player1::Player1(const std::string& n, const int h)
    :Unit(n,h)
{


}

Player1::~Player1()
{
    std::cout << name << "����" << std::endl;
}

void Player1::Attack() const
{
    std::cout << name << "����" << std::endl;
}

void Player1::TakeDamage(int damagae) const
{
    std::cout << health << "�������� �Ծ���" << std::endl;
}

