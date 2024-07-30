#include<iostream>
#include <stdio.h>
using namespace std;

void main()
{
    //과제3.반복문 출력
    //
    //- for / while / do ~while문 모두 사용
    //- 1부터 20까지 출력하시오.
    //ㄴ 짝수만
    //
    //- 20에서 1까지 출력하시오.

   
    //for 1~20짝수 출력
    for (int a = 1; a * 2 <= 20; ++a)
    {
        cout << "for 1~20 짝수 출력" << a * 2 << endl;
    }
//    while 1~20짝수 출력
    int b = 1;
    while (b <= 10)
    {
        cout << "while 1~20 짝수 출력" << 2 * b << endl;
        ++b;
    }

    //do while 1~20짝수 출력
    int c = 1;
    do
    {
        cout << "dowhile 1~20 짝수 출력" << 2 * c << endl;
        ++c;
    } while (c <= 10);


    //for 20~1 출력
    for (int i = 20; i>=1; --i)
    {
        cout << "for 20~1 출력" << i << endl;
    }

    //while 20~1 출력
    int j = 20;
    while (j >= 1)
    {
        cout << "20~1 while 출력" << j << endl;
        --j;
    }
            //do~while 20~1 출력
            int e = 20;
            do {
                cout << "20~1 do~while 출력" << e << endl;
                --e;
            } while (e >= 1);


}



