#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;


/*과제1.가위바위보 게임

- if문을 사용해서 만든다.
ㄴ 스위치 문은 사용 금지

- 게임의 진행 횟수는 총 5판
ㄴ 이후는 게임 종료

- 필수: 치트


※ 팁을 주자면 코드를 최대한 간결하게 해온게 좋을것이다.
*/

void main()
{
    int coin = 1;
    int com;
    int person;
    
    while (coin <= 5)
    {

        coin++;

        srand(time(NULL));

        com = rand() % 3 + 1;

        cout << "컴퓨터가낸것(1가위,2바위,3보) = " << com << endl;

        cin >> person;

        if (com == person)
        {
            cout << "무승부" << endl;
        }
        else if ((com + 1 == person) || (com - 2 == person))
        {
            cout << "승리" << endl;
        }
        else if (1 > person || person > 3)
        {
            cout << "1~3숫자만 입력해주세요" << endl;
        }
        else
        {
            cout << "패배" << endl;
        }
    }
}
   