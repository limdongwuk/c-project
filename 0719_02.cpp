#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
void main()
{
    /*
       ����2. �ϼ� ��±�
         - if���� switch�� �߿� ������ �Ǵ��� ȿ������ ���� �����ؼ� �����.
         - �����ϸ� ������� �Է��� �ް� �Է��� ���ڿ� ���� ??�� ���� ���

         ex: 4�� �Է½� -> 4���� 30�ϱ��� �ֽ��ϴ�. -> �ٽ� �Է� Ŀ��� Ȱ��ȭ

          - 1������ 12������ Ȯ���� �����ؾ� �ϰ� �̿��� ���ڴ� ����ó���� �����Ѵ�.
          - �� 5���� �Է��ϸ� ���α׷� ����


       */

    int c = 1;
    int j;
    while (c <= 5)
    {
        ++c;

        cout << "���Ͻô� ���� ���ڸ� �Է��ϼ���" << endl;
      
        cin >> j;

        if (((j % 2 == 1) && (0 < j && j < 9)) || ((j % 2 == 0) && (7 < j && j < 13)))
        {
            cout << j << "���� 31�ϱ��� �ֽ��ϴ�." << endl;
        }
        else if (((j % 2 == 0) && (0 < j && j < 7) && (j != 2)) || ((j % 2 == 1) && (8 < j && j < 13)))
        {
            cout << j << "���� 30�ϱ��� �ֽ��ϴ�." << endl;
        }
        else if (j == 2)
        {
            cout << j << "���� 29�ϱ��� �ֽ��ϴ�." << endl;
        }
        else if ((1 > j) || (j > 12))
        {
            cout << "1������ 12�������� �Է��ϼ���." << endl;
        }
    }
}

   /* switch (j)
    {
    case 1:
        cout << "1���� 31�ϱ��� �ֽ��ϴ�." << endl;
        break;

    case 2:
        cout << "2���� 29���� �ֽ��ϴ�." << endl;
        break;

    case 3:
        cout << "3���� 31���� �ֽ��ϴ�." << endl;
        break;

    case 4:
        cout << "4���� 30���� �ֽ��ϴ�." << endl;
        break;

    case 5:
        cout << "5���� 31���� �ֽ��ϴ�." << endl;
        break;

    case 6:
        cout << "6���� 30���� �ֽ��ϴ�." << endl;
        break;

    case 7:
        cout << "7���� 31���� �ֽ��ϴ�." << endl;
        break;

    case 8:
        cout << "8���� 31���� �ֽ��ϴ�." << endl;
        break;

    case 9:
        cout << "9���� 30���� �ֽ��ϴ�." << endl;
        break;

    case 10:
        cout << "10���� 31���� �ֽ��ϴ�." << endl;
        break;

    case 11:
        cout << "11���� 30���� �ֽ��ϴ�." << endl;
        break;

    case 12:
        cout << "12���� 31���� �ֽ��ϴ�." << endl;
        break;*/





    

