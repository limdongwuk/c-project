#include <iostream>
using namespace std;
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
		cout << "��ǻ�Ͱ� �Է��� �� : ";
		for (int i = 0; i < 3; i++)
		{
			Compu[i] = rand() % 10 + 1;
			cout << Compu[i] << " ";
		}
		cout << endl;
		/*	com[3] = rand() % 10 + 1;*/
			//�迭�� �̷��� �ϸ� �ε���012�ȿ� �������� ���°� �ƴϰ� �ε��� 3�� �������� ���� �ϴ� ����� 
		for (int i = 0; i < 3; i++)
		{
			cin >> p[i];

		}

		cout << "���� �Է��� �� : ";
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

		cout << strikecount << "��Ʈ����ũ �Դϴ�." << endl;
		cout << ballcount << "�� �Դϴ�." << endl;

		if (strikecount == 3)
		{
			outcount++;
		}
		cout << outcount << "�ƿ��Դϴ�" << endl;
	}
}