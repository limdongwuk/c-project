#include <iostream>
using namespace std;
/*
값에 의한 전달 ->CallByValue
함수에 인수를 전달할때 인수의 값이 복사되어 함수의 매개변수로 전달.
함수 내부에서 매개변수를 변경하더라도, 호출한 함수의 실제 인수는 변하지 않는다.

*/
void Value(int n);



//참조에 의한 호출
//함수 호출시 인수로 변수의 주소를 전달하는 방식
//함수가 매개변수로 받은 참조를 통해 실제 인수의 값을 직접 수정가능
//함수 내부에서 매개변수의 값을 변경하면 호출한 함수의 실제 인수도 변경
//값을 복사하는 대신 주소를 전달.->메모리와 성능효율이 좋다.
//구조체나..클래스나...기타 등등
void Address(int* n); 


//별명을 만들어주고 함수내부에서 변수 참조를 통해 직접 값을 수정가능
// 메모리 주소가 동일하다.
//위보다 아래가 안전
void Reference(int& n);


void Swap(int a, int b);
void SwapAddress(int* a, int* b);
void SwapReference(int& a, int& b);
void main()
{
#pragma region 배열과 포인터
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << &arr[i] << endl;
	}
	//배열과 포인터의 관계
	//포인터로도 배열 원소에 접근이 가능함!
	//즉, 배열의 시작부분을 가리키는 포인터를 정의하고
	//포인터에 1을 더하면 그 다음 원소를 카리키고
	//2를 더하면 그 다음다음 원소를 가리키게 된다.

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;//정수형 포인터
	int i;
	//parr포인터를 배열의 첫번째 요소의 주소를 저장
	parr = &arr1[0];
	for (i = 0; i < 10; i++)
	{
		cout << "arr1의 주소" << &arr1[i] << endl;
		cout << "parr의 값 : " << (parr + i) << endl;
	}
 #pragma endregion

	int num = 30;
	Value(num);
	cout << "num의 값 : " << num << endl;
	cout << "num의 주소값 : " << &num << endl;



	cout << "======================" << endl;
	int num1 = 30;
	Address(&num1);
	cout << "num1의 값 : " << num1 << endl;
	cout << "num1의 주소값 : " << &num1 << endl;
	cout << "======================" << endl;

	void Address(int* n)
	{
		*n = 10;
		cout << "n의 값 : " << n << endl;
		cout << "n의 주소값 : " << &n << endl;
	}

	int num2 = 30; //num2의 주소가 
	Reference(num2);
	cout << "num2의 값 : " << num2 << endl;
	cout << "num2의 주소값 : " << &num2 << endl;

	void Reference(int& n)
	{
		n = 10;
		cout << "n의 값 : " << n << endl;
		cout << "n의 주소값 : " << &n << endl;
	}
	
	int num3 = 10;
	int num4 = 20;

	cout << "스왑전 데이터" << num3 << " , " << num4 << endl;
	Swap(num3, num4);
	cout << "스왑후 데이터" << num3 << " , " << num4 << endl; //복사 형태라 값이 안바뀜

	int swapAddNum1 = 10;
	int swapAddNum2 = 20;
	cout << "스왑전 데이터" << swapAddNum1 << " , " << swapAddNum2 << endl;
	SwapAddress(&swapAddNum1, &swapAddNum2);
	cout << "스왑후 데이터" << swapAddNum1 << " , " << swapAddNum2 << endl;

	cout << "스왑전 데이터" << swapAddNum1 << " , " << swapAddNum2 << endl;
	SwapReference(swapAddNum1, swapAddNum2);
	cout << "스왑후 데이터" << swapAddNum1 << " , " << swapAddNum2 << endl;

	//void Pointer
	//자료형이 없는 포인터 변수
	//자료형에 제약을 받지 않고 어떤 자료형의 주소든 저장가능
		//값을 참조하려면 강제형변환해야한다.

	void* vp = nullptr;
	int c = 3;
	double d = 3.1;


	int a = 1;
	int* p = &a;
	*p = 3;

	//vp = &c;
	//*vp = 1; //데이터 타입이 없어서 안됨(우리가 알고 있는 방법으로는 불가능)
	//(자료형*)을 붙임으로써 가능하게 함 : 강제 형변환
	//*(int*)vp = 5;
	//cout << *(int*)vp << endl;

	/*과제
정적할당과 동적할당의 차이점 조사해서 기록하세요.
메모리 영역에대해서도 알게될것임(같이 공부할 것)

프로그램이 실행되는 동안 필요한 만큼만 메모리를 할당하는 녀석 - 동적할당(메모리를 빌렸으니 메모리 해제(반납)을 해야함, 안하면 메모리 누수 발생)

 c -> malloc(메모리 얼로케이트)
		free(메모리 해제법)
 c++ -> new
		delete(메모리 해제법)

*/

//int* ptr = (int*)malloc(sizeof(int) * 10); //(10개의 인티저를 저장할수 있는 메모리를 할당하는 것)
	int* ptr = new int(10); //인티저형 변수하나를 동적할당하고 10으로 초기화하겠다
	delete ptr;
	int* array = new int[5]; //5개의 int를 저장할 수 있는 배열을 할당

	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 2;
	}
	delete[] array;
	array = nullptr; //(메모리 해제한다음에 널포인터로 지정 예방법중 하나)

}

void Value(int n)
{
	n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소값 : " << &n << endl;
}

void Address(int* n)
{
	*n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소값 : " << &n << endl;
 }

void Reference(int& n)
{
	n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소값 : " << &n << endl;
}

//아래와 같은 형태는 전달이 아니라 복사의 형태
//num1, num2에 각각 저장된 10,20이 복사
//swap 내부에서만 값 변경되고 메인함수에 있는 num1, num2는 전혀 영향을 받지 않음
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()함수 내부의 값 : ";
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




/*과제
1.정적할당과 동적할당의 차이점
2.클래스란 무엇인가용?
무작위로 발표시킴

3.구조체를 활용한 학생정보 출력하기
ㄴ학생정보를 출력하는 함수
ㄴ학생정보를 추가하는 함수
 복사말고 참조방식으로 할것.

*/