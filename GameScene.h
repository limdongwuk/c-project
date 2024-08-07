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
public:
    
    GameScene( int _direction, int _reaction, LostArkClass* _character);
    ~GameScene();
    void CharacterSelect();
    void AttackDirection();
    void ReactionChoice();
    void React();
    
    
    
};

