#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;


/*����1.���������� ����

- if���� ����ؼ� �����.
�� ����ġ ���� ��� ����

- ������ ���� Ƚ���� �� 5��
�� ���Ĵ� ���� ����

- �ʼ�: ġƮ


�� ���� ���ڸ� �ڵ带 �ִ��� �����ϰ� �ؿ°� �������̴�.
*/

void main()
{
    int coin = 1;
    int com;
    int person;
    
    while (coin <= 5)
    {

        coin++;

        srand(time(NULL));

        com = rand() % 3 + 1;

        cout << "��ǻ�Ͱ�����(1����,2����,3��) = " << com << endl;

        cin >> person;

        if (com == person)
        {
            cout << "���º�" << endl;
        }
        else if ((com + 1 == person) || (com - 2 == person))
        {
            cout << "�¸�" << endl;
        }
        else if (1 > person || person > 3)
        {
            cout << "1~3���ڸ� �Է����ּ���" << endl;
        }
        else
        {
            cout << "�й�" << endl;
        }
    }
}
   