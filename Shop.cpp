#include "Shop.h"


void Shop::PrintList()
{
    if(배마선택했을경우)
    {
        int WeaponAndAmorChoice;
        int WeaponChoice;
        std::cout << "무기&방어구 상점입니다." << std::endl;
        std::cout << "구매할 분류를 선택해주세요." << std::endl;
        std::cout << "1. 무기" << std::endl;
        std::cout << "2. 방어구" << std::endl;
        std::cin >> WeaponAndAmorChoice;

        switch (WeaponAndAmorChoice)
        {
            
        case 1:
            std::cout << CL->getName() << "직업의 무기 목록을 보여드리겠습니다. 상세정보를 보시려면 상품의 번호를 입력하세요." << std::endl;
            std::cout << "1.낡은 건틀릿(300G)" << std::endl;
            std::cout << "2.최고급 건틀릿(30000G)" << std::endl;
            std::cin >> WeaponChoice;
            switch (WeaponChoice)
            {
            case 1:
                낡은 건틀릿(아이템 상세정보 itemcpp)
          

            }

        case 2: 
        }
        std::cout << "상세정보를 보시려면 판매상품의 번호를 입력하세요." << std::endl;
        std::cout << "1.낡은 건틀릿(300G)" << endl;
}

void Shop::ClassWeaponPrint()
{
    CL->PrintList();
}
