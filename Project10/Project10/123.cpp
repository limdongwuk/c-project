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


	///*����1.���������� ����

	//	- if���� ����ؼ� �����.
	//	�� ����ġ ���� ��� ����

	//	- ������ ���� Ƚ���� �� 5��
	//	�� ���Ĵ� ���� ����

	//	- �ʼ�: ġƮ


	//	�� ���� ���ڸ� �ڵ带 �ִ��� �����ϰ� �ؿ°� �������̴�.





	//	*/


	//int me;
	//int computer = comchoice();
	//int cheat;


	//for (int i = 0; i < 5; i++)
	//{
	//	int computer = comchoice();
	//	cout << "ġƮŰ : ";
	//	switch (computer)
	//	{
	//	case 0:
	//		cout << "����";
	//		break;
	//	case 1:
	//		cout << "����";
	//		break;
	//	case 2:
	//		cout << "��";
	//		break;
	//	}
	//	cout << endl;

	//	cout << "0����,1����,2�� �� �����ϼ���." << endl;
	//	cin >> me;

	//	if (computer == me)
	//	{
	//		cout << "�����ϴ�" << endl;
	//	}

	//	else if (computer > me || (computer == 0 && me == 2))
	//	{
	//		cout << "�����ϴ�" << endl;
	//	}

	//	else
	//	{
	//		cout << "�̰���ϴ�" << endl;
	//	}
	//}
	///*����2.�ϼ� ��±�
	//	- if���� switch�� �߿� ������ �Ǵ��� ȿ������ ���� �����ؼ� �����.
	//	- �����ϸ� ������� �Է��� �ް� �Է��� ���ڿ� ���� ? ? �� ���� ���

	//	ex : 4�� �Է½� -> 4���� 30�ϱ��� �ֽ��ϴ�.->�ٽ� �Է� Ŀ��� Ȱ��ȭ

	//	- 1������ 12������ Ȯ���� �����ؾ� �ϰ� �̿��� ���ڴ� ����ó���� �����Ѵ�.
	//	- �� 5���� �Է��ϸ� ���α׷� ���� * /*/

	//int month;
	//
	//cin >> month;
	//
	//if (month == 1&&3&&5)
	//{
	//	cout << month << "31�ϱ��� �ֽ��ϴ�" << endl;
	//
	//}
	//else
	//{
	//	cout << month << "3�ϱ��� �ֽ��ϴ�" << endl;
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
		cout << "0����, 1����,2�� �� �Է��ϼ���" << endl;
		person = peoplechoice();

		cin >> betting;
		while (betting < 1000 || balance < betting)
		{
			cout << "���ñݾ��� �ٽ� �Է����ּ���" << endl;
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
			cout << "�����ϴ�" << endl;
			if (balance < 0)
			{
				balance = 0;
			}
			cout << "���� ���� �ݾ��� " << balance << "�Դϴ�";

		}

		else
		{
			balance = result(balance, betting, 7);
			cout << "�̰���ϴ�" << endl;
			cout << "�̰ܼ� ���� �ݾ��� " << balance << "�Դϴ�";
		}

		if (balance <= 0)
		{
			cout << endl;
			cout << "������ �����մϴ�" << endl;
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
	int peoplechoice()
	{
		int person;
		cin >> person;
		cout << "���ñݾ��� �������ּ���." << endl;
		return person;

	}
	void re(int betting, int balance)
	{
		while (betting < 1000 || balance < betting)
		{
			cout << "���ñݾ��� �ٽ� �Է����ּ���" << endl;
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

		cout << "�����ϴ�" << endl;
		cout << "��ܼ� ���� �ݾ��� " << balance << "�Դϴ�";




	}

	/*������ ����.
	1. plyer Vs Computer
		1. C�� ������ ���� 3���� �̽��ϴ�.(�����߻����� 1~10)(1~10�Է¾��ϸ� ���Է��϶�� ������ ��)
		2. P�� ���ʴ�� ���� 3���� �Է��մϴ�.
		3. ��

		1������ 5, 3, 1 ���԰�
		2������ 1, 2, 3 �Է�������

		�ڸ��� �ٸ��� ���ڰ� �����ϸ� ��
		�ڸ��� ���� ���ڵ� ������ ��Ʈ����ũ

		�迭�� ���ϼ���.(�������� ��Ʈ)
		���ϰ� ��Ʈ����ũ ���

		��������
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
		//�迭�� �̷��� �ϸ� �ε���012�ȿ� �������� ���°� �ƴϰ� �ε��� 3�� �������� ���� �ϴ� ����� 

	for (int i = 0; i < 3; i++)
	{
		cin >> p[i];
	}




















}