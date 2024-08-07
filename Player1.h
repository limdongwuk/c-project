#pragma once
#include"unt.h"
class Player1 : public Unit
{
public:
    Player1(const std::string& n, const int h);
    ~Player1();
    void Attack()const override;
    void TakeDamage(int damagae) const override;
};

