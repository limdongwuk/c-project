#include<iostream>

using namespace std;


/*
����2. ����ڰ� �Է��� ���� ������ �� �ڸ����� ���� ���ϴ� ������ �����ض�.
ex) ���� ��..
    18324 => 1 + 8 + 3 + 2 + 4 =18
    3849 => 24
    10���� ������ �������� ��� �����ָ� ��
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
//    cout << "���ڿ��� ����" << number.length() << endl;
//}