#include "Shop.h"


void Shop::PrintList()
{
    if(�踶�����������)
    {
        int WeaponAndAmorChoice;
        int WeaponChoice;
        std::cout << "����&�� �����Դϴ�." << std::endl;
        std::cout << "������ �з��� �������ּ���." << std::endl;
        std::cout << "1. ����" << std::endl;
        std::cout << "2. ��" << std::endl;
        std::cin >> WeaponAndAmorChoice;

        switch (WeaponAndAmorChoice)
        {
            
        case 1:
            std::cout << CL->getName() << "������ ���� ����� �����帮�ڽ��ϴ�. �������� ���÷��� ��ǰ�� ��ȣ�� �Է��ϼ���." << std::endl;
            std::cout << "1.���� ��Ʋ��(300G)" << std::endl;
            std::cout << "2.�ְ�� ��Ʋ��(30000G)" << std::endl;
            std::cin >> WeaponChoice;
            switch (WeaponChoice)
            {
            case 1:
                ���� ��Ʋ��(������ ������ itemcpp)
          

            }

        case 2: 
        }
        std::cout << "�������� ���÷��� �ǸŻ�ǰ�� ��ȣ�� �Է��ϼ���." << std::endl;
        std::cout << "1.���� ��Ʋ��(300G)" << endl;
}

void Shop::ClassWeaponPrint()
{
    CL->PrintList();
}
