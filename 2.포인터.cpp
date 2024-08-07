#include <iostream>
using namespace std;
/*
���� ���� ���� ->CallByValue
�Լ��� �μ��� �����Ҷ� �μ��� ���� ����Ǿ� �Լ��� �Ű������� ����.
�Լ� ���ο��� �Ű������� �����ϴ���, ȣ���� �Լ��� ���� �μ��� ������ �ʴ´�.

*/
void Value(int n);



//������ ���� ȣ��
//�Լ� ȣ��� �μ��� ������ �ּҸ� �����ϴ� ���
//�Լ��� �Ű������� ���� ������ ���� ���� �μ��� ���� ���� ��������
//�Լ� ���ο��� �Ű������� ���� �����ϸ� ȣ���� �Լ��� ���� �μ��� ����
//���� �����ϴ� ��� �ּҸ� ����.->�޸𸮿� ����ȿ���� ����.
//����ü��..Ŭ������...��Ÿ ���
void Address(int* n); 


//������ ������ְ� �Լ����ο��� ���� ������ ���� ���� ���� ��������
// �޸� �ּҰ� �����ϴ�.
//������ �Ʒ��� ����
void Reference(int& n);


void Swap(int a, int b);
void SwapAddress(int* a, int* b);
void SwapReference(int& a, int& b);
void main()
{
#pragma region �迭�� ������
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << &arr[i] << endl;
	}
	//�迭�� �������� ����
	//�����ͷε� �迭 ���ҿ� ������ ������!
	//��, �迭�� ���ۺκ��� ����Ű�� �����͸� �����ϰ�
	//�����Ϳ� 1�� ���ϸ� �� ���� ���Ҹ� ī��Ű��
	//2�� ���ϸ� �� �������� ���Ҹ� ����Ű�� �ȴ�.

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;//������ ������
	int i;
	//parr�����͸� �迭�� ù��° ����� �ּҸ� ����
	parr = &arr1[0];
	for (i = 0; i < 10; i++)
	{
		cout << "arr1�� �ּ�" << &arr1[i] << endl;
		cout << "parr�� �� : " << (parr + i) << endl;
	}
 #pragma endregion

	int num = 30;
	Value(num);
	cout << "num�� �� : " << num << endl;
	cout << "num�� �ּҰ� : " << &num << endl;



	cout << "======================" << endl;
	int num1 = 30;
	Address(&num1);
	cout << "num1�� �� : " << num1 << endl;
	cout << "num1�� �ּҰ� : " << &num1 << endl;
	cout << "======================" << endl;

	void Address(int* n)
	{
		*n = 10;
		cout << "n�� �� : " << n << endl;
		cout << "n�� �ּҰ� : " << &n << endl;
	}

	int num2 = 30; //num2�� �ּҰ� 
	Reference(num2);
	cout << "num2�� �� : " << num2 << endl;
	cout << "num2�� �ּҰ� : " << &num2 << endl;

	void Reference(int& n)
	{
		n = 10;
		cout << "n�� �� : " << n << endl;
		cout << "n�� �ּҰ� : " << &n << endl;
	}
	
	int num3 = 10;
	int num4 = 20;

	cout << "������ ������" << num3 << " , " << num4 << endl;
	Swap(num3, num4);
	cout << "������ ������" << num3 << " , " << num4 << endl; //���� ���¶� ���� �ȹٲ�

	int swapAddNum1 = 10;
	int swapAddNum2 = 20;
	cout << "������ ������" << swapAddNum1 << " , " << swapAddNum2 << endl;
	SwapAddress(&swapAddNum1, &swapAddNum2);
	cout << "������ ������" << swapAddNum1 << " , " << swapAddNum2 << endl;

	cout << "������ ������" << swapAddNum1 << " , " << swapAddNum2 << endl;
	SwapReference(swapAddNum1, swapAddNum2);
	cout << "������ ������" << swapAddNum1 << " , " << swapAddNum2 << endl;

	//void Pointer
	//�ڷ����� ���� ������ ����
	//�ڷ����� ������ ���� �ʰ� � �ڷ����� �ּҵ� ���尡��
		//���� �����Ϸ��� ��������ȯ�ؾ��Ѵ�.

	void* vp = nullptr;
	int c = 3;
	double d = 3.1;


	int a = 1;
	int* p = &a;
	*p = 3;

	//vp = &c;
	//*vp = 1; //������ Ÿ���� ��� �ȵ�(�츮�� �˰� �ִ� ������δ� �Ұ���)
	//(�ڷ���*)�� �������ν� �����ϰ� �� : ���� ����ȯ
	//*(int*)vp = 5;
	//cout << *(int*)vp << endl;

	/*����
�����Ҵ�� �����Ҵ��� ������ �����ؼ� ����ϼ���.
�޸� ���������ؼ��� �˰Եɰ���(���� ������ ��)

���α׷��� ����Ǵ� ���� �ʿ��� ��ŭ�� �޸𸮸� �Ҵ��ϴ� �༮ - �����Ҵ�(�޸𸮸� �������� �޸� ����(�ݳ�)�� �ؾ���, ���ϸ� �޸� ���� �߻�)

 c -> malloc(�޸� �������Ʈ)
		free(�޸� ������)
 c++ -> new
		delete(�޸� ������)

*/

//int* ptr = (int*)malloc(sizeof(int) * 10); //(10���� ��Ƽ���� �����Ҽ� �ִ� �޸𸮸� �Ҵ��ϴ� ��)
	int* ptr = new int(10); //��Ƽ���� �����ϳ��� �����Ҵ��ϰ� 10���� �ʱ�ȭ�ϰڴ�
	delete ptr;
	int* array = new int[5]; //5���� int�� ������ �� �ִ� �迭�� �Ҵ�

	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 2;
	}
	delete[] array;
	array = nullptr; //(�޸� �����Ѵ����� �������ͷ� ���� ������� �ϳ�)

}

void Value(int n)
{
	n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;
}

void Address(int* n)
{
	*n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;
 }

void Reference(int& n)
{
	n = 10;
	cout << "n�� �� : " << n << endl;
	cout << "n�� �ּҰ� : " << &n << endl;
}

//�Ʒ��� ���� ���´� ������ �ƴ϶� ������ ����
//num1, num2�� ���� ����� 10,20�� ����
//swap ���ο����� �� ����ǰ� �����Լ��� �ִ� num1, num2�� ���� ������ ���� ����
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()�Լ� ������ �� : ";
	cout << a << " , " << b << endl;
}

void SwapAddress(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SwapReference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}




/*����
1.�����Ҵ�� �����Ҵ��� ������
2.Ŭ������ �����ΰ���?
�������� ��ǥ��Ŵ

3.����ü�� Ȱ���� �л����� ����ϱ�
���л������� ����ϴ� �Լ�
���л������� �߰��ϴ� �Լ�
 ���縻�� ����������� �Ұ�.

*/