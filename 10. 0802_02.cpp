#include <iostream>
using namespace std;
//2. 대전게임
//플레이어와 몬스터 각각의 클래스가 있다.
//기본적으로 둘다 공격력, 방어력, 체력이 있음.
//멤버변수는 무조건 private
//멤버함수들은 당연 public (공격함수, 공격하고 내정보출력함수)(get set써야함)
//종료조건 둘중하나 다이하면 끝
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
   
    Player* pl = new Player;  ///pl이라는 객체를 생성하여 player라는 자료형의 동적할당
    pl->Chiocecharactorclass();
    pl->PlayerInfo();

    Monster* mo = new Monster("고블린", 30, 3, 330);
    mo->monsterInfo();
    
    Battle* bt = new Battle(*pl,*mo);
    bt->firstattack();
    bt->mainbattle();
    
    
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
    cout << "공격력 : "<<attack << endl;
    cout << "방어력 : "<<defence << endl;
    cout << "HP : "<<hp << endl;
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
            check =false;
            cout << endl;

        }
        else if (p.gethp() < m.gethp())
        {
            cout << "플레이어가 선공합니다" << endl;
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

