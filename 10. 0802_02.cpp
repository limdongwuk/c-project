#include <iostream>
using namespace std;
//2. ��������
//�÷��̾�� ���� ������ Ŭ������ �ִ�.
//�⺻������ �Ѵ� ���ݷ�, ����, ü���� ����.
//��������� ������ private
//����Լ����� �翬 public (�����Լ�, �����ϰ� ����������Լ�)(get set�����)
//�������� �����ϳ� �����ϸ� ��
class Player
{
public:
    void Chiocecharactorclass();
    void PlayerInfo();
    

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
    Monster()
    {
        name = "��ũ";
        attack = 12;
        defence = 1;
        hp = 80;
    }
private:
    string name;
    int attack;
    int defence;
    int hp;
};

class Battle
{
public:
    void battle();

private:

};

void main()
{
    Player p;
    Player* pl = new Player;
    pl->Chiocecharactorclass();
    pl->PlayerInfo();
    delete pl;
    Monster m;
    Monster* mo = new Monster;
    mo->monsterInfo();
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
    cout << "���ݷ� : "<<attack << endl;
    cout << "���� : "<<defence << endl;
    cout << "HP : "<<hp << endl;
}

void Monster::monsterInfo()
{
    cout << "���͸� : " << name << endl;
    cout << "���ݷ� : " << attack << endl;
    cout << "���� : " << defence << endl;
    cout << "HP : " << hp << endl;
}

void Battle::battle()
{

}
