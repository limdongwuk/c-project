#include "Amor.h"

Amor::Amor(const std::string& _name, int _Hp, int _Defence, int _Strength, int _Agility, int _Intelligence)
    :Item(_name), Hp(_Hp), Defence(_Defence), Strength(_Strength), Agility(_Agility), Intelligence(_Intelligence)
{
}


void Amor::AmorPrint()
{
    if (!amor.empty())
    {for(int itemnumber=3; itemnumber<14; itemnumber++)
        std::cout<<itemnumber <<"." << amor[0].getName() << std::endl;
    }
}


void Amor::AmorListSpec()
{
   
        amor.push_back(Amor("���� ����", 700, 70, 150, 150, 0));
        amor.push_back(Amor("�ְ�� ����", 1400, 140, 300, 300, 0));
        amor.push_back(Amor("���� �߰�", 500, 40, 300, 300, 0));
        amor.push_back(Amor("�ְ�� �߰�", 1000, 80, 600, 600, 0));
        amor.push_back(Amor("���� ����", 1000, 80, 70, 70, 0));
        amor.push_back(Amor("�ְ�� ����", 2000, 160, 140, 140, 0));
        amor.push_back(Amor("���� ����", 800, 60, 30, 30, 0));
        amor.push_back(Amor("�ְ�� ����", 1600, 120, 60, 60, 0));
        amor.push_back(Amor("���� �尩", 400, 20, 400, 400, 0));
        amor.push_back(Amor("�ְ�� �尩", 800, 40, 800, 800, 0));
}


