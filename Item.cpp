#include "Item.h"





//void Item::ItemSpec(std::string& _name, int _Strength, int Agility, int _intelligence, int _Hp, int _Attack, int _Defence)
//{
//    std::cout << name <<" »ó¼¼Á¤º¸" << std::endl;
//    std::cout << "°ø°Ý·Â : +" << Attack << std::endl;
//    std::cout << "¹æ¾î·Â : +" << Defence << std::endl;
//    std::cout << "Ã¼·Â : +" << Hp << std::endl;
//    std::cout << "Èû : +" << Strength << std::endl;
//    std::cout << "¹ÎÃ¸ : +" << Agility << std::endl;
//    std::cout << "Áö·Â : +" << Intelligence << std::endl;
//
//}

Item::Item(const std::string& _name) : name(_name)
{
}

Item::~Item()
{
    if (nullptr != WeaponManager)
    {
        delete WeaponManager;
        WeaponManager = nullptr;
    }
}

void Item::ItemList()
{
    Weapon* weapon = new Weapon();
    Amor* amor = new Amor("³°Àº Åõ±¸", 700, 70, 150, 150, 0);
    weapon->WeaponPrint(G.GetCharacterClass());
    amor->AmorPrint();
}

const std::string& Item::getName()
{
    return name;
}

void Item::setName(std::string& name)
{
    this->name = name;
}


