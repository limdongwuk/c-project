#include "Customer.h"

void Customer::generateBreadNum()
{
    _Request = rand() % 3 + 1;
}

int Customer::wantBreadNum() const
{
    return _Request;
}

void Customer::ment()
{

    generateBreadNum();
    _ment = rand() % 2;
    MoveCursor(18, 2);
    switch (_ment)
    {
    case 0:
        std::cout << "¹®¾î»§ " << wantBreadNum() << "°³ ÁÖ¼¼¿ä~" << std::endl;
        break;
    case 1:
        std::cout << "¹®¾î»§ " << wantBreadNum() << "°³ ´Þ¶û±ú~" << std::endl;
        break;
    }

}





void Customer::MoveCursor(int x, int y)
{
    COORD pos = { x * 2 , y };
    /*COORD pos = { x , y };*/
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
