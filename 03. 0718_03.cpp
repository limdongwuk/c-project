#include<iostream>
#include <stdio.h>
using namespace std;

void main()
{
    //����3.�ݺ��� ���
    //
    //- for / while / do ~while�� ��� ���
    //- 1���� 20���� ����Ͻÿ�.
    //�� ¦����
    //
    //- 20���� 1���� ����Ͻÿ�.

   
    //for 1~20¦�� ���
    for (int a = 1; a * 2 <= 20; ++a)
    {
        cout << "for 1~20 ¦�� ���" << a * 2 << endl;
    }
//    while 1~20¦�� ���
    int b = 1;
    while (b <= 10)
    {
        cout << "while 1~20 ¦�� ���" << 2 * b << endl;
        ++b;
    }

    //do while 1~20¦�� ���
    int c = 1;
    do
    {
        cout << "dowhile 1~20 ¦�� ���" << 2 * c << endl;
        ++c;
    } while (c <= 10);


    //for 20~1 ���
    for (int i = 20; i>=1; --i)
    {
        cout << "for 20~1 ���" << i << endl;
    }

    //while 20~1 ���
    int j = 20;
    while (j >= 1)
    {
        cout << "20~1 while ���" << j << endl;
        --j;
    }
            //do~while 20~1 ���
            int e = 20;
            do {
                cout << "20~1 do~while ���" << e << endl;
                --e;
            } while (e >= 1);


}



