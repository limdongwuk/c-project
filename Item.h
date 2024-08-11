#pragma once

#include <iostream>
#include <vector>
#include "GameScene.h"

class Item
{
private:
    
protected:

    
    std::string name;
    GameScene G;
 
public : 
    Item(const std::string& _name);
    ~Item();
    /*void ItemSpec(std::string& _name, int _Strength, int Agility,int _intelligence, int _Hp, int _Attack, int _Defence);*/
    void ItemList();
    const std::string& getName();
    void setName(std::string& name);
    virtual void ItemPrint(int ClassChoice);

   
};

