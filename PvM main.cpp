#include <iostream>
#include "PvM_game.h"
using namespace std;

void main()
{
    Player* pl = new Player;  ///pl�̶�� ��ü�� �����Ͽ� player��� �ڷ����� �����Ҵ�
    pl->Chiocecharactorclass();
    pl->PlayerInfo();

    Monster* mo = new Monster("���", 30, 3, 330);
    mo->monsterInfo();

    Battle* bt = new Battle(*pl, *mo);
    bt->firstattack();
    bt->mainbattle();

}