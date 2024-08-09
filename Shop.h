//2. 상점시스템 만들기
  //ㄴ shop, item 샵은 아이템클래스를 알아야할것,벡터써서 만들어야함 아이템들을 벡터로 Item items[10]; => vector<Item> items;
  //ㄴ캐릭터 클래스는 인벤토리 클래스를 알아야함
  //샵에 들어가면 아이템이 뜰것이고 공격력에 관련된 템을 누르면 그게 다 나오고 사야함, 사고나서 내가산 아이템 인벤토리로 가야함
  //인벤토리에서 장착/탈착 가능.. push_back, pop_back 캐릭터->인벤토리 
  //인벤토리에서 되팔기 기능(가격은 절반정도)..
  //수량제한 상점에 몇개밖에없고 구매시 샵의 아이템 갯수 줄어들어야함, 다사면 매진표시 
  // 아이템 장착시 status가 증가 캐릭터 stat창필요하고 템착용 증가 

  //캐릭터는 샵도알아야하고 인벤토리도 연결되어있어야함
#pragma once
#include <vector>
#include <iostream>
#include "LostArkClass.h"
#include "gunslinger.h"
#include "blade.h"
#include "Battlemaster.h"
#include "Weapon.h"
class Shop
{private : 
    std::vector<Weapon>weapons;
public:
    void Sell();
    void Buy();
    void PrintList();
    void QuantityLeft();
    
};

