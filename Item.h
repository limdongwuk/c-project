#pragma once

#include <iostream>
#include <vector>
class Item
{
protected:
    
    std::string name;
 
public : 
    Item(const std::string& _name);
    /*void ItemSpec(std::string& _name, int _Strength, int Agility,int _intelligence, int _Hp, int _Attack, int _Defence);*/
    std::string getName();
    void setName(std::string& name);

};

