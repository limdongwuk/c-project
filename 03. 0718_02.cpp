#include<iostream>
#include <stdio.h>
using namespace std;

void main()
{
    //����2.������ Ȱ��
    //
    //- a.�ΰ��� ������ �޾Ƽ� �� ���� ������ ������ ����� ����ϴ� ���α׷� �ۼ�
    //
    //- b. 3���� ����(num1, num2, num3)�� �޾Ƽ� ���� ������ ����� ����ϴ� ���α׷� �ۼ�
    //�� EX : (num1 + num2) * (num3 + num1) % num1 = ?
    //
    //-c.�Է� ���� �� ������ ���������� ��� �Ǵ� ��� �������� ����ϴ� ���α׷� �ۼ�
    //�� EX : 7�� 2�� �Է�->������ 3 / �������� 1�� ��µǸ� �ȴ�.

//- a.�ΰ��� ������ �޾Ƽ� �� ���� ������ ������ ����� ����ϴ� ���α׷� �ۼ�
    int a; int b;
    cin >> a;
    cin >> b;
    cout << a << "+" << b <<"=" << a + b << endl;
        cout << a << "-" << b << "=" << a - b << endl;
    


//- b. 3���� ����(num1, num2, num3)�� �޾Ƽ� ���� ������ ����� ����ϴ� ���α׷� �ۼ�
//�� EX : (num1 + num2) * (num3 + num1) % num1 = ?

        int num1; int num2; int num3;
        cin >> num1;
        cin >> num2;
        cin >> num3;
        int x = num1 + num2;
            int y = num3 + num1;

            cout << "(num1 + num2) * (num3 + num1) % num1 = " << x * y % num1 << endl;



//-c.�Է� ���� �� ������ ���������� ��� �Ǵ� ��� �������� ����ϴ� ���α׷� �ۼ�
//�� EX : 7�� 2�� �Է�->������ 3 / �������� 1�� ��µǸ� �ȴ�.

            int c; int d;
            cin >> c;
            cin >> d;
            cout << "c / d = " << c / d << endl;
            cout << "c % d = " << c % d << endl;









}