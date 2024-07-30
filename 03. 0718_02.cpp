#include<iostream>
#include <stdio.h>
using namespace std;

void main()
{
    //과제2.연산자 활용
    //
    //- a.두개의 정수를 받아서 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성
    //
    //- b. 3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성
    //ㄴ EX : (num1 + num2) * (num3 + num1) % num1 = ?
    //
    //-c.입력 받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
    //ㄴ EX : 7과 2가 입력->몪으로 3 / 나머지는 1이 출력되면 된다.

//- a.두개의 정수를 받아서 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성
    int a; int b;
    cin >> a;
    cin >> b;
    cout << a << "+" << b <<"=" << a + b << endl;
        cout << a << "-" << b << "=" << a - b << endl;
    


//- b. 3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성
//ㄴ EX : (num1 + num2) * (num3 + num1) % num1 = ?

        int num1; int num2; int num3;
        cin >> num1;
        cin >> num2;
        cin >> num3;
        int x = num1 + num2;
            int y = num3 + num1;

            cout << "(num1 + num2) * (num3 + num1) % num1 = " << x * y % num1 << endl;



//-c.입력 받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
//ㄴ EX : 7과 2가 입력->몪으로 3 / 나머지는 1이 출력되면 된다.

            int c; int d;
            cin >> c;
            cin >> d;
            cout << "c / d = " << c / d << endl;
            cout << "c % d = " << c % d << endl;









}