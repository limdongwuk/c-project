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
	int Compu[3];
	int p[3];
	int strikecount=0;
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