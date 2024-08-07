#include "GameScene.h"

#include "BattleMaster.h"
#include "Blade.h"
#include "GunSlinger.h"

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

GameScene::GameScene(int _direction, int _reaction, LostArkClass* _character)
    : Direction(_direction), reaction(_reaction), CL(_character), input(0)
{
    std::cout << "���������� ��ź�� ���ݿ� �����ϼ���" << std::endl;
}

GameScene::~GameScene()
{
}



void GameScene::CharacterSelect()
{
    LostArkClass* CL = nullptr;
    CL->choice();
    int num;
    std::cin >> num;
    switch (num)
    {
    case 1:
        CL = new BattleMaster("��Ʋ������", 12000, 8000, 9000, 1400);
        break;
    case 2:
        CL = new Blade("���̵�", 13000, 8000, 12000, 1300);
        break;
    case 3:
        CL = new GunSlinger("�ǽ�����", 10000, 8000, 7000, 700);
        break;
    }

    CL->status();
    std::cout << std::endl;
    CL->Move();
    std::cout << std::endl;
    CL->Damage(200);
    std::cout << std::endl;
    CL->classattack();
}

void GameScene::AttackDirection()
{
    srand(time(NULL));
    Direction = rand() % 4;
    switch (Direction)
    {
    case 0:
        std::cout << "��ź�� �÷��̾��� ������ ���� ������ �ֵθ��ϴ�." << std::endl;
        break;

    case 1:
        std::cout << "��ź�� �÷��̾��� �������� ���� ������ �ֵθ��ϴ�." << std::endl;
        break;

    case 2:
        std::cout << "��ź�� �÷��̾��� ���� ���� ������ �ֵθ��ϴ�." << std::endl;
        break;

    case 3:
        std::cout << "��ź�� �߸��� ���� ������ �ֵθ��ϴ�." << std::endl;

        break;
    }
}

void GameScene::ReactionChoice()
{
    std::cout << "1.ȸ���Ѵ�(���� �� �������� 4���� ���⿡ �ݴ����Ű�� �����ؾ� �մϴ�.) " << std::endl;
    std::cout << "2.���´�(���� �� ĳ���� ������ 3�踸ŭ�� �������� �� �Խ��ϴ�.)" << std::endl;
}


void GameScene::React()
{
    std::cin >> reaction;

    switch (reaction)
    {
    case 1:
        std::cout << "����Ű�� ���� ȸ���� ������ �����ϼ���." << std::endl;
        input = _getch();

        if (input == 224)
        {
            input = _getch();

            if (Direction == 0 && input == RIGHT)
            {
                std::cout << "ȸ�ǿ� �����Ͽ����ϴ�" << std::endl;
            }
            else if (Direction == 1 && input == LEFT)
            {
                std::cout << "ȸ�ǿ� �����Ͽ����ϴ�" << std::endl;
            }
            else if (Direction == 2 && input == DOWN)
            {
                std::cout << "ȸ�ǿ� �����Ͽ����ϴ�" << std::endl;
            }
            else if (Direction == 3 && input == UP)
            {
                std::cout << "ȸ�ǿ� �����Ͽ����ϴ�" << std::endl;
            }
            else
            {
                std::cout << "�̰� ���Ͻó׿䤾�� �ǰݴ��� �������� �Խ��ϴ�." << std::endl;
                
            }

        }
        break;
    case 2:
        std::cout << "���⿡ �����Ͽ����ϴ�." << std::endl;
        
        std::cout <<"���� X 3 : " << "���� Hp : " <<  std::endl;
        break;
    }
    
}




