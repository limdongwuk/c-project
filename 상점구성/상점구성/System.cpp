#include "System.h"

void System::Menu()
{
	int number;
	std::cout << "1.���� ����" << std::endl;
	std::cout << "2.�κ��丮 ����" << std::endl;
	std::cout << "3.����â ����" << std::endl;
	std::cin >> number;
	if (number == 1)
	{
		S.ShopItemList();
	}
	/*else if (number == 2)
	{
		S.
	}
	else if (number == 3)
	{
		S.
	}
	else
	{
		std::cout <<"�߸��Է��߽��ϴ� �ٽ��Է����ּ���."<<std::endl
	}*/
}
