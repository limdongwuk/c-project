#include <iostream>
#include <string>
using namespace std;

/*
����1.
1
2
3
2
1

*/

// �׽�Ʈ�� Ŀ��


void main()
{
    /*��������
    ���� �ڵ忡�� a�� b�� ���� ���ΰ�?*/
    
   // int a = 32 >> 1;
   // int b = a >> 3;
   // 
   // std::cout << a << std::endl;
   // std::cout << b << std::endl;

   // 

   //  /*���ڰ� �־����� �Ҽ����� �ƴ��� �Ǻ��ϴ� ���α׷��� �ۼ��϶�.
   //  �Ҽ��̸� yes �ƴϸ� no�� ���*/
   // 
   // int i = 2;
   // int number;
   // cin >> number;

   // for (i = 2; i<number; i++)
   // {
   //     
   //     if (number % i == 0)
   //     {

   //         std::cout << "�Ҽ��� �ƴմϴ�" << endl;
   //         
   //     }
   //     else
   //     {
   //         std::cout << "�Ҽ��Դϴ�" << endl;
   //         
   //     }
   // }

   // 
   //    /* int num, i, cnt = 0;
   //     std::cout << "���ڸ� �Է� �ϼ���";
   //     std::cin >> num;
   //     for (i = 2; i < num; i++)
   //     {
   //         if (num % i == 0)
   //         {
   //             cnt++;
   //         }
   //     }

   //     if (cnt == 0)
   //         cout << "�Ҽ��̴�" << endl;
   //     else
   //         cout << "�Ҽ��� �ƴϴ�" << endl;

   //     return;
   // */
   // 
   // /* 2���� ������ �Է¹޾� �� ������ ���� ��� ���� �� ���ϱ�*/

   // int number1;
   //     int number2;
   // cin >> number1;
   // cin >> number2;
   // 
   // int n;
   // int result = 0;
   // for (n = number1; number1 <= number2; ++number1)

   // {
   //     result += number1; 
   // }
   // cout << " ������ �� = " << result << endl;
   //        
   //     


   ///* �迭�� 1~10���� �����Ͱ� ����Ǿ� �ִٰ� �Ҷ� ¦���� ����ϴ� ���α׷��� �ۼ��ض�*/
   // int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
   // for (i = 0; i < 5; i++)
   //     cout << arr[2 * i + 1] << endl;
   //     


   //// 10������ 2������ �ٲٱ�
   // {
   //     int number;
   //     cin >> number;  //34

   //     int arr1[8] = {};
   //     int n = 0;
   //     while (number > 0)
   //     {
   //         arr1[n] = number % 2; //arr[0] = 0 arr[1] = 1
   //         number /= 2;  //number =17  number 8
   //         
   //         n++; // 1 //2
   //     }

   //     for (int a = n -1; a >= 0; a--)
   //     {
   //         cout << arr1[n];
   //     }
   // }

    //���ڿ� �ܾ� ���� ����
    {
        cout << "���ڿ��� �Է��ϼ���: ";
        string MyStr;
        getline(cin, MyStr);

        cout << MyStr << endl;
        int count = 0;
        for (int i = 0; i < MyStr.length(); i++)
        {
            if (' ' == MyStr[i])
            {
                
                count++;
            }
        }
        cout << "�ܾ� ������" << count + 1 << endl;
    }
    
                   
    //������ ���� �迭�� �����Ѵٰ� �����Ҷ� �����׸��� ã�� ���α׷� �ۼ�
    
    {
        int arr1[] = { 1,5,5,10 };
        int arr2[] = { 3,4,5,5,10 };
        int arr3[] = { 5,5,10,20 };
        int result[5] = {};
        int result2[10] = {};
        int count = 0;
        int count2 = 0;
        for (int i = 0; i < 4; i++)
        {
            
            for (int j = 0; j < 5; j++)
            {
                
                if (arr1[i] == arr2[j])
                {
                    
                    result[count] = arr1[i];
                    count++;
                }
            }
        }
     
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (result[i] == arr3[j])
                {
                    result2[count2] = arr3[j];
                    count2++;
                }
            }
        }
        for (int i = 0; i < count2; i++)
        {
            cout << result2[i] << " ";
        }
    }
 
    





}


