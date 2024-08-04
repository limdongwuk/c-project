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
    int gethp()const
    {return hp;}
    void sethp(int value)
    {hp = value;}
      int getattack()const
    {return attack;}
      int getdefence()const
    {return defence;}
      ~Player(){}
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
    {
    }
    int gethp()const
    {return hp;}
    void sethp(int value)
    {hp = value;}
      int getattack()const
    {return attack;}
      int getdefence()const
    {return defence;}
    ~Monster(){}
   
        
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
    ~Battle(){}
private:
    
    Player& p;
    Monster& m;
    bool check;
};

void main()
{
   
    Player* pl = new Player;  ///pl�̶�� ��ü�� �����Ͽ� player��� �ڷ����� �����Ҵ�
    pl->Chiocecharactorclass();
    pl->PlayerInfo();

    Monster* mo = new Monster("���", 30, 3, 330);
    mo->monsterInfo();
    
    Battle* bt = new Battle(*pl,*mo);
    bt->firstattack();
    bt->mainbattle();
    
    
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
            check =false;
            cout << endl;

        }
        else if (p.gethp() < m.gethp())
        {
            cout << "�÷��̾ �����մϴ�" << endl;
            check=true;
            
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

