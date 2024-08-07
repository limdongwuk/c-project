#include <iostream>
#include "GameScene.h"
#include "LostArkClass.h"
#include "BattleMaster.h"
#include "Blade.h"
#include "Gunslinger.h"
//3. 추상클래스를 활용한 3가지 케릭터 클래스를 구현하세요.
//3-1 기본 스텟, 움직이는 함수, 공격하는 함수, 데미지 먹는 함수..기타등등..

void main()
{
    GameScene* gamescene = new GameScene;
    gamescene->GameStart();
    delete gamescene;
    
}