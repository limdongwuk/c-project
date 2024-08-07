#include <iostream>
#include "PvM_game.h"
using namespace std;

void main()
{
    Player* pl = new Player;  ///pl이라는 객체를 생성하여 player라는 자료형의 동적할당
    pl->Chiocecharactorclass();
    pl->PlayerInfo();

    Monster* mo = new Monster("고블린", 30, 3, 330);
    mo->monsterInfo();

    Battle* bt = new Battle(*pl, *mo);
    bt->firstattack();
    bt->mainbattle();

}