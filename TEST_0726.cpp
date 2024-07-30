#include <iostream>
#include <string>
using namespace std;

/*
문제1.
1
2
3
2
1

*/

// 테스트용 커밋


void main()
{
    /*구현문제
    다음 코드에서 a와 b는 각각 얼마인가?*/
    
   // int a = 32 >> 1;
   // int b = a >> 3;
   // 
   // std::cout << a << std::endl;
   // std::cout << b << std::endl;

   // 

   //  /*숫자가 주어지면 소수인지 아닌지 판별하는 프로그램을 작성하라.
   //  소수이면 yes 아니면 no로 출력*/
   // 
   // int i = 2;
   // int number;
   // cin >> number;

   // for (i = 2; i<number; i++)
   // {
   //     
   //     if (number % i == 0)
   //     {

   //         std::cout << "소수가 아닙니다" << endl;
   //         
   //     }
   //     else
   //     {
   //         std::cout << "소수입니다" << endl;
   //         
   //     }
   // }

   // 
   //    /* int num, i, cnt = 0;
   //     std::cout << "숫자를 입력 하세요";
   //     std::cin >> num;
   //     for (i = 2; i < num; i++)
   //     {
   //         if (num % i == 0)
   //         {
   //             cnt++;
   //         }
   //     }

   //     if (cnt == 0)
   //         cout << "소수이다" << endl;
   //     else
   //         cout << "소수가 아니다" << endl;

   //     return;
   // */
   // 
   // /* 2개의 정수를 입력받아 그 구간에 속한 모든 수의 합 구하기*/

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
   // cout << " 모든수의 합 = " << result << endl;
   //        
   //     


   ///* 배열에 1~10까지 데이터가 저장되어 있다고 할때 짝수만 출력하는 프로그램을 작성해라*/
   // int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
   // for (i = 0; i < 5; i++)
   //     cout << arr[2 * i + 1] << endl;
   //     


   //// 10진수를 2진수로 바꾸기
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

    //문자열 단어 갯수 세기
    {
        cout << "문자열을 입력하세요: ";
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
        cout << "단어 갯수는" << count + 1 << endl;
    }
    
                   
    //다음과 같은 배열이 존재한다고 가정할때 공통항목을 찾는 프로그램 작성
    
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


