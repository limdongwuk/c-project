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



// �ڡڼ������� �����ϽŰ�
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
//    for (size_t i = 0; i < 10; i++) //�ʱ�ȭ
//    {
//        number[i] = i;
//    }
//    for (size_t i = 0; i < 500; i++) //����
//    {
//        dest = rand() % 10;
//        sour = rand() % 10;
//
//        temp = number[dest];
//        number[dest] = number[sour];
//        number[sour] = temp;
//    }
//
//    //��ǻ�� ���� ����.
//    for (size_t i = 0; i < 3; i++)
//    {
//        comNumber[i] = number[i];
//    }
//
//    cout << "��ǻ�Ͱ� �� ���� : ";
//    for (size_t i = 0; i < 3; i++)
//    {
//        cout << comNumber[i] << "  ";
//    }
//    cout << endl << endl;
//
//    //������ ���ư��� ����
//    while (true)
//    {
//        cout << "0~9���� ���ڸ� �Է��غ����� ==> : "
//
//            for (size_t i = 0; i < 3; i++)
//            {
//                cout << i + 1 << "��° ���ڸ� �Է��ϼ��� ==> : "
//                    cin >> playerNumber[1];
//            }
//        //Ƚ������ ��ī��Ʈ ��Ʈ����ũ �ʱ�ȭ
//        ballCount = 0;
//        strikeCount = 0;
//
//        //��
//        for (size_t i = 0; i < 3; i++)
//        {   //��
//            for (size_t k = 0; k < 3; k++)
//            {
//                //��ǻ�� ���ڿ� ���� �Է��� ���ڰ� ����?
//                if (comNumber[i] == playerNumber[k])
//                {
//                    //�ڸ����� ����?
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
//    }   cout << ballCount << "��" << strikeCount << "��Ʈ����ũ" << endl;
//
//    if (strikeCount == 3)
//
//        cout << strikeCount << "�����ƿ�" << endl;
//
//    break;
//
//}//end of while