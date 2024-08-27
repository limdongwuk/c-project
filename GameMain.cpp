#include <iostream>
#include <vector>
#include <windows.h>
#include "dote.h"
#include "System.h"
#include "Customer.h"
#include <thread>
#include <atomic>

using namespace std;


void main()
{
    srand(time(NULL));
    system("mode con: cols=100 lines=50");
    dote d;
    d.Title();
    TycoonPlayer player;
    System S;
    S.MoveCursor(24, 30);
    system("PAUSE");
    system("cls");
    S.MoveCursor(0, 5);
    d.Board();
    Customer c;    
    S.MoveCursor(15, 0);
    S.kneading();
}




