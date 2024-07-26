#include <iostream>
#include <algorithm>
#include <random>

//l,l,,,

using namespace std;







//예를 들어서 만약 다음과 같은 카드가 나왔다면(출력)
//아래와 같이 보여지는 카드는 컴퓨터가 낸다고 가정함.
//♧7(컴)  ♤8  ♡9(컴)
//컴퓨터가 낸 숫자 두개 사이에 내가뽑은 카드의 숫자가 들어오면 승리(배팅액 * 2)
//컴퓨터가 낸 숫자와 한개라도 숫자가 같으면 무조건 짐(배팅액 만큼 소진)
//범위안에 들어오지 않는다면(배팅액 * 2 차감)
//
//조건)한번 사용한 카드는 버려야됨.(사용하지 않는것 뿐)
//17판 돌리면 자동으로 끝나야함(3장의 카드를 한턴마다 소비)
//
//♧7가 나왔다면 두번다시 ♧7는 사용하지 않는다.
//a = 1
//k = 13
//보여줄땐 13은 k로 보여지게 할것
//소지금 다잃으면 종료할 것
//최소 베팅금액 있을것


//void shuffle(int abcd[]);
//void main()
//{
//    
//    srand(time(NULL));
//
//    int a[13];
//    int b[13];
//    int c[13];
//    int d[13];
//    int dest, sour, temp;
//
//
//    for (int i = 0; i<13; i++)
//    {
//        a[i] = i+1;
//        b[i] = i + 1;
//        c[i] = i + 1;
//        d[i] = i + 1;
//    }
//
//    shuffle(a);
//    shuffle(b);
//    shuffle(c);
//    shuffle(d);
//
//   
//    for (int i = 0; i < 13; i++)
//    {
//        cout <<"♤" << a[i] << " ";
//        cout << "♡" << b[i] << " ";
//        cout << "♧" << c[i] << " ";
//        cout << "◇" << d[i] << " ";
//    }
//
//
//        cout << endl;
//
//        bool cardPicked[4][13] = { false };
//        for (int i = 0; i < 52; i++)
//        {
//        int random = rand() % 4 + 1;
//        int index = rand() % 13;
//
//        // 중복된 카드가 나왔다면 다시 뽑기
//        while (cardPicked[random - 1][index]) 
//        {
//            random = rand() % 4 + 1;
//            index = rand() % 13;
//        }
//
//        // 해당 카드를 뽑았다고 표시
//        cardPicked[random - 1][index] = true;
//        
//        
//            switch (random)
//            {
//            case 1:
//                cout << i + 1 << "번째 카드 : ♤" << a[index] << endl;
//
//                break;
//
//            case 2:
//                cout << i + 1 << "번째 카드 : ♡" << b[index] << endl;
//
//                break;
//
//            case 3:
//                cout << i + 1 << "번째 카드 : ♧" << c[index] << endl;
//
//                break;
//
//            case 4:
//                cout << i + 1 << "번째 카드 : ◇" << d[index] << endl;
//
//                break;
//            }
//
//           
//        }
//      
//        
//
//        
//
//
//}
//
//void shuffle(int abcd[])
//{
//    for (int i = 0; i < 1000; i++)
//    {
//
//        int dest = rand() % 13;
//        int sour = rand() % 13;
//
//        int temp = abcd[dest];
//        abcd[dest] = abcd[sour];
//        abcd[sour] = temp;
//    }
//}

void main()
{
    srand(time(NULL));
    int arr[52];
    int shcd;
    int number;
    int balance = 10000;
    int betting = 1000;
    for (int i = 0; i < 52; ++i)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 1000; i++)
    {

        int dest = rand() % 52;
        int sour = rand() % 52;

        int temp = arr[dest];
        arr[dest] = arr[sour];
        arr[sour] = temp;
    }
    for (int i = 0; i < 52; ++i)
    {

        shcd = (arr[i] - 1) / 13;
        number = (arr[i] - 1) % 13 + 1;

        switch (shcd)
        {
        case 0:

            cout << "스페이스" << number << endl;
            break;

        case 1:

            cout << "하트" << number << endl;

            break;
        case 2:

            cout << "클로버" << number << endl;
            break;

        case 3:

            cout << "다이아" << number << endl;
            break;
        }
    }





    
    
        for (int i = 0; i < 17; ++i)
        {

            int com1 = (arr[3 * i] - 1) % 13 + 1;
            int com2 = (arr[3 * i + 1] - 1) % 13 + 1;
            int me = (arr[3 * i + 2] - 1) % 13 + 1;

            if (((com1 < me) && (me < com2) || (com2 < me) && (me < com1)))

            {
                cout << i + 1 << "번째 게임 이겼다"  << endl;
                balance += betting * 2;
                cout << balance << "원" << endl;
            }

            else if ((com1 == me) || (com2 == me))
            {
                cout << i + 1 << "번째 게임 비겼다 " << endl; 
                balance -= betting;
                cout << balance << "원" << endl;
            }

            else
            {
                cout << i + 1 << "번째 게임 졌다 " << endl;
                balance -= 2 * betting;
                cout << balance << "원" << endl;

            }
            if (balance <= 0)
            {
                cout << "게임 종료" << endl;
                break;
            }

        }
    
}

        /*else if (((arr[3 * i] % 14) == (arr[3 * i + 2] % 14)) || ((arr[3 * i + 2] % 14) == (arr[3 * i + 1] % 14)))
        {
            cout << i + 1 << "번째 게임" << arr[3 * i] % 14 << "  " << arr[3 * i + 2] % 14 << "  " << arr[3 * i + 1] % 14 << endl;
            cout << "무승부" << endl;
            balance -= betting;
        }

        else
        {
            balance -= 2 * betting;
        }

    }
        cout << balance << endl;*/


    



