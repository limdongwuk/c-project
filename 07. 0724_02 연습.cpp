#include<iostream>
#include<time.h>

using namespace std;

//과제2. 사용자가 입력한 양의 정수의 각 자릿수의 합을 구하는 로직을 구현해라.
//ex) 예를 들어서..
//    18324 => 1 + 8 + 3 + 2 + 4 =18
//    3849 => 24
//    10으로 나눠서 나머지를 계속 보여주면 됨

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