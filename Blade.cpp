#include "blade.h"





Blade::Blade(const std::string& _name, int _Hp, int _Strength, int _Attack, int _Defence)
    :LostArkClass(_name, _Hp, _Attack, _Defence), Strength(_Strength)
{
}

void Blade::status() const
{
    std::cout << "���� : " << name << std::endl;
    std::cout << "Hp : " << Hp << std::endl;
    std::cout << "�� : " << Strength << std::endl;
    std::cout << "���ݷ� : " << Attack << std::endl;
    std::cout << "���� : " << Defence << std::endl;
}



void Blade::Move()
{
    std::cout << "���̵带 ����Ű�� �����̼���" << std::endl;
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

void Blade::Damage(int _Attack)
{
    Hp -= (Defence - _Attack);
    std::cout << _Attack << "��ŭ�� ������ �޾ҽ��ϴ�. " << std::endl << "���� Hp : " << Hp << "�Դϴ�" << std::endl;

}

void Blade::classattack() const
{
    std::cout << "���̵尡�� Į�� �����Ͽ����ϴ�." << std::endl;
}

