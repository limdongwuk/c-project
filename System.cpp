#include "System.h"



void System::MoveCursor(int x, int y) //커서 위치 바꾸기
{
    COORD pos = { x*2 , y };
    /*COORD pos = { x , y };*/
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void System::kneading()
{
    
    
    short inputflag;
    short flag = 0;
    
    while (1)
    {
        
        
        if (_kbhit())
        {
           
            
            int number = _getch();
            Mold mold = static_cast<Mold>(number);

            inputflag = 1 << (number - 49);
            if (inputflag & flag)
            {

                Mold_Delete(mold);
                flag &= ~inputflag;
  
            }
            else
            {
                Mold_Draw1(mold);
                flag |= inputflag;
             
               
                Gettick(mold);
                
                
            }
        }
        Check();
        
    }
}
struct Position
{
    int x;
    int y;
    int z = 0;
    int q = 0;

};

Position Drawset[] = { Position{4,34,0,0 }, Position{19, 34,0,0 }, Position{34, 34,0,0 } 
,Position{4, 21,0,0 } ,Position{19, 21,0,0 }, Position{34, 21,0,0 }, Position{4, 8,0,0 } ,Position{19, 8,0,0 } ,Position{34, 8,0,0 } };
void System::Mold_Delete(Mold mold)
{
    dote d;

    Position dirValue = Drawset[static_cast<int>(mold) - 49];
    d.deleteDraw(dirValue.x, dirValue.y, 0, 0);

    if (isMoldDraw2[static_cast<int>(mold) - 49]) {
        player.Breadstock();
        player.Breadstock0or30();
        MoveCursor(0, 47);
        player.BreadstockPrint();
        isMoldDraw2[static_cast<int>(mold) - 49] = false;
    }
    else if (isMoldDraw1[static_cast<int>(mold) - 49] || isMoldDraw3[static_cast<int>(mold) - 49]) {
        player.DecreaseHp();
        MoveCursor(0, 48);
        player.HpPrint();
    }
    moldDeleted[mold] = true;
    isDrawing[mold] = false;
    
   /* if (isMoldDraw2[static_cast<int>(mold) - 49])
    {
        TycoonPlayer player;
        player.Breadstock();
    }*/
    
}

void System::Mold_Draw1(Mold mold)
{
    dote d;
    
  
    switch (mold)
    {
    case Mold::one:
        d.DrawFishbread_1(4, 34);
        break;
    case Mold::two:
        d.DrawFishbread_1(19, 34);
        break;
    case Mold::three:
        d.DrawFishbread_1(34, 34);
        break;
    case Mold::four:
        d.DrawFishbread_1(4, 21);
        break;
    case Mold::five:
        d.DrawFishbread_1(19, 21);
        break;
    case Mold::six:
        d.DrawFishbread_1(34, 21);
        break;
    case Mold::seven:
        d.DrawFishbread_1(4, 8);
        break;
    case Mold::eight:
        d.DrawFishbread_1(19, 8);
        break;
    case Mold::nine:
        d.DrawFishbread_1(34, 8);
        break;
    }
        isMoldDraw1[static_cast<int>(mold) - 49] = true;
        
    
}
void System::Mold_Draw2(Mold mold)
{
    dote d;
    switch (mold)
    {
    case Mold::one:
        d.DrawFishbread_2(4, 34);
        break;
    case Mold::two:
        d.DrawFishbread_2(19, 34);
        break;
    case Mold::three:
        d.DrawFishbread_2(34, 34);
        break;
    case Mold::four:
        d.DrawFishbread_2(4, 21);
        break;
    case Mold::five:
        d.DrawFishbread_2(19, 21);
        break;
    case Mold::six:
        d.DrawFishbread_2(34, 21);
        break;
    case Mold::seven:
        d.DrawFishbread_2(4, 8);
        break;
    case Mold::eight:
        d.DrawFishbread_2(19, 8);
        break;
    case Mold::nine:
        d.DrawFishbread_2(34, 8);
        break;
    }
    Draw1check[static_cast<int>(mold) - 49] = false;
    isMoldDraw2[static_cast<int>(mold) - 49] = true;
    
    
    
}
void System::Mold_Draw3(Mold mold)
{
    dote d;
    switch (mold)
    {
    case Mold::one:
        d.DrawFishbread_3(4, 34);
        break;
    case Mold::two:
        d.DrawFishbread_3(19, 34);
        break;
    case Mold::three:
        d.DrawFishbread_3(34, 34);
        break;
    case Mold::four:
        d.DrawFishbread_3(4, 21);
        break;
    case Mold::five:
        d.DrawFishbread_3(19, 21);
        break;
    case Mold::six:
        d.DrawFishbread_3(34, 21);
        break;
    case Mold::seven:
        d.DrawFishbread_3(4, 8);
        break;
    case Mold::eight:
        d.DrawFishbread_3(19, 8);
        break;
    case Mold::nine:
        d.DrawFishbread_3(34, 8);
        break;
    }
    isMoldDraw3[static_cast<int>(mold) - 49] = true;
}

void System::Gettick(Mold mold)
{
   
    timers[mold] = GetTickCount64();
    isDrawing[mold] = true;
    moldDeleted[mold] = false;

}

void System::Check()
{
    DWORD currentTime = GetTickCount64();
    for (auto& pair : timers)
    {
        Mold mold = pair.first;
        DWORD lastTime = pair.second;
        DWORD elapsed = currentTime - lastTime;
        
        if (moldDeleted[mold])
        {
           
            continue;
        }

       
        if (isDrawing[mold])
        {
            if (elapsed >= interval)
            {
                Mold_Draw2(mold);
                isDrawing[mold] = false; // 2초 후에는 Draw2로 변경
                isMoldDraw1[static_cast<int>(mold) - 49] = false;//gpt
                isMoldDraw2[static_cast<int>(mold) - 49] = true;//pgt
                timers[mold] = currentTime;
            }
        }
        else
        {
            if (elapsed > interval)
            {
                Mold_Draw3(mold);
                isMoldDraw2[static_cast<int>(mold) - 49] = false;
                isMoldDraw3[static_cast<int>(mold) - 49] = true;
                timers[mold] = currentTime;
            }
        }
    }

}

void System::conversion()
{
    Customer c;
    
    while (1)
    {
        if (_kbhit())
        {
            char input = _getch();
            if (input == 'w')
            {
                int num_input = _getch();
                if (c.wantBreadNum() == num_input)
                {
                    MoveCursor(0, 47);
                    player.setBreadstock();
                }
                else if (input == 'q')
                {
                    c.run = false;
                }
            }
        }
    }
}



