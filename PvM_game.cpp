#include "PvM_game.h"
#include <iostream>
using namespace std;


int Player::gethp()const
{
    return hp;
}
void  Player::sethp(int value)
{
    hp = value;
}
int  Player::getattack()const
{
    return attack;
}
int  Player::getdefence()const
{
    return defence;
}

int Monster::gethp()const
{
    return hp;
}
void Monster::sethp(int value)
{
    hp = value;
}
int Monster::getattack()const
{
    return attack;
}
int Monster::getdefence()const
{
    return defence;
}

void Player::Chiocecharactorclass()
{
    cout << "직업을 선택하세요(wizard, babarian, huntter, healer)" << endl;
    cin >> charactorclass;
    if (charactorclass == "wizard")
    {
        attack = 60;
        defence = 2;
        hp = 320;
    }
    if (charactorclass == "babarian")
    {
        attack = 54;
        defence = 9;
        hp = 400;
    }
    if (charactorclass == "huntter")
    {
        attack = 56;
        defence = 6;
        hp = 380;
    }
    if (charactorclass == "healer")
    {
        attack = 40;
        defence = 30;
        hp = 340;
    }
}
void Player::PlayerInfo()
{
    cout << "클래스명 : " << charactorclass << endl;
    cout << "공격력 : " << attack << endl;
    cout << "방어력 : " << defence << endl;
    cout << "HP : " << hp << endl;
    cout << endl;
}

void Monster::monsterInfo()
{
    cout << "몬스터명 : " << name << endl;
    cout << "공격력 : " << attack << endl;
    cout << "방어력 : " << defence << endl;
    cout << "HP : " << hp << endl;
    cout << endl;
}

void Battle::firstattack()
{
    if (p.gethp() > m.gethp())
    {
        cout << "몬스터가 선공합니다" << endl;
        PremainHP();
        check = false;
        cout << endl;

    }
    else if (p.gethp() < m.gethp())
    {
        cout << "플레이어가 선공합니다" << endl;
        check = true;

        cout << endl;

    }
}

void Battle::PremainHP()
{
    p.sethp(p.gethp() + (p.getdefence() - m.getattack()));
    if (p.gethp() < 0)
    {
        p.sethp(0);
    }
    cout << "플레이어의 남은 HP : " << p.gethp() << endl;

}

void Battle::MremainHP()
{
    m.sethp(m.gethp() + (m.getdefence() - m.getattack()));
    if (m.gethp() < 0)
    {
        m.sethp(0);
    }
    cout << "몬스터의 남은 HP : " << m.gethp() << endl;
}

void Battle::mainbattle()
{

    while (p.gethp() > 0 && m.gethp() > 0)
    {
        int choice;
        cout << "다음 중 선택하세요!(숫자입력)" << endl;
        cout << "1 - 다음 전투 시작하기" << endl;
        cout << "2 - 도망가기" << endl;
        cin >> choice;
        if (choice == 1)
        {
            if (check)
            {
                MremainHP();
                check = !check;

            }

            else
            {
                PremainHP();
                check = !check;
            }
        }
        else if (choice == 2)
        {
            cout << "도망갔으므로 게임이 종료됩니다." << endl;
            break;
        }
    }
    cout << "게임이 종료되었습니다." << endl;
}
