//2. �����ý��� �����
  //�� shop, item ���� ������Ŭ������ �˾ƾ��Ұ�,���ͽἭ �������� �����۵��� ���ͷ� Item items[10]; => vector<Item> items;
  //��ĳ���� Ŭ������ �κ��丮 Ŭ������ �˾ƾ���
  //���� ���� �������� ����̰� ���ݷ¿� ���õ� ���� ������ �װ� �� ������ �����, ����� ������ ������ �κ��丮�� ������
  //�κ��丮���� ����/Ż�� ����.. push_back, pop_back ĳ����->�κ��丮 
  //�κ��丮���� ���ȱ� ���(������ ��������)..
  //�������� ������ ��ۿ����� ���Ž� ���� ������ ���� �پ������, �ٻ�� ����ǥ�� 
  // ������ ������ status�� ���� ĳ���� statâ�ʿ��ϰ� ������ ���� 

  //ĳ���ʹ� �����˾ƾ��ϰ� �κ��丮�� ����Ǿ��־����
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

