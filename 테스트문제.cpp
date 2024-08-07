
#include <iostream>
using namespace std;

int main()
{
	//int num;
	//int sum = 0;
	//int i = 0;
	//
	//cin >> num;
	//
	//while (num > sum)
	//{
	//	++i;
	//		sum += i;
	//		
	//
	//}
	//cout << i << endl;
	
	/*int num1;
	int num2;
	int num3;

	cin >> num1;
	cin >> num2;
	cin >> num3;
	if (num1 > num2 && num2 > num3)
	{
		cout << num3<<" " << num2 << " " << num1 << endl;
	}
	else if (num1 > num3 && num3 > num2)
	{
		cout << num2 << " " << num3 << " " << num1 << endl;
	}
	else if (num2 > num1 && num3 < num1)
	{
		cout << num3 << " " << num1 << " " << num2<< endl;
	}

	else if (num2 > num3 && num3 >num1)
	{
		cout << num1 << " " << num3 << " " << num2 << endl;
	}
	else if (num3 > num1 && num1 > num2)
	{
		cout << num2 << " " << num1 << " " << num3 << endl;
	}
	else if (num3 > num2 && num2 > num1)
	{
		cout << num1 << " " << num2 << " " << num3 << endl;
	}

	else if (num1 == num2&&num2 > num3)
	{
		cout << num3 << " " << num1 << " " << num2 << endl;
	}
	else if (num1 == num2&&num2 < num3)
	{
		cout << num2 << " " << num1 << " " << num3 << endl;
	}

	else if (num1 == num3&& num3 > num2)
	{
		cout << num2 << " " << num1 << " " << num3 << endl;
	}
	else if (num1 == num3 && num3 < num2)
	{
		cout << num3 << " " << num1 << " " << num2 << endl;
	}

	else if (num2 == num3&& num3 > num1)
	{
		cout << num1 << " " << num3 << " " << num3 << endl;
	}
	else if (num2 == num3 && num3 < num1)
	{
		cout << num3 << " " << num2 << " " << num1 << endl;
	}
	else if (num2 == num3&& num3 ==num1)
	{
		cout << num3 << " " << num2 << " " << num1 << endl;
	}*/

	//int day = 1;
	//int a;
	//int b;
	//int c;
	//
	//cin >> a; 
	//cin >> b; 
	//cin >> c;
	//while (day % a != 0 || day % b != 0 || day % c != 0)
	//{
	//	day++;
	//}
	//cout << day << endl;
	int n;
	cin >> n;
	
	
	for (int i = 0; i < (n / 2) + 1; ++i)
	{

		for (int j = 0; j < (n - (2 * i + 1)) / 2; ++j)
		{
			std::cout << ' ';
		}

		for (int k = 0; k < 2 * i + 1; ++k)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}

