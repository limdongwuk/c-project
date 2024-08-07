#include <iostream>
using namespace std;


/*(면접질문으로 나올 수 있음)
복사 생성자
- 동일한 클래스의 객체를 복사해서 생성할때 사용하는 생성자
 
 얕은 복사
 -객체를 복사할때 객채의 모든 멤버변수를 단순히 복사.
 만약 멤버변수가 포인터인 경우라면 포인터의 주소값만 복사-> 같은 메모리 영역을 가리키게 된다.
 ->만약 한 객체에서 해당 메모리를 수정하면 영향을 받음
 ->두 객체가 같은 메모리 주소를 가리키기 때문에 한 객체가 소멸되면서 메모리를 해제하면 
 다른 객체는 더이상 유효하지 않은 메모리를 가리키게 되어 문제가 발생됨.
 
 깊은 복사
 - 객체가 동적메모리를 사용할때 필요함.
 - 원복객체가 동일한 값을 가지는 새로운 메모리를 할당하여 복사하는 것을 의미함.
 ->다른 메모미를 사용하게 되므로 서로 영향을 주지 않는다.
 */



class Person
{
public:
    Person(int a) : age(a) {};
    //컴파일러가 생성하는 기본복사 생성자 형태
    // 없어도 컴파일러가 휵~하고 삽입한다.
    //복사 생성자
    Person(const Person& other) : age(other.age) {

    }
public:
    void SetAge(int age) { this->age = age; }
    int GetAge() { return age; }
private:
    int age;

    int* data; 
};
//깊은복사

class myarr {

public:
    int* data;
    int size;
    myarr(int size);
    //깊은 복사
    myarr(const myarr& other);
    ~myarr();
};

//얕은복사
class MyArray {
private:
    int* data;
    int size;

public :
    MyArray(int size):size(size), data(new int[size]){}
    ~MyArray()
    {
        //delete[] data;
    }


    void SetValue(int index, int value) { data[index] = value; }
    int GetValue(int index) { return data[index]; }
};

int main()
{
    Person kim(21);
    Person clone(kim);//복사생성자 호출

    MyArray arr1(10);  //arr1이라는 객체를 생성하면 기본생성자를 가져온다 기본생성자에 10을 대입하면 size는 10으로 초기화 되고 data라는 포인터는 int형을 지시하는 10개의 데이터배열을 할당받고 그 주소를 가리킨다.
    arr1.SetValue(0, 42);

    MyArray arr2(arr1);

    cout << "arr1 값 : " << arr1.GetValue(0) << endl;
    cout << "arr2 값 : " << arr2.GetValue(0) << endl;

    arr1.SetValue(0, 100);
    cout << "arr1 값(변경후) : " << arr1.GetValue(0) << endl;
    cout << "arr2 값(arr1 변경된 후) : " << arr2.GetValue(0) << endl;


    //==================깊은복사================
    myarr arr(10);
    arr.data[0] = 1;
    cout << arr.data[0] << endl;
    
    myarr clone1 = arr;

    arr.data[0] = 2;
    cout << clone1.data[0] << endl;
}

myarr::myarr(int size)
{
    this->size = size;
    data = new int[size];//생성자에서 동적메모리 할당
}

//복사 생성자 정의(깊은복사)
myarr::myarr(const myarr& other)
{
    
    this->size = other.size;
    this->data = new int[other.size]; //새로운 공간 할당
    for (int i = 0; i < size; i++)
    {
        this->data[i] = other.data[i]; //data가 새로만들어진 거고 other.data가 원본임 여기서는 왜냐면 복사생성자 기준이기 때문에
    }
}

myarr::~myarr()
{
    if (data != nullptr)delete[] this->data;
    data = nullptr;
}
