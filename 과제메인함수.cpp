#include <iostream>
#include "GameScene.h"
#include "LostArkClass.h"
#include "BattleMaster.h"
#include "Blade.h"
#include "Gunslinger.h"
//3. �߻�Ŭ������ Ȱ���� 3���� �ɸ��� Ŭ������ �����ϼ���.
//3-1 �⺻ ����, �����̴� �Լ�, �����ϴ� �Լ�, ������ �Դ� �Լ�..��Ÿ���..

void main()
{
  
    GameScene* gameScene = new GameScene(0, 0);
    gameScene->AttackDirection();
    gameScene->ReactionChoice();
    gameScene->React();
    
    delete gameScene;
    std::cout << std::endl;
 

    

}