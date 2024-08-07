#pragma once
#include <iostream>
#include "LostArkClass.h"

class GameScene 
{
private:
    LostArkClass* CL;
    int Direction;
    int reaction;
    int input;
    void CharacterSelect();
    void AttackDirection();
    void ReactionChoice();
    void React();
public:
    GameScene();
    ~GameScene();
    void GameStart();
    
    
};

