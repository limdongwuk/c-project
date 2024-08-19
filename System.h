#pragma once
#include <Windows.h>
#include <unordered_map>
#include <map>
#include <conio.h>
#include "dote.h"
#include "TycoonPlayer.h"
#include "Customer.h"


enum class Mold
{
   
    one = 49,
    two = 50,
    three = 51,
    four = 52,
    five = 53,
    six = 54,
    seven = 55,
    eight = 56,
    nine = 57
};
class System
{
private:
    
    Mold mold;
    int interval = 2000;
    std::unordered_map<Mold, DWORD> timers;
    std::unordered_map<Mold, bool> isDrawing;
    std::map<Mold, bool> moldDeleted;
    bool Draw1check[9] = { false };
    bool isMoldDraw1[9] = { false }; 
    bool isMoldDraw3[9] = { false };
    bool isMoldDraw2[9] = { false };
    
    TycoonPlayer player;
    Customer customer;

public:
 
    void MoveCursor(int x, int y);
    void kneading();
    void Mold_Draw1(Mold mold);
    void Mold_Draw2(Mold mold);
    void Mold_Draw3(Mold mold);
    void Mold_Delete(Mold mold);
    void Gettick(Mold mold);
    void Check();
    void conversion();
    
};

