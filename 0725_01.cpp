#include <iostream>
#include <algorithm>
#include <random>

//l,l,,,

using namespace std;







//���� �� ���� ������ ���� ī�尡 ���Դٸ�(���)
//�Ʒ��� ���� �������� ī��� ��ǻ�Ͱ� ���ٰ� ������.
//��7(��)  ��8  ��9(��)
//��ǻ�Ͱ� �� ���� �ΰ� ���̿� �������� ī���� ���ڰ� ������ �¸�(���þ� * 2)
//��ǻ�Ͱ� �� ���ڿ� �Ѱ��� ���ڰ� ������ ������ ��(���þ� ��ŭ ����)
//�����ȿ� ������ �ʴ´ٸ�(���þ� * 2 ����)
//
//����)�ѹ� ����� ī��� �����ߵ�.(������� �ʴ°� ��)
//17�� ������ �ڵ����� ��������(3���� ī�带 ���ϸ��� �Һ�)
//
//��7�� ���Դٸ� �ι��ٽ� ��7�� ������� �ʴ´�.
//a = 1
//k = 13
//�����ٶ� 13�� k�� �������� �Ұ�
//������ �������� ������ ��
//�ּ� ���ñݾ� ������


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
//        cout <<"��" << a[i] << " ";
//        cout << "��" << b[i] << " ";
//        cout << "��" << c[i] << " ";
//        cout << "��" << d[i] << " ";
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
//        // �ߺ��� ī�尡 ���Դٸ� �ٽ� �̱�
//        while (cardPicked[random - 1][index]) 
//        {
//            random = rand() % 4 + 1;
//            index = rand() % 13;
//        }
//
//        // �ش� ī�带 �̾Ҵٰ� ǥ��
//        cardPicked[random - 1][index] = true;
//        
//        
//            switch (random)
//            {
//            case 1:
//                cout << i + 1 << "��° ī�� : ��" << a[index] << endl;
//
//                break;
//
//            case 2:
//                cout << i + 1 << "��° ī�� : ��" << b[index] << endl;
//
//                break;
//
//            case 3:
//                cout << i + 1 << "��° ī�� : ��" << c[index] << endl;
//
//                break;
//
//            case 4:
//                cout << i + 1 << "��° ī�� : ��" << d[index] << endl;
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

            cout << "�����̽�" << number << endl;
            break;

        case 1:

            cout << "��Ʈ" << number << endl;

            break;
        case 2:

            cout << "Ŭ�ι�" << number << endl;
            break;

        case 3:

            cout << "���̾�" << number << endl;
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
                cout << i + 1 << "��° ���� �̰��"  << endl;
                balance += betting * 2;
                cout << balance << "��" << endl;
            }

            else if ((com1 == me) || (com2 == me))
            {
                cout << i + 1 << "��° ���� ���� " << endl; 
                balance -= betting;
                cout << balance << "��" << endl;
            }

            else
            {
                cout << i + 1 << "��° ���� ���� " << endl;
                balance -= 2 * betting;
                cout << balance << "��" << endl;

            }
            if (balance <= 0)
            {
                cout << "���� ����" << endl;
                break;
            }

        }
    
}

        /*else if (((arr[3 * i] % 14) == (arr[3 * i + 2] % 14)) || ((arr[3 * i + 2] % 14) == (arr[3 * i + 1] % 14)))
        {
            cout << i + 1 << "��° ����" << arr[3 * i] % 14 << "  " << arr[3 * i + 2] % 14 << "  " << arr[3 * i + 1] % 14 << endl;
            cout << "���º�" << endl;
            balance -= betting;
        }

        else
        {
            balance -= 2 * betting;
        }

    }
        cout << balance << endl;*/


    



