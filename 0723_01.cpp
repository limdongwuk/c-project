#include <iostream>

using namespace std;


/*오늘의 과제.
    1. plyer Vs Computer
        1. C는 임의의 숫자 3개를 뽑습니다.(난수발생범위 1~10)(1~10입력안하면 재입력하라는 문구뜰 것)
        2. P는 차례대로 숫자 3개를 입력합니다.
        3. 비교

        1번에서 5, 3, 1 나왔고
        2번에서 1, 2, 3 입력했으면

        자리는 다른데 숫자가 동일하면 볼
        자리도 같고 숫자도 같으면 스트라이크

        배열로 비교하세요.(눈속임이 힌트)
        볼하고 스트라이크 출력

        종료조건
        3out(1out =3strike)
        */

void main()
{
    int com[3];
    int player[3];
    int j = 1;

    srand(time(NULL));
    while (j < 4) //j는 반복횟수
    {
      
        for (int i = 0; i < 3; i++)
        {
            com[i] = rand() % 10 + 1;
            cout << com[i] << " ";
        }
        //컴퓨터 랜덤값3개

        cout << endl;

        for (int i = 0; i < 3; i++)
        {

            cin >> player[i];

            while (player[i] < 0 || player[i]>10)
            {
                cout << "1~10까지만 입력하세요" << endl;
                cin >> player[i];

            }

        }

        // 사람 3개입력 과정

        for (int i = 0; i < 3; i++)
        {
            cout << player[i] << " ";
        }
        //플레이어 배열 값 보여주기


        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (com[i] == player[j])
                {
                  
                }
            }
            
           
        }
        if ((player[0] == com[0]) && (player[1] == com[1]) && (player[2] == com[2])) //player[i] == com[i] 하면안되는 이유 모르겠음
        {
            cout << "3strike = " << j << "out" << endl;
            j += 1;

        }
        // 배열값이 모두 같을때 1out 
        else
        {
            cout << "not out" << endl;
        }

    }
    cout << "게임이 종료되었습니다" << endl;
}



// ★★선생님이 구현하신것
// 
//int main()
//{
//    srand(time(NULL));
//
//    int number[10];
//    int comNumber[3];
//    int playerNumber[3];
//    int dest, sour, temp;
//    int ballCount;
//    int strikeCount;
//
//    for (size_t i = 0; i < 10; i++) //초기화
//    {
//        number[i] = i;
//    }
//    for (size_t i = 0; i < 500; i++) //섞고
//    {
//        dest = rand() % 10;
//        sour = rand() % 10;
//
//        temp = number[dest];
//        number[dest] = number[sour];
//        number[sour] = temp;
//    }
//
//    //컴퓨터 숫자 받자.
//    for (size_t i = 0; i < 3; i++)
//    {
//        comNumber[i] = number[i];
//    }
//
//    cout << "컴퓨터가 낸 숫자 : ";
//    for (size_t i = 0; i < 3; i++)
//    {
//        cout << comNumber[i] << "  ";
//    }
//    cout << endl << endl;
//
//    //게임이 돌아가는 루프
//    while (true)
//    {
//        cout << "0~9까지 숫자를 입력해보세요 ==> : "
//
//            for (size_t i = 0; i < 3; i++)
//            {
//                cout << i + 1 << "번째 숫자를 입력하세요 ==> : "
//                    cin >> playerNumber[1];
//            }
//        //횟수마다 볼카운트 스트라이크 초기화
//        ballCount = 0;
//        strikeCount = 0;
//
//        //컴
//        for (size_t i = 0; i < 3; i++)
//        {   //플
//            for (size_t k = 0; k < 3; k++)
//            {
//                //컴퓨터 숫자와 내가 입력한 숫자가 같나?
//                if (comNumber[i] == playerNumber[k])
//                {
//                    //자리까지 같냐?
//                    if (i == k)
//                    {
//                        strikeCount++;
//                    }
//                    else
//                    {
//                        ballCount++;
//                    }
//                }
//            }
//        } //end of for
//    }   cout << ballCount << "볼" << strikeCount << "스트라이크" << endl;
//
//    if (strikeCount == 3)
//
//        cout << strikeCount << "삼진아웃" << endl;
//
//    break;
//
//}//end of while