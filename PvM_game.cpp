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
    cout << "������ �����ϼ���(wizard, babarian, huntter, healer)" << endl;
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
    cout << "Ŭ������ : " << charactorclass << endl;
    cout << "���ݷ� : " << attack << endl;
    cout << "���� : " << defence << endl;
    cout << "HP : " << hp << endl;
    cout << endl;
}

void Monster::monsterInfo()
{
    cout << "���͸� : " << name << endl;
    cout << "���ݷ� : " << attack << endl;
    cout << "���� : " << defence << endl;
    cout << "HP : " << hp << endl;
    cout << endl;
}

void Battle::firstattack()
{
    if (p.gethp() > m.gethp())
    {
        cout << "���Ͱ� �����մϴ�" << endl;
        PremainHP();
        check = false;
        cout << endl;

    }
    else if (p.gethp() < m.gethp())
    {
        cout << "�÷��̾ �����մϴ�" << endl;
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
    cout << "�÷��̾��� ���� HP : " << p.gethp() << endl;

}

void Battle::MremainHP()
{
    m.sethp(m.gethp() + (m.getdefence() - m.getattack()));
    if (m.gethp() < 0)
    {
        m.sethp(0);
    }
    cout << "������ ���� HP : " << m.gethp() << endl;
}

void Battle::mainbattle()
{

    while (p.gethp() > 0 && m.gethp() > 0)
    {
        int choice;
        cout << "���� �� �����ϼ���!(�����Է�)" << endl;
        cout << "1 - ���� ���� �����ϱ�" << endl;
        cout << "2 - ��������" << endl;
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
            cout << "���������Ƿ� ������ ����˴ϴ�." << endl;
            break;
        }
    }
    cout << "������ ����Ǿ����ϴ�." << endl;
}
