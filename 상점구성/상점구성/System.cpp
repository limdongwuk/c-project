#include "System.h"

void System::Menu()
{
	int number;
	std::cout << "1.상점 열기" << std::endl;
	std::cout << "2.인벤토리 열기" << std::endl;
	std::cout << "3.스텟창 열기" << std::endl;
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
		std::cout <<"잘못입력했습니다 다시입력해주세요."<<std::endl
	}*/
}
