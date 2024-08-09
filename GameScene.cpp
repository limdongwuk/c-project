#pragma once
#include "GameScene.h"
#include "BattleMaster.h"
#include "Blade.h"
#include "GunSlinger.h"

#include "Item.h"

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

GameScene::GameScene() : num(0), Direction(0), reaction(0), CL(nullptr), input(0)
{
    std::cout << "마수군단장 발탄의 공격에 대응하세요" << std::endl;
}

GameScene::~GameScene()
{
    delete CL;
}

void GameScene::GameStart()
{
    CharacterSelect();
    AttackDirection();
    ReactionChoice();
    React();

}

void GameScene::CharacterSelect()
{
    CL->choice();
    std::cin >> num;
    switch (num)
    {
    case 1:
        CL = new BattleMaster("배틀마스터", 12000, 8000, 9000, 100);
        break;
    case 2:
        CL = new Blade("블레이드", 13000, 8000, 12000, 120);
        break;
    case 3:
        CL = new GunSlinger("건슬링어", 10000, 8000, 7000, 80);
        break;
    default:
        // 너 잘못 입력함.
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
int GameScene::GetCharacterClass()
{
    return num;
}



void GameScene::AttackDirection()
{   
    srand(time(NULL));
    Direction = rand() % 4;
    switch (Direction)
    {
    case 0:
        std::cout << "발탄이 플레이어의 왼팔을 향해 도끼를 휘두릅니다." << std::endl;
        break;

    case 1:
        std::cout << "발탄이 플레이어의 오른팔을 향해 도끼를 휘두릅니다." << std::endl;
        break;

    case 2:
        std::cout << "발탄이 플레이어의 목을 향해 도끼를 휘두릅니다." << std::endl;
        break;

    case 3:
        std::cout << "발탄이 발목을 향해 도끼를 휘두릅니다." << std::endl;

        break;
    }
}

void GameScene::ReactionChoice()
{
    std::cout << "1.회피한다(선택 시 랜덤으로 4가지 방향에 반대방향키로 대응해야 합니다.) " << std::endl;
    std::cout << "2.막는다(선택 시 캐릭터 방어력의 3배만큼의 데미지를 덜 입습니다.)" << std::endl;
}


void GameScene::React()
{
    std::cin >> reaction;

    switch (reaction)
    {
    case 1:
        std::cout << "방향키를 통해 회피할 방향을 선택하세요." << std::endl;
        input = _getch();

        if (input == 224)
        {
            input = _getch();

            if (Direction == 0 && input == RIGHT)
            {
                std::cout <<CL->getName()<<"가 회피에 성공하였습니다" << std::endl;
            }
            else if (Direction == 1 && input == LEFT)
            {
                std::cout << CL->getName() << "가 회피에 성공하였습니다" << std::endl;
            }
            else if (Direction == 2 && input == DOWN)
            {
                std::cout << CL->getName() << "가 회피에 성공하였습니다" << std::endl;
            }
            else if (Direction == 3 && input == UP)
            {
                std::cout << CL->getName() << "가 회피에 성공하였습니다" << std::endl;
            }
            else
            {
                std::cout << "이걸 못하시네요ㅎㅎ 피격당해 데미지를 입습니다." << std::endl;
                
            }

        }
        break;
    case 2:
        std::cout << "막기에 성공하였습니다." << std::endl;
        std::cout << "피격시 1200의 데미지를 받았습니다." << std::endl;
        
        std::cout <<" 방어력 X 3 = "<<CL->getDefence() * 3 << "남은 Hp : " << CL->SetHp(3) << std::endl;
        break;
    }
    
}

void GameScene::MenuChoice()
{
    Item ItemM("이름");
    ItemM.ItemList();

    std::cout << "메뉴를 선택하세요" << std::endl;
    std::cout << "1.상점 열기" << std::endl;
    std::cout << "2.인벤토리 열기" << std::endl;
    std::cout << "3.스탯 확인하기" << std::endl;
    int choice;
    std::cin>> choice;
    switch (choice)
    {
    case 1:
        Item * ItemM = new Item("이름");
        ItemM->ItemList();

    case 2:
        인벤토리 프린트 함수

            case3 :
        스텟 보여주기 함수
    
   
    
    }

}



