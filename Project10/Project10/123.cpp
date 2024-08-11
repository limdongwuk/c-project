#include <iostream>
#include <string>
using namespace std;
int comchoice2(int com);
int comchoice();
int peoplechoice();
int result(int balance, int betting, int c);
void result1(int balance);
void main()
{


	///*과제1.가위바위보 게임

	//	- if문을 사용해서 만든다.
	//	ㄴ 스위치 문은 사용 금지

	//	- 게임의 진행 횟수는 총 5판
	//	ㄴ 이후는 게임 종료

	//	- 필수: 치트


	//	※ 팁을 주자면 코드를 최대한 간결하게 해온게 좋을것이다.





	//	*/


	//int me;
	//int computer = comchoice();
	//int cheat;


	//for (int i = 0; i < 5; i++)
	//{
	//	int computer = comchoice();
	//	cout << "치트키 : ";
	//	switch (computer)
	//	{
	//	case 0:
	//		cout << "가위";
	//		break;
	//	case 1:
	//		cout << "바위";
	//		break;
	//	case 2:
	//		cout << "보";
	//		break;
	//	}
	//	cout << endl;

	//	cout << "0가위,1바위,2보 중 선택하세요." << endl;
	//	cin >> me;

	//	if (computer == me)
	//	{
	//		cout << "비겼습니다" << endl;
	//	}

	//	else if (computer > me || (computer == 0 && me == 2))
	//	{
	//		cout << "졌습니다" << endl;
	//	}

	//	else
	//	{
	//		cout << "이겼습니다" << endl;
	//	}
	//}
	///*과제2.일수 출력기
	//	- if문과 switch문 중에 본인이 판단해 효율적인 것을 선택해서 만든다.
	//	- 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ? ? 일 인지 출력

	//	ex : 4를 입력시 -> 4월은 30일까지 있습니다.->다시 입력 커멘드 활성화

	//	- 1월부터 12월까지 확인이 가능해야 하고 이외의 숫자는 예외처리를 진행한다.
	//	- 총 5번을 입력하면 프로그램 종료 * /*/

	//int month;
	//
	//cin >> month;
	//
	//if (month == 1&&3&&5)
	//{
	//	cout << month << "31일까지 있습니다" << endl;
	//
	//}
	//else
	//{
	//	cout << month << "3일까지 있습니다" << endl;
	//}


	int i = 0;
	int person;
	int balance = 10000;
	int betting;


	while (i < 5)
	{
		i++;
		int com = comchoice();

		cout << "cheat = ";
		comchoice2(com);

		cout << endl;
		cout << "0가위, 1바위,2보 중 입력하세요" << endl;
		person = peoplechoice();

		cin >> betting;
		while (betting < 1000 || balance < betting)
		{
			cout << "베팅금액을 다시 입력해주세요" << endl;
			cin >> betting;

		}
		if (com == person)
		{
			balance = result(balance, betting, 5);
			result1(balance);
		}

		else if ((com > person) || (person == 2 && com == 0))
		{
			balance -= betting * 7;
			cout << "졌습니다" << endl;
			if (balance < 0)
			{
				balance = 0;
			}
			cout << "져서 현재 금액은 " << balance << "입니다";

		}

		else
		{
			balance = result(balance, betting, 7);
			cout << "이겼습니다" << endl;
			cout << "이겨서 현재 금액은 " << balance << "입니다";
		}

		if (balance <= 0)
		{
			cout << endl;
			cout << "게임을 종료합니다" << endl;
			break;
		}
		cout << endl;
	}






	int comchoice()
	{
		srand(time(NULL));
		return rand() % 3;
	}
	int comchoice2(int com)
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
	int peoplechoice()
	{
		int person;
		cin >> person;
		cout << "베팅금액을 설정해주세요." << endl;
		return person;

	}
	void re(int betting, int balance)
	{
		while (betting < 1000 || balance < betting)
		{
			cout << "베팅금액을 다시 입력해주세요" << endl;
			cin >> betting;

		}
	}
	int result(int balance, int betting, int c)
	{
		balance += betting * c;
		return balance;
	}

	void result1(int balance)
	{

		cout << "비겼습니다" << endl;
		cout << "비겨서 현재 금액은 " << balance << "입니다";




	}

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

	int Compu[3];
	int p[3];

	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		Compu[i] = rand() % 10 + 1;
		cout << Compu[i] << " " << endl;
	}

	/*	com[3] = rand() % 10 + 1;*/
		//배열을 이렇게 하면 인덱스012안에 랜덤값이 들어가는게 아니고 인덱스 3에 랜덤값이 들어가게 하는 방법임 

	for (int i = 0; i < 3; i++)
	{
		cin >> p[i];
	}




















}