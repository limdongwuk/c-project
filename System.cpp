#include "System.h"
#include "dote.h"
#include <conio.h>
#include "TycoonPlayer.h"

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
    TycoonPlayer player(0, 0, 10);
    while (1)
    {
        player.HpPrint();
        if (_kbhit())
        {
            int number = _getch();
            Mold mold = static_cast<Mold>(number);

            short inputflag = 1 << (number - 49);
            if (inputflag & flag)
            {
                Mold_Delete(mold);
                flag &= ~inputflag;
                if (isMoldDraw1[static_cast<int>(mold) - 49] || isMoldDraw3[static_cast<int>(mold) - 49])
                { 

                }
            }
            else
            {
                Mold_Draw1(mold);
                flag |= inputflag;
                if (isMoldDraw2)
                {
                   player.Breadstock();
                }
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

    moldDeleted[mold] = true;
    isDrawing[mold] = false;
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
    TycoonPlayer player(0,0,10);
    player.Hp();
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
                timers[mold] = currentTime;
            }
        }
        else
        {
            if (elapsed > interval)
            {
                Mold_Draw3(mold);
                isDrawing[mold] = false;
                timers[mold] = currentTime;

            }
        }
    }

}

