#include <iostream>
using namespace std;
/*
constructor(������)
-��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� ����Լ���.
-��ü�� �ʱ�ȭ�� ����ϰ� Ŭ������ ������ �̸��� ������ ��ȯ������
-�����ڴ� �⺻������, �Ű������� �ִ� ������, ���������...
*/

/*
������ ��� �ʱ�ȭ ����Ʈ
-������ �Ű����� �ڿ� ���Եǰ�ڿ��ٰ� :(�ݷ�)���� ������ ���� �ʱ�ȭ �� �� ������ 
��ǥ�� �����Ͽ� ����
����� ���������� �ʱ�ȭ �����ϰ���
-��������� �����ǰ� ���߿� ���� �����ϴ� �ͺ��� ȿ�����̴�.
��� �� ���� ��������� �ʱ�ȭ
��const �������, ��������� �ݵ�� �̳༮�� ���ؼ� �ʱ�ȭ�� �ؾ��Ѵ�. ������ �����ȿ����� �Ұ�.
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
    

//������ ��� �ʱ�ȭ ����Ʈ
    Monster(const string& monsterName, int monsterAtk, int monsterDef)
        :name(monsterName), Atk(monsterAtk), Def(monsterDef)
    {
        //���⼭ �� �ʿ䰡 ���� ���� �� :~~~~~�� �̹� �ʱ�ȭ ���� �Ʒ������� ���� ���·� �ʱ�ȭ �Ұ�
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
        name = "����";
        mAtk = 10;
        mDef = 20;
    }
    //�Ű������� �ִ� ������
    Player(const std::string& playerName, int playerAtk, int playerDef) //�Լ��� �Է°��� �������� �ʰڴ�(const���̴� ����)
    {
        name = playerName;
        mAtk = playerAtk;
        mDef = playerDef;
    }
    void PrintInfo()const; //����Լ��� ��ü���¸� �������� �ʰڴٴ� ��
};

void main()
{
    Player* player = new Player();  ///��ȣ�� ������
    player->PrintInfo();


    Player* player1 = new Player("ī����", 10, 50);
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
