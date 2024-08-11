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

Item::~Item()
{
   /* if (nullptr != WeaponManager)
    {
        delete WeaponManager;
        WeaponManager = nullptr;
    }*/
}

void Item::ItemList()
{
    Item* weapon = new Weapon("", 0, 0,0 , 0)
    
    I = new Weapon();
        WeaponPrint(G.GetCharacterClass());
        I = new Amor;
        AmorPrint();  
}

const std::string& Item::getName()
{
    return name;
}

void Item::setName(std::string& name)
{
    this->name = name;
}

void Item::ItemPrint(int ClassChoice)
{
}


