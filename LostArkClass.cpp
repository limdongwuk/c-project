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
    std::cout << "ĳ���͸� ����Ű�� �����̼���" << std::endl;
    input = _getch();
    if (input = 224)
    {
        input = _getch();
    }
    if (input == UP)
    {
        std::cout << " ĳ���Ͱ� �������� �̵��մϴ�." << std::endl;
    }
    else if (input == DOWN)
    {
        std::cout << " ĳ���Ͱ� �Ʒ������� �̵��մϴ�." << std::endl;
    }
    else if (input == RIGHT)
    {
        std::cout << " ĳ���Ͱ� ���������� �̵��մϴ�." << std::endl;
    }
    else if (input == LEFT)
    {
        std::cout << " ĳ���Ͱ� �������� �̵��մϴ�." << std::endl;
    }
}

void LostArkClass::choice()
{
    std::cout << "������ �����ϼ���.1(�踶) / 2(���̵�) / 3(�ǽ�����)" << std::endl;
    
}






