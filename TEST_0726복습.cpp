#include <iostream>
#include <string>
using namespace std;

void main()
{
	///*다음 코드에서 a와 b는 각각 얼마인가?
	//*/
	//int a = 32 >> 1;
	//int b = a >> 3;

	//cout << a << endl;
	//cout << b << endl;
	///*
	//a = 2^5 이고 비트연산자로 한칸옮기면 2^4가 되서 16임.
	//b는 16을 3칸옮기는건데 2^1이 되므로 2
	//*/


	///*
	//숫자가 주어지면 소수인지 아닌지 판별하는 프로그램을 작성하라
	//소수이면 yes아니면 no
	//*/
	//int number;
	//cout << "숫자를 입력하세요 : ";
	//cin >> number;
	//int count = 0;
	//for (int i = 2; i < number; i++)
	//{
	//	if (number % i == 0)
	//	{
	//		count++;
	//	}
	//	else
	//	{
	//		
	//	}
	//}
	//if(count >0)
	//{
	//	cout << number << "는 소수가 아닙니다";
	//}
	//if (count == 0)
	//{
	//	cout << number << "는 소수입니다.";
	//}

	///*2개의 정수를 입력받아 그 구간에 속한 모든 수의 합 구하기
	//(단, 입력받은 줄중에 작은 정수를 먼저 입력한다고 가정한다.)
	//*/

	//int num1;
	//int num2;
	//cin >> num1;
	//cin >> num2;

	//int result = 0;
	//for (int i = num1; num1 <= num2; num1++)
	//{
	//	result += num1;
	//}
	//cout << result;
	///*
	//배열에 1~10까지 데이터가 저장되어있다고 가정할때 짝수만 출력하는 프로그램을 작성해라
	//*/
	//int arr[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	arr[i] = i + 1;
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr[2 * i + 1] << " ";
	//}

	///*
	//10진수를 2진수로 바꾸기
	//*/
	//int Num;
	//cin >> Num;
	//int i = 0;
	//int resulT[32];
	//int count = 0;
	//while (Num > 0)
	//{
	//	i++;
	//	resulT[i] = Num % 2;
	//	Num /= 2;
	//	count++;
	//	
	//	
	//}
	//for (i = count; i>0; i--)
	//{
	//	
	//	cout << resulT[i] << " ";
	//}
	
	///*
	//getline
	//문자열 단어 갯수 세기*/
	//
	//cout << "문자를 입력하세요" << endl;
	//string str;
	//getline(cin, str);
	//int count1=0;

	//for (int i = 0; i < str.length(); i++)
	//{
	//	if (' ' == str[i])
	//	{
	//		count1++;
	//	}
	//}
	//cout << "단위의 갯수는 : " << count1 << " 개 입니다" << endl;


	/*다음과 같은 배열이 존재한다고 가정할때 공통 항목을 찾는 프로그램을 작성하기
	*/

int arr1[] = { 1, 5, 5, 10 };
int arr2[] = { 3, 4, 5, 5, 10 };
int arr3[] = { 5, 5, 10, 20 };
int arrc[5];
int count = 0;

for (int i = 0; i < 4; i++)
{
	for(int j =0; j <5; j++)
		if (arr1[i] == arr2[j])
		{
			arrc[count] = arr1[i];
	}
}




}