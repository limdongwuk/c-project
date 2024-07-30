#include <iostream>

#include <stdio.h>
using namespace std;

/*苞力1.备备窜 备泅

- 3辆狼 馆汗巩阑 捞侩秦辑 备备窜 备泅
い for / while / do ~while
*/


void main()
{
    cout << "for 备备窜" << "\n";
//    //for 备备窜
    int i; int j;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)

            cout << i << "*" << j << "=" << i * j << endl;
    }
    cout << endl;

    
    
    
    
    
    
    
    
    cout << "while 备备窜" << "\n";
//    //while 备备窜
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

    
    
    
    
    
    
    
    
    cout << "do while 备备窜" << "\n";
//    //do while 备备窜
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