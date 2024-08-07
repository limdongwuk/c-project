#include "gunslinger.h"





GunSlinger::GunSlinger(const std::string& _name, int _Hp, int _Agility, int _Attack, int _Defence)
         :LostArkClass(_name, _Hp, _Attack, _Defence), Agility(_Agility)
{

}
void GunSlinger::status() const
{
    std::cout << "직업 : " << name << std::endl;
    std::cout << "Hp : " << Hp << std::endl;
    std::cout << "민첩 : " << Agility << std::endl;
    std::cout << "공격력 : " << Attack << std::endl;
    std::cout << "방어력 : " << Defence << std::endl;
{
}
}

void GunSlinger::Move()
{
    std::cout << "건슬링어를 방향키로 움직이세요" << std::endl;
    input = _getch();
    if (input = 224)
    {
        input = _getch();
    }
    if (input == UP)
    {
        std::cout << " 캐릭터가 위쪽으로 이동합니다." << std::endl;
    }
    else if (input == DOWN)
    {
        std::cout << " 캐릭터가 아래쪽으로 이동합니다." << std::endl;
    }
    else if (input == RIGHT)
    {
        std::cout << " 캐릭터가 오른쪽으로 이동합니다." << std::endl;
    }
    else if (input == LEFT)
    {
        std::cout << " 캐릭터가 왼쪽으로 이동합니다." << std::endl;
    }
}

void GunSlinger::Damage(int _Attack)
{
    Hp += (Defence - _Attack);
    std::cout << _Attack << "만큼의 공격을 받았습니다. " << std::endl << "남은 Hp : " << Hp << "입니다" << std::endl;
}

void GunSlinger::classattack() const
{
    std::cout << "건슬링어가 총으로 가격하였습니다." << std::endl;
}

std::string GunSlinger::getName()
{
    return name;
}


