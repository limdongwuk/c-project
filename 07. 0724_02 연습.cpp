#include<iostream>
#include<time.h>

using namespace std;

//����2. ����ڰ� �Է��� ���� ������ �� �ڸ����� ���� ���ϴ� ������ �����ض�.
//ex) ���� ��..
//    18324 => 1 + 8 + 3 + 2 + 4 =18
//    3849 => 24
//    10���� ������ �������� ��� �����ָ� ��

void main()
{
	int number;
	cin >> number;
	int result=0;
	int result2 = 0;
	while (number / 10 > 0|| number %10 !=0)
	{
		result += number % 10;
		result2 = number % 10;
		number /= 10;
		
		cout << result2 << " ";
		

		
		
	}
	
	cout << result << " ";
}