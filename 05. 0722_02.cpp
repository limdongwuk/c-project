#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include <wchar.h>

using namespace std;




//void cheat();
//
//string StrCheat();
//
//void main()
//{
//    int j = 0;
//        while (j <= 5)
//    {
//            ++j;
//        int i;
//        int k;
//
//        cheat(); 
//
//        srand(time(NULL));
//        i = rand() % 3; //컴퓨터가 내는 것(0묵,1찌,2빠)
//        
//
//        string q = "치트 - 0.묵 // 1.가위 // 2.보자기 ==> ";
// 
//        string Test; // 위와 같음
//        Test = StrCheat();
//        /*
//        int A;
//        A = 0;
//        */
//
//        cout << q << i << endl;
//
//                cin >> k; // 내가낸것
//        
//    }
//
//}
//
//void cheat()
//{
//    cout << "0.묵 // 1.가위 // 2.보자기 " << endl;
//}
//
//string StrCheat()
//{
//    string Str = "치트 - 0.묵 // 1.가위 // 2.보자기 ==> ";;
//
//    return Str;
//}



void cheat();
int result(int com, int player, int betting, int balance);
int computer(int com);

void main()
{
    int balance = 10000;
    int j = 1;
    int player;
    int betting;
    int com;
    while (j <= 5) //j 횟수
    {
        j++;
        srand(time(NULL));
        com = rand() % 3; //012나올꺼고 i=컴퓨터가 낼것
        cheat(); //함수 1회

        computer(com);
        
        cout << "(0-가위 / 1-바위 / 2-보) 선택하여 입력하세요" << endl;

        cin >> player;
        while (player >= 3 || player < 0)
        {
            cout << "012중에 선택하세요" << endl;
            cin >> player;
        }
       
        cout << "베팅금액을 설정해주세요(최소 1000원)" << endl;
        cin >> betting;

        while (betting < 1000)
        {
            cout << "1000원 이상만 베팅이 가능합니다. 다시 입력해주세요." << endl;
            cin >> betting;

        }

        int balance2 = result(com, player, betting, balance);  //함수2

        cout << "현재 잔고 = " << balance2 << "원" << endl << endl;


        if (balance < 0)
        {
            cout << "파산하여 게임이 종료됩니다" << endl;
            return;
        }
        Sleep(1000);
    }
              
                
    
}

void cheat()
{
    cout << "컴퓨터가 낸 것은?  ===>  ";
}
int result(int com, int player, int betting, int balance)
{
    if ((com > player) || (com == player - 2))
    {
        cout << "패배하여 " << 7 * betting << "원을 잃었습니다" << endl;
        balance -= 7 * betting;
        
    }


    else if (com == player)
    {
        cout << "무승부로 인하여 " << 5 * betting << "원을 벌었습니다" << endl;
        balance += 5 * betting;
       
    }

    else
    {
        cout << "승리하여 " << 3 * betting << "원을 벌었습니다" << endl;
        balance += 3 * betting;
       
    }
    return balance;
}

int computer(int com)
{
    switch (com)
    {
    case 0:
        cout << "가위" << endl;
        break;

    case 1:
        cout << "바위" << endl;
        break;

    case 2:
        cout << "보" << endl;
        break;
    }
    return com;
}