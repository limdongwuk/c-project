#include <iostream>
using namespace std;
/*
constructor(생성자)
-객체가 생성될때 자동으로 호출되는 특별한 멤버함수임.
-객체의 초기화를 담당하고 클래스와 동일한 이름을 가지며 반환형없음
-생성자는 기본생성자, 매개변수가 있는 생성자, 복사생성자...
*/

/*
생성자 멤버 초기화 리스트
-생성자 매개변수 뒤에 삽입되고뒤에다가 :(콜론)으로 시작한 다음 초기화 할 각 변수를 
쉼표로 구분하여 나열
상수와 참조변수도 초기화 가능하게함
-멤버변수가 생성되고 나중에 값을 변경하는 것보다 효율적이다.
상수 및 참조 멤버변수는 초기화
ㄴconst 멤버변수, 참조멤버는 반드시 이녀석을 통해서 초기화를 해야한다. 생성자 본문안에서는 불가.
*/

class Exam 
{
public :
    const int num;
    int& score;
    //error
    /*Exam() 
    {
        num = 1;
        score = 2;
    }*/
    Exam(int numVal, int scoreVal) : num(numVal), score(scoreVal) 
    {

    }
};

class Monster
{
public :
    std::string name;
    int Atk;
    int Def;
    

//생성자 멤버 초기화 리스트
    Monster(const string& monsterName, int monsterAtk, int monsterDef)
        :name(monsterName), Atk(monsterAtk), Def(monsterDef)
    {
        //여기서 할 필요가 전혀 없단 뜻 :~~~~~로 이미 초기화 했음 아래꺼보다 위의 형태로 초기화 할것
    }
};

class Player 
{
public:
    std::string name;
    int mAtk;
    int mDef;
    //const int a;
    //int& b;


    Player()
    {
        name = "윈터";
        mAtk = 10;
        mDef = 20;
    }
    //매개변수가 있는 생성자
    Player(const std::string& playerName, int playerAtk, int playerDef) //함수가 입력값을 변경하지 않겠다(const붙이는 이유)
    {
        name = playerName;
        mAtk = playerAtk;
        mDef = playerDef;
    }
    void PrintInfo()const; //멤버함수가 객체상태를 변경하지 않겠다는 뜻
};

void main()
{
    Player* player = new Player();  ///괄호가 생성자
    player->PrintInfo();


    Player* player1 = new Player("카리나", 10, 50);
    player->PrintInfo();

    delete player;
    player = nullptr;

    delete player1;
    player1 = nullptr;
  
}

void Player::PrintInfo() const
{
    std::cout << name << std::endl;
}
