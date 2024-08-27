#include "System.h"



void System::MoveCursor(int x, int y) //커서 위치 바꾸기
{
    COORD pos = { x*2 , y };
    /*COORD pos = { x , y };*/
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void System::kneading()
{
    
    DWORD starttime = GetTickCount64();
    DWORD difficult_time = starttime;
    short inputflag;
    short flag = 0;
    bool inputReceived = true;
    bool difficult = false;
    bool firstment = false;
    while (1)
    {

        DWORD currenttime = GetTickCount64();

        if (currenttime - difficult_time > 180000)
        {
            if (!difficult)
            {
                MoveCursor(18, 48);
                std::cout << "3분 초과!! 난이도 증가" << std::endl;
                int interval3 = 1500; //멘트랑 draw3호출간격
                difficult = true;
            }
        }
        if (!firstment)
        {
            if (currenttime - starttime > interval4) //맨처음 인터벌 길게
            {
                C.ment(); // ment 함수 호출
                if (!inputReceived) // 이전 ment 호출 이후 입력이 없었으면
                {
                    player.DecreaseHp(); // 체력 감소
                    MoveCursor(0, 48);
                    player.HpPrint();
                    ending();
                }
                inputReceived = false;
                starttime = currenttime;
                firstment = true;
            }
        }
        else
        {
            if (currenttime - starttime > interval3)
            {
                C.ment(); // ment 함수 호출
                if (!inputReceived) // 이전 ment 호출 이후 입력이 없었으면
                {
                player.DecreaseHp(); // 체력 감소
                MoveCursor(0, 48);
                player.HpPrint();
                ending();
                }
                inputReceived = false;
                starttime = currenttime; // 시작 시간 갱신
            }
        }
        
    
    
        
        
    
        if (_kbhit())
        {
            
            int number = _getch();
            
            if (number >= '1' && number <= '9')
            {
             
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
            
            else if (number == 'q' || number == 'Q')
            {
                if (C.wantBreadNum() == 1&& player.getBreadstock() > 0)
                {
                    inputReceived = true;
                    MoveCursor(18, 2);
                    std::cout << std::string(24, ' ');
                    MoveCursor(0, 47);
                    player.setBreadstock(1);
                    Score();
                }
                else if (C.wantBreadNum() == 2 || C.wantBreadNum() == 3)
                {
                    player.DecreaseHp();
                    MoveCursor(0, 48);
                    player.HpPrint();
                    ending();
                }
            }
            else if (number == 'w' || number == 'W')
            {
                if (C.wantBreadNum() == 2&& player.getBreadstock() > 1)
                {
                    inputReceived = true;
                    MoveCursor(18, 2);
                    std::cout << std::string(24, ' ');
                    MoveCursor(0, 47);
                    player.setBreadstock(2);
                    Score();
                }
                else if (C.wantBreadNum() == 1 || C.wantBreadNum() == 3)
                {
                    player.DecreaseHp();
                    MoveCursor(0, 48);
                    player.HpPrint();
                    ending();
                }

            }
            else if (number == 'e' || number == 'E')
            {
                if (C.wantBreadNum() == 3&& player.getBreadstock() > 2)
                {
                    inputReceived = true;
                    MoveCursor(18, 2);
                    std::cout << std::string(24, ' ');
                    MoveCursor(0, 47);
                    player.setBreadstock(3);  
                    Score();
                }
                else if (C.wantBreadNum() == 1 || C.wantBreadNum() == 2)
                {
                    player.DecreaseHp();
                    MoveCursor(0, 48);
                    player.HpPrint();
                    ending();
                }
            }
            else
            {
                continue;
            }
            
        }
        
        
        
        MoveCursor(0, 45);
        player.Breadstock0or30();

        MoveCursor(0, 47);
        player.BreadstockPrint();
        MoveCursor(0, 48);
        player.HpPrint();
       
        Check();
        Sleep(50);
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
        isMoldDraw2[static_cast<int>(mold) - 49] = false;
    }
    else if (isMoldDraw1[static_cast<int>(mold) - 49] || isMoldDraw3[static_cast<int>(mold) - 49]) {
        player.DecreaseHp();
        MoveCursor(0, 48);
        player.HpPrint();
        ending();
    }
    moldDeleted[mold] = true;
    
    [mold] = false;

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
        int currentTime = GetTickCount64();
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
    timers[mold] = GetTickCount64(); // interval1을 사용하여 타이머 설정
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

        // Draw2 호출하는 부분
        if (isDrawing[mold])
        {
            
            if (elapsed > Interval(mold))
            {
                Mold_Draw2(mold);
                isDrawing[mold] = false; 
                isMoldDraw1[static_cast<int>(mold) - 49] = false;
                isMoldDraw2[static_cast<int>(mold) - 49] = true;
                timers[mold] = currentTime; // 타이머 갱신
            }
        }
        else
        {
            
            if (elapsed > interval3)
            {
                Mold_Draw3(mold);
                isMoldDraw2[static_cast<int>(mold) - 49] = false;
                isMoldDraw3[static_cast<int>(mold) - 49] = true;
                timers[mold] = currentTime; // 타이머 갱신
            }
        }
    }
}


void System::Score()
{
    score +=(C.wantBreadNum()*500);
    MoveCursor(40,47);
    std::cout << "현재 점수 : " << score <<std::endl;
}



int System::Interval(Mold mold)
{
    int randomSeconds = rand() % 100 + 4; 
    interval[mold] = randomSeconds * 1000; 
    return interval[mold];
}

int System::getScore()
{
    return score;
}

void System::ending()
{
    if (player.getHp() == 0)
    {
        system("cls");
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << "                                 hp가 모두 소모되어 게임이 종료됩니다." << std::endl;

        std::cout << "                                 최종점수 : " << score << std::endl;
        Sleep(1000);
        exit(0);
    }
}


