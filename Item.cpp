#include "Item.h"





//void Item::ItemSpec(std::string& _name, int _Strength, int Agility, int _intelligence, int _Hp, int _Attack, int _Defence)
//{
//    std::cout << name <<" 상세정보" << std::endl;
//    std::cout << "공격력 : +" << Attack << std::endl;
//    std::cout << "방어력 : +" << Defence << std::endl;
//    std::cout << "체력 : +" << Hp << std::endl;
//    std::cout << "힘 : +" << Strength << std::endl;
//    std::cout << "민첩 : +" << Agility << std::endl;
//    std::cout << "지력 : +" << Intelligence << std::endl;
//
//}

Item::Item(const std::string& _name) : name(_name)
{
}

std::string Item::getName()
{
    return name;
}

void Item::setName(std::string& name)
{
    this->name = name;
}


