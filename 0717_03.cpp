#include <iostream>
#include <time.h>

using namespace std;

/*
����3.���� ���� ���
- 1 ~5������ ���� ����

- 6 ~19������ ���� ����

- 23 ~189������ ���� ����
�� ����� �ɶ� �ּҿ� �ִ밪�� ����ؾ� �Ѵ�.
*/
void main()
{

	srand(time(NULL));

	int numR;

	// 1 ~ 5������ ���� ����
	numR = rand() % 5;
	cout << numR + 1 << endl;

	// 6 ~ 19������ ���� ����
	numR = rand() % 14;
	cout << numR + 6 << endl;

	// 23 ~ 189������ ���� ����
	numR = rand() % 167;
	cout << numR + 23 << endl;
}