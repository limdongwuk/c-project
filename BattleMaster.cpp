#include "Battlemaster.h"


BattleMaster::BattleMaster(const std::string& _name, int _Hp, int _Agility, int _Attack, int _Defence)
    :LostArkClass(_name, _Hp, _Attack, _Defence), Agility(_Agility)
{

}

void BattleMaster::status() const
{
    std::cout << "���� : " << name << std::endl;
    std::cout << "Hp : " << Hp << std::endl;
    std::cout << "��ø : " << Agility << std::endl;
    std::cout << "���ݷ� : " << Attack << std::endl;
    std::cout << "���� : " << Defence << std::endl;
}

void BattleMaster::Move()
{
    std::cout << "��Ʋ�����͸� ����Ű�� �����̼���" << std::endl;
    
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

void BattleMaster::Damage(int _Attack)
{
    Hp -= (Defence - _Attack);
    std::cout << _Attack << "��ŭ�� ������ �޾ҽ��ϴ�. " << std::endl << "���� Hp : " << Hp << "�Դϴ�" << std::endl;
}

void BattleMaster::classattack() const
{
    std::cout << "��Ʋ�����Ͱ� �ָ����� �����Ͽ����ϴ�." << std::endl;
}

std::string BattleMaster::getName()
{
    return name;
}

