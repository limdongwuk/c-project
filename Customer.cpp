#include "Customer.h"

int Customer::wantBreadNum()
{
    srand(time(NULL));
    _Request = rand() % 3 + 1;
    return _Request;
}

void Customer::ment()
{
    srand(time(NULL));
    _ment = rand() % 2;
    MoveCursor(18, 2);
    switch (_ment)
    {
    case 0:
        std::cout << "¹®¾î»§" << wantBreadNum() << "°³ ÁÖ¼¼¿ä~" << std::endl;
        break;
    case 1:
        std::cout << "¹®¾î»§" << wantBreadNum() << "°³ ´Þ¶û±ú~" << std::endl;
        break;
    }

}

void Customer::Tickment()
{
    DWORD starttime = GetTickCount64();
    int interval = 12000;

    while (run)
    {
        DWORD currenttime = GetTickCount64();
        if (currenttime - starttime > interval)
        {
            ment();
            starttime = currenttime;
        }
        Sleep(100);
    }
}

void Customer::MoveCursor(int x, int y)
{
    COORD pos = { x * 2 , y };
    /*COORD pos = { x , y };*/
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
