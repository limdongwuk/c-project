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
//        i = rand() % 3; //��ǻ�Ͱ� ���� ��(0��,1��,2��)
//        
//
//        string q = "ġƮ - 0.�� // 1.���� // 2.���ڱ� ==> ";
// 
//        string Test; // ���� ����
//        Test = StrCheat();
//        /*
//        int A;
//        A = 0;
//        */
//
//        cout << q << i << endl;
//
//                cin >> k; // ��������
//        
//    }
//
//}
//
//void cheat()
//{
//    cout << "0.�� // 1.���� // 2.���ڱ� " << endl;
//}
//
//string StrCheat()
//{
//    string Str = "ġƮ - 0.�� // 1.���� // 2.���ڱ� ==> ";;
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
    while (j <= 5) //j Ƚ��
    {
        j++;
        srand(time(NULL));
        com = rand() % 3; //012���ò��� i=��ǻ�Ͱ� ����
        cheat(); //�Լ� 1ȸ

        computer(com);
        
        cout << "(0-���� / 1-���� / 2-��) �����Ͽ� �Է��ϼ���" << endl;

        cin >> player;
        while (player >= 3 || player < 0)
        {
            cout << "012�߿� �����ϼ���" << endl;
            cin >> player;
        }
       
        cout << "���ñݾ��� �������ּ���(�ּ� 1000��)" << endl;
        cin >> betting;

        while (betting < 1000)
        {
            cout << "1000�� �̻� ������ �����մϴ�. �ٽ� �Է����ּ���." << endl;
            cin >> betting;

        }

        int balance2 = result(com, player, betting, balance);  //�Լ�2

        cout << "���� �ܰ� = " << balance2 << "��" << endl << endl;


        if (balance < 0)
        {
            cout << "�Ļ��Ͽ� ������ ����˴ϴ�" << endl;
            return;
        }
        Sleep(1000);
    }
              
                
    
}

void cheat()
{
    cout << "��ǻ�Ͱ� �� ����?  ===>  ";
}
int result(int com, int player, int betting, int balance)
{
    if ((com > player) || (com == player - 2))
    {
        cout << "�й��Ͽ� " << 7 * betting << "���� �Ҿ����ϴ�" << endl;
        balance -= 7 * betting;
        
    }


    else if (com == player)
    {
        cout << "���ºη� ���Ͽ� " << 5 * betting << "���� �������ϴ�" << endl;
        balance += 5 * betting;
       
    }

    else
    {
        cout << "�¸��Ͽ� " << 3 * betting << "���� �������ϴ�" << endl;
        balance += 3 * betting;
       
    }
    return balance;
}

int computer(int com)
{
    switch (com)
    {
    case 0:
        cout << "����" << endl;
        break;

    case 1:
        cout << "����" << endl;
        break;

    case 2:
        cout << "��" << endl;
        break;
    }
    return com;
}