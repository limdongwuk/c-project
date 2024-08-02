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
        name = "오크";
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
}

void Monster::monsterInfo()
{
    cout << "몬스터명 : " << name << endl;
    cout << "공격력 : " << attack << endl;
    cout << "방어력 : " << defence << endl;
    cout << "HP : " << hp << endl;
}

void Battle::battle()
{

}
