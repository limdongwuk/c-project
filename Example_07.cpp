#include<iostream>

using namespace std;


//���� ������
//?�� Ȱ�� : �տ� num1 > num2�� �³�? true �� �տ��� false�� �ڿ���
//�ڵ��� �������� ���̰� ������ ������ ǥ���ϴµ� �����ϰ� ����. ������ ���ǽĿ��� if�� �ϴ°� ������. ������ �����Ҽ���..

int main()
{
    int num1 = 2;
    int num2 = 3;

    int result;

    result = (num1 > num2) ? num1 : num2; 
    cout << result << endl;
    
    //3�׿����ڷ� ó���ϱ� ����� ����� ����
    int a = 5;
    int b = 10;
    int c = 15;
    int result2;
    if (a > b)
    {
        if (b < c)
        {
            result2 = a + b;
        }
        else
        {
            result2 = a - b;
        }
    }
    else
    {
        if(b>c)
        {
            result2 = a * b;
        }
        else
        {
            result2 = a / b;
        }
    }
    cout << "��� : " << result2 << endl;


    //3�� �����ڷ� �� if���� ó���� ���(��������)
    result2 = (a < b) ? ((b < c) ? a + b : a - b) : (b > c ? a * b : a / b);



}

