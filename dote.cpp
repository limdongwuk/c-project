#include "dote.h"

#include "System.h"
using namespace std;

//"      00000       ",
//"     000◎00     ",
//"    000000000    ",
//"   00000000000   ",
//"  0000000000000  ",
//" 000000000000000 ",
//" 000000000000000 ",
//"  0000000000000  ",
//"   00000000000   ",
//"    000000000    ",
//"     0000000     ",
//"      00000      ",
//"      00000      ",
//"     0000000     ",
//"    000000000    "
void dote::TextColor(int font, int backGround)
{
    int Color = font + backGround * 16;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}


void dote::DrawFishbread_1(int X, int Y)
{  
    const int index = 8;
    std::string fishbread[index]
    =
    { 
        "   0000 ",
        "  000000  ",
        "  030030 ",
        "  000000  ",
        "   0000 ", 
        "    00 ",
        "  000000 ",
        " 0 0 0 0 0  "
    };   
    int Xnum = X;
    System S;
    for (int i = 0; i < index; ++i)
    {
        X = Xnum;
        for (char& F : fishbread[i])
        { 
            S.MoveCursor(X++, Y);
            if (F == '0')
            {
                TextColor(15, 15);
                std::cout << "■";
            }
            else if (F == '3')
            {
                TextColor(0, 15);
                std::cout << "●";
            }   
            else
            {
                TextColor(7, 0);
                std::cout << " ";
            }
        }
        Y++;
        std::cout << std::endl;
    }
    TextColor(7, 0);
}

void dote::DrawFishbread_2(int X, int Y)
{
    const int index = 8;
    std::string fishbread[index]
        =
    {
        "   0000 ",
        "  000000  ",
        "  030030 ",
        "  000000  ",
        "   0000 ",
        "    00 ",
        "  000000 ",
        " 0 0 0 0 0  "
    };
    int Xnum = X;
    System S;
    for (int i = 0; i < index; ++i)
    {
        X = Xnum;
        for (char& F : fishbread[i])
        {
            S.MoveCursor(X++, Y);
            if (F == '0')
            {
                TextColor(14, 14);
                std::cout << "■";
            }
            else if (F == '3')
            {
                TextColor(0, 14);
                std::cout << "●";
            }
            else
            {
                TextColor(7, 0);
                std::cout << " ";
            }
        }
        Y++;
        std::cout << std::endl;
    }
    TextColor(7, 0);
}

void dote::DrawFishbread_3(int X, int Y)
{
    const int index = 8;
    std::string fishbread[index]
        =
    {
        "   0000 ",
        "  000000  ",
        "  030030 ",
        "  000000  ",
        "   0000 ",
        "    00 ",
        "  000000 ",
        " 0 0 0 0 0  "
    };
    int Xnum = X;
    System S;
    for (int i = 0; i < index; ++i)
    {
        X = Xnum;
        for (char& F : fishbread[i])
        {
            S.MoveCursor(X++, Y);
            if (F == '0')
            {
                TextColor(8, 8);
                std::cout << "■";
            }
            else if (F == '3')
            {
                TextColor(0, 14);
                std::cout << "●";
            }
            else
            {
                TextColor(7, 0);
                std::cout << " ";
            }
        }
        Y++;
        std::cout << std::endl;
    }
    TextColor(7, 0);
}

void dote::deleteDraw(int X, int Y, int colorX, int colorY)
{
    const int index = 8;
    std::string fishbread[index]
        =
    {
        "   0000 ",
        "  000000  ",
        "  030030 ",
        "  000000  ",
        "   0000 ",
        "    00 ",
        "  000000 ",
        " 0 0 0 0 0  "
    };
    int Xnum = X;
    System S;
    for (int i = 0; i < index; ++i)
    {
        X = Xnum;
        for (char& F : fishbread[i])
        {
            S.MoveCursor(X++, Y);
            if (F == '0')
            {
                TextColor(colorX, colorY);
                std::cout << "■";
            }
            else if (F == '3')
            {
                TextColor(colorX, colorY);
                std::cout << "●";
            }
            else
            {
                TextColor(colorX, colorY);
                std::cout << " ";
            }
        }
        Y++;
        std::cout << std::endl;
    }
    TextColor(7, 0);
}

void dote::Title()
{
    int height = 50;
    int width = 100;
    std::cout << endl;
    std::cout << endl;
    std::cout << std::string((156 - width) / 2, ' '); cout << " ____   ____   ____   ____   \n";
    std::cout << std::string((156 - width) / 2, ' '); cout << "|    | |    | |    | |    |  \n";
    std::cout << std::string((156 - width) / 2, ' ');   cout << "| 동 | | 욱 | | 이 | | 네 | \n";
    std::cout << std::string((156 - width) / 2, ' ');  cout << "|____| |____| |____| |____|  \n";
    std::cout << std::string((150 - width) / 2, ' '); cout << " ____   ____   ____   ____   ____   \n";
    std::cout << std::string((150 - width) / 2, ' '); cout << "|    | |    | |    | |    | |    |  \n";
    std::cout << std::string((150 - width) / 2, ' ');   cout << "| 문 | | 어 | | 빵 | | 가 | | 게 | \n";
    std::cout << std::string((150 - width) / 2, ' ');  cout << "|____| |____| |____| |____| |____|  \n";

}

void dote::Board()
{
    std::cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■" << setw(30) << "■" << setw(30) << "■" << setw(30) << "■" << std::endl;
    std::cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << std::endl;
      



}
    
    
    