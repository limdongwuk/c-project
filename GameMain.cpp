#include <iostream>
#include <vector>
#include <windows.h>
#include "dote.h"
#include "System.h"
#include "Customer.h"
#include <thread>

using namespace std;


void main()
{
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
    std::thread mentThread(std::bind(&Customer::Tickment, &c));
   
    S.kneading();
    S.conversion();
    c.run = false;
    if (mentThread.joinable())
    {
        mentThread.join();
    } 
}




