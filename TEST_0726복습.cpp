#include <iostream>
#include <string>
using namespace std;

void main()
{
	///*���� �ڵ忡�� a�� b�� ���� ���ΰ�?
	//*/
	//int a = 32 >> 1;
	//int b = a >> 3;

	//cout << a << endl;
	//cout << b << endl;
	///*
	//a = 2^5 �̰� ��Ʈ�����ڷ� ��ĭ�ű�� 2^4�� �Ǽ� 16��.
	//b�� 16�� 3ĭ�ű�°ǵ� 2^1�� �ǹǷ� 2
	//*/


	///*
	//���ڰ� �־����� �Ҽ����� �ƴ��� �Ǻ��ϴ� ���α׷��� �ۼ��϶�
	//�Ҽ��̸� yes�ƴϸ� no
	//*/
	//int number;
	//cout << "���ڸ� �Է��ϼ��� : ";
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
	//	cout << number << "�� �Ҽ��� �ƴմϴ�";
	//}
	//if (count == 0)
	//{
	//	cout << number << "�� �Ҽ��Դϴ�.";
	//}

	///*2���� ������ �Է¹޾� �� ������ ���� ��� ���� �� ���ϱ�
	//(��, �Է¹��� ���߿� ���� ������ ���� �Է��Ѵٰ� �����Ѵ�.)
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
	//�迭�� 1~10���� �����Ͱ� ����Ǿ��ִٰ� �����Ҷ� ¦���� ����ϴ� ���α׷��� �ۼ��ض�
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
	//10������ 2������ �ٲٱ�
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
	//���ڿ� �ܾ� ���� ����*/
	//
	//cout << "���ڸ� �Է��ϼ���" << endl;
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
	//cout << "������ ������ : " << count1 << " �� �Դϴ�" << endl;


	/*������ ���� �迭�� �����Ѵٰ� �����Ҷ� ���� �׸��� ã�� ���α׷��� �ۼ��ϱ�
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