#include "Battlemaster.h"


BattleMaster::BattleMaster(const std::string& _name, int _Hp, int _Agility, int _Attack, int _Defence)
    :LostArkClass(_name, _Hp, _Attack, _Defence), Agility(_Agility)
{

}

void BattleMaster::status() const
{
    std::cout << "직업 : " << name << std::endl;
    std::cout << "Hp : " << Hp << std::endl;
    std::cout << "민첩 : " << Agility << std::endl;
    std::cout << "공격력 : " << Attack << std::endl;
    std::cout << "방어력 : " << Defence << std::endl;
}

void BattleMaster::Move()
{
    std::cout << "배틀마스터를 방향키로 움직이세요" << std::endl;
    
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

void BattleMaster::Damage(int _Attack)
{
    Hp -= (Defence - _Attack);
    std::cout << _Attack << "만큼의 공격을 받았습니다. " << std::endl << "남은 Hp : " << Hp << "입니다" << std::endl;
}

void BattleMaster::classattack() const
{
    std::cout << "배틀마스터가 주먹으로 가격하였습니다." << std::endl;
}

std::string BattleMaster::getName()
{
    return name;
}

