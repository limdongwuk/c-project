#include <iostream>
#include <vector>
#include <windows.h>
#include "dote.h"
#include "System.h"

using namespace std;


void main()
{
    system("mode con: cols=100 lines=50");
    dote d;
    d.Title();
    System S;
    S.MoveCursor(24, 30);
    system("PAUSE");
    system("cls");
    S.MoveCursor(0, 5);
    d.Board();
    S.kneading();
   
    
   
    
    
    
}




