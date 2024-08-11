#include <iostream>
using namespace std;

void main()
{
    ////    배열 활용하기
    ////     인풋을 받아서 입력받은 숫자의 구구단 계산 결과를 배열에 저장하고 출력하기


    {
        int number;
        cout << "1~9 중 숫자입력하세요" << endl;

        cin >> number;
        while (number < 1 || number > 9)
        {
            cout << "다시 입력하세요" << endl;
            cin >> number;
        }

        int gop[9];

        for (int i = 0; i < 9; i++)
        {
            gop[i] = i + 1;
            cout << number << " * " << (gop[i]) << " = " << number * (gop[i]) << endl;

        }
    }

    //2. 다음 표에서 가로 합과 세로합, 모든수의 합을 구해라.
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
        cout << "배열 가로의 합" << i + 1 << " = " << wsum << endl;
    }
    cout << "배열 전체의 합 = " << sum << endl;
    
   


}