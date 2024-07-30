#include<iostream>

using namespace std;


/*
과제2. 사용자가 입력한 양의 정수의 각 자릿수의 합을 구하는 로직을 구현해라.
ex) 예를 들어서..
    18324 => 1 + 8 + 3 + 2 + 4 =18
    3849 => 24
    10으로 나눠서 나머지를 계속 보여주면 됨
*/

void main()
{
    int number;
    int result = 0;
    int nanugi = 10;

        cin >> number;

        while (number != 0)
        {
            result += number % 10;
            number /= 10;
            
        }
        cout << result << endl;
}

//void StringLength();
//
//void main()
//{
//    
//    string number;
//
//    cin >> number;
//
//    for (int i = 0; i < number.length(); i++)
//    {
//        cout << number[i] - '0' << endl;
//    }
//
//    string nanugi = 10;
//
//    StringLength();
//
//}
//
//void StringLength()
//{
//    string number;
//    cout << "문자열의 길이" << number.length() << endl;
//}