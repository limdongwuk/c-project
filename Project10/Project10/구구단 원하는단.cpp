#include <iostream>
using namespace std;

void main()
{
    ////    �迭 Ȱ���ϱ�
    ////     ��ǲ�� �޾Ƽ� �Է¹��� ������ ������ ��� ����� �迭�� �����ϰ� ����ϱ�


    {
        int number;
        cout << "1~9 �� �����Է��ϼ���" << endl;

        cin >> number;
        while (number < 1 || number > 9)
        {
            cout << "�ٽ� �Է��ϼ���" << endl;
            cin >> number;
        }

        int gop[9];

        for (int i = 0; i < 9; i++)
        {
            gop[i] = i + 1;
            cout << number << " * " << (gop[i]) << " = " << number * (gop[i]) << endl;

        }
    }

    //2. ���� ǥ���� ���� �հ� ������, ������ ���� ���ض�.
    ////    /*
    ////    90 78 77 66 55
    ////    90 78 77 66 55
    ////    90 78 77 66 55
    ////    90 78 77 66 55
    ////    
    ////    */

   
    int arr[4][5];
    int sum=0;
    int wsum = 0;
    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {
      
        for (int j = 0; j < 5; j++)
        {
            int number;
            number = rand() % 99 + 1;
            arr[i][j] = number;
            sum += arr[i][j];
            cout << arr[i][j] << " ";
            
            
        }
        cout << endl;
        

    }
    for (int i = 0; i < 4; i++)
    {
        wsum = 0;
        for (int j = 0; j < 5; j++)
        {
            wsum += arr[i][j];
            
        }
        cout << "�迭 ������ ��" << i + 1 << " = " << wsum << endl;
    }
    cout << "�迭 ��ü�� �� = " << sum << endl;
    
   


}