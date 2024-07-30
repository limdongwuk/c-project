#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
void main()
{
    /*
       과제2. 일수 출력기
         - if문과 switch문 중에 본인이 판단해 효율적인 것을 선택해서 만든다.
         - 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ??일 인지 출력

         ex: 4를 입력시 -> 4월은 30일까지 있습니다. -> 다시 입력 커멘드 활성화

          - 1월부터 12월까지 확인이 가능해야 하고 이외의 숫자는 예외처리를 진행한다.
          - 총 5번을 입력하면 프로그램 종료


       */

    int c = 1;
    int j;
    while (c <= 5)
    {
        ++c;

        cout << "원하시는 달의 숫자를 입력하세요" << endl;
      
        cin >> j;

        if (((j % 2 == 1) && (0 < j && j < 9)) || ((j % 2 == 0) && (7 < j && j < 13)))
        {
            cout << j << "월은 31일까지 있습니다." << endl;
        }
        else if (((j % 2 == 0) && (0 < j && j < 7) && (j != 2)) || ((j % 2 == 1) && (8 < j && j < 13)))
        {
            cout << j << "월은 30일까지 있습니다." << endl;
        }
        else if (j == 2)
        {
            cout << j << "월은 29일까지 있습니다." << endl;
        }
        else if ((1 > j) || (j > 12))
        {
            cout << "1월부터 12월까지만 입력하세요." << endl;
        }
    }
}

   /* switch (j)
    {
    case 1:
        cout << "1월은 31일까지 있습니다." << endl;
        break;

    case 2:
        cout << "2월은 29까지 있습니다." << endl;
        break;

    case 3:
        cout << "3월은 31까지 있습니다." << endl;
        break;

    case 4:
        cout << "4월은 30까지 있습니다." << endl;
        break;

    case 5:
        cout << "5월은 31까지 있습니다." << endl;
        break;

    case 6:
        cout << "6월은 30까지 있습니다." << endl;
        break;

    case 7:
        cout << "7월은 31까지 있습니다." << endl;
        break;

    case 8:
        cout << "8월은 31까지 있습니다." << endl;
        break;

    case 9:
        cout << "9월은 30까지 있습니다." << endl;
        break;

    case 10:
        cout << "10월은 31까지 있습니다." << endl;
        break;

    case 11:
        cout << "11월은 30까지 있습니다." << endl;
        break;

    case 12:
        cout << "12월은 31까지 있습니다." << endl;
        break;*/





    

