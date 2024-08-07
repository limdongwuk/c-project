#include <iostream>
using namespace std;

#pragma once

class Player
{
    public:
        void Chiocecharactorclass();
        void PlayerInfo();
        int gethp()const;
        void sethp(int value);
        int getattack()const; 
        int getdefence()const;

    private:
        string charactorclass;
        int attack;
        int defence;
        int hp;

    };


class Monster
{
public:
    void monsterInfo();

    Monster(string m_name, int m_attack, int m_defence, int m_hp) : name(m_name), attack(m_attack), defence(m_defence), hp(m_hp)
    { }
    int gethp()const;
    void sethp(int value);
    int getattack()const;
    int getdefence()const;
    ~Monster() {}


private:
    string name;
    const int  attack;
    const int defence;
    int hp;
};

class Battle
{
public:
    Battle(Player& player, Monster& monster) : p(player), m(monster) {}
    void firstattack();
    void PremainHP();
    void MremainHP();
    void mainbattle();
    ~Battle() {}
private:

    Player& p;
    Monster& m;
    bool check;
};


