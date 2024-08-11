#include "Shop.h"

//void Shop::ItemListPrint()
//{
//	아이템 리스트 전체를 보여준다.
//}
//
//void Shop::specverify()
//{번호 입력 시 스펙을 보여준다.
//}

void Shop::specverify()
{
	int number;
	std::cout << "아이템 상세정보를 보시려면 번호를 입력하세요" << std::endl;
	std::cin >> number;
	Item* selectItem = DB->getVector()[number-1];
	selectItem->ItemSpec();
}

void Shop::ShopItemList()
{
	int index = 1;
	DB->getVector();
	for (auto& asdf : DB->getVector()) //auto&는 Item* 타입의 포인터임을 추론
		//asdf는 item*타입의 포인터
	{
		std::cout<<index<<". " << asdf->getName() << std::endl;
		index++;
	}
}

void Shop::ItemSell()
{
	int number;
	std::cout << "1. 아이템 구매" << std::endl;
	std::cout << "2. 메뉴보기" << std::endl;
	std::cin >> number;
	if (number == 1)
	{
		
	}

}

	void Shop::ItemCountdown()
	{
	}




