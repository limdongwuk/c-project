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
    GameScene* gamescene = new GameScene;
    gamescene->GameStart();
    delete gamescene;
    
}