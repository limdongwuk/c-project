#include <iostream>

#include <stdio.h>
using namespace std;

/*����1.������ ����

- 3���� �ݺ����� �̿��ؼ� ������ ����
�� for / while / do ~while
*/


void main()
{
    cout << "for ������" << "\n";
//    //for ������
    int i; int j;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)

            cout << i << "*" << j << "=" << i * j << endl;
    }
    cout << endl;

    
    
    
    
    
    
    
    
    cout << "while ������" << "\n";
//    //while ������
    int a = 1;
    while (a < 10)
    {
        int b = 1;
        while (b < 10)
        {
            cout << a << "*" << b << "=" << a * b << endl;
            ++b;
        }
        ++a;
    }

    cout << "\n";

    
    
    
    
    
    
    
    
    cout << "do while ������" << "\n";
//    //do while ������
    int c = 1;
    do {
         int d = 1;
        do {
        cout << c << "*" << d << "=" << c * d << endl;
            ++d;
        } while (d < 10);
        ++c;
    } while (c < 10);

}