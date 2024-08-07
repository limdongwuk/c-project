#include "Player1.h"


Player1::Player1(const std::string& n, const int h)
    :Unit(n,h)
{


}

Player1::~Player1()
{
    std::cout << name << "공격" << std::endl;
}

void Player1::Attack() const
{
    std::cout << name << "공격" << std::endl;
}

void Player1::TakeDamage(int damagae) const
{
    std::cout << health << "데미지를 입었다" << std::endl;
}

