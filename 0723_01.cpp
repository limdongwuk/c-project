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
    int com[3];
    int player[3];
    int j = 1;

    srand(time(NULL));
    while (j < 4) //j�� �ݺ�Ƚ��
    {
      
        for (int i = 0; i < 3; i++)
        {
            com[i] = rand() % 10 + 1;
            cout << com[i] << " ";
        }
        //��ǻ�� ������3��

        cout << endl;

        for (int i = 0; i < 3; i++)
        {

            cin >> player[i];

            while (player[i] < 0 || player[i]>10)
            {
                cout << "1~10������ �Է��ϼ���" << endl;
                cin >> player[i];

            }

        }

        // ��� 3���Է� ����

        for (int i = 0; i < 3; i++)
        {
            cout << player[i] << " ";
        }
        //�÷��̾� �迭 �� �����ֱ�


        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (com[i] == player[j])
                {
                  
                }
            }
            
           
        }
        if ((player[0] == com[0]) && (player[1] == com[1]) && (player[2] == com[2])) //player[i] == com[i] �ϸ�ȵǴ� ���� �𸣰���
        {
            cout << "3strike = " << j << "out" << endl;
            j += 1;

        }
        // �迭���� ��� ������ 1out 
        else
        {
            cout << "not out" << endl;
        }

    }
    cout << "������ ����Ǿ����ϴ�" << endl;
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