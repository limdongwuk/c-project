#include "Shop.h"

//void Shop::ItemListPrint()
//{
//	������ ����Ʈ ��ü�� �����ش�.
//}
//
//void Shop::specverify()
//{��ȣ �Է� �� ������ �����ش�.
//}

void Shop::specverify()
{
	int number;
	std::cout << "������ �������� ���÷��� ��ȣ�� �Է��ϼ���" << std::endl;
	std::cin >> number;
	Item* selectItem = DB->getVector()[number-1];
	selectItem->ItemSpec();
}

void Shop::ShopItemList()
{
	int index = 1;
	DB->getVector();
	for (auto& asdf : DB->getVector()) //auto&�� Item* Ÿ���� ���������� �߷�
		//asdf�� item*Ÿ���� ������
	{
		std::cout<<index<<". " << asdf->getName() << std::endl;
		index++;
	}
}

void Shop::ItemSell()
{
	int number;
	std::cout << "1. ������ ����" << std::endl;
	std::cout << "2. �޴�����" << std::endl;
	std::cin >> number;
	if (number == 1)
	{
		
	}

}

	void Shop::ItemCountdown()
	{
	}




