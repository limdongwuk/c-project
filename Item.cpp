#include "Item.h"





//void Item::ItemSpec(std::string& _name, int _Strength, int Agility, int _intelligence, int _Hp, int _Attack, int _Defence)
//{
//    std::cout << name <<" ������" << std::endl;
//    std::cout << "���ݷ� : +" << Attack << std::endl;
//    std::cout << "���� : +" << Defence << std::endl;
//    std::cout << "ü�� : +" << Hp << std::endl;
//    std::cout << "�� : +" << Strength << std::endl;
//    std::cout << "��ø : +" << Agility << std::endl;
//    std::cout << "���� : +" << Intelligence << std::endl;
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
    Amor* amor = new Amor("���� ����", 700, 70, 150, 150, 0);
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


