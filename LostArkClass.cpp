#include "LostArkClass.h"

LostArkClass::LostArkClass(const std::string& _name, int _Hp, int _Attack, int _Defence)
    :name(_name), Hp(_Hp), Attack(_Attack), Defence(_Defence), input(0)
{
}

LostArkClass::~LostArkClass()
{
}

void LostArkClass::Move()
{
    std::cout << "캐릭터를 방향키로 움직이세요" << std::endl;
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

void LostArkClass::choice()
{
    std::cout << "직업을 선택하세요.1(배마) / 2(블레이드) / 3(건슬링어)" << std::endl;
    
}






