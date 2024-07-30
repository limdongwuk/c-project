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
    

    srand(time(NULL));
	int Compu[3];
	int p[3];
	int strikecount = 0;
	int ballcount = 0;
	int outcount = 0;
	while (outcount < 3)
	{
		strikecount = 0;
		ballcount = 0;
		srand(time(NULL));
		cout << "컴퓨터가 입력한 수 : ";
		for (int i = 0; i < 3; i++)
		{
			Compu[i] = rand() % 10 + 1;
			cout << Compu[i] << " ";
		}
		cout << endl;
		/*	com[3] = rand() % 10 + 1;*/
			//배열을 이렇게 하면 인덱스012안에 랜덤값이 들어가는게 아니고 인덱스 3에 랜덤값이 들어가게 하는 방법임 
		for (int i = 0; i < 3; i++)
		{
			cin >> p[i];

		}

		cout << "내가 입력한 수 : ";
		for (int i = 0; i < 3; i++)
		{
			cout << p[i] << " ";

		}
		cout << endl;

		for (int i = 0; i < 3; i++)
		{
			if (Compu[i] == p[i])
			{
				strikecount++;
			}

			for (int j = 0; j < 3; j++)
			{
				if (Compu[i] == p[j] && i != j)
				{
					ballcount++;
				}
			}
		}

		cout << strikecount << "스트라이크 입니다." << endl;
		cout << ballcount << "볼 입니다." << endl;

		if (strikecount == 3)
		{
			outcount++;
		}
		cout << outcount << "아웃입니다" << endl;
	}
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