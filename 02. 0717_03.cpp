#include <iostream>
#include <time.h>

using namespace std;

/*
과제3.랜덤 숫자 담기
- 1 ~5까지의 랜덤 숫자

- 6 ~19까지의 랜덤 숫자

- 23 ~189까지의 랜덤 숫자
ㄴ 출력이 될때 최소와 최대값을 명시해야 한다.
*/
void main()
{

	srand(time(NULL));

	int numR;

	// 1 ~ 5까지의 랜덤 숫자
	numR = rand() % 5;
	cout << numR + 1 << endl;

	// 6 ~ 19까지의 랜덤 숫자
	numR = rand() % 14;
	cout << numR + 6 << endl;

	// 23 ~ 189까지의 랜덤 숫자
	numR = rand() % 167;
	cout << numR + 23 << endl;
}