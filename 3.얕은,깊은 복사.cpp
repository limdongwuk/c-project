#include <iostream>
using namespace std;


/*(������������ ���� �� ����)
���� ������
- ������ Ŭ������ ��ü�� �����ؼ� �����Ҷ� ����ϴ� ������
 
 ���� ����
 -��ü�� �����Ҷ� ��ä�� ��� ��������� �ܼ��� ����.
 ���� ��������� �������� ����� �������� �ּҰ��� ����-> ���� �޸� ������ ����Ű�� �ȴ�.
 ->���� �� ��ü���� �ش� �޸𸮸� �����ϸ� ������ ����
 ->�� ��ü�� ���� �޸� �ּҸ� ����Ű�� ������ �� ��ü�� �Ҹ�Ǹ鼭 �޸𸮸� �����ϸ� 
 �ٸ� ��ü�� ���̻� ��ȿ���� ���� �޸𸮸� ����Ű�� �Ǿ� ������ �߻���.
 
 ���� ����
 - ��ü�� �����޸𸮸� ����Ҷ� �ʿ���.
 - ������ü�� ������ ���� ������ ���ο� �޸𸮸� �Ҵ��Ͽ� �����ϴ� ���� �ǹ���.
 ->�ٸ� �޸�̸� ����ϰ� �ǹǷ� ���� ������ ���� �ʴ´�.
 */



class Person
{
public:
    Person(int a) : age(a) {};
    //�����Ϸ��� �����ϴ� �⺻���� ������ ����
    // ��� �����Ϸ��� ��~�ϰ� �����Ѵ�.
    //���� ������
    Person(const Person& other) : age(other.age) {

    }
public:
    void SetAge(int age) { this->age = age; }
    int GetAge() { return age; }
private:
    int age;

    int* data; 
};
//��������

class myarr {

public:
    int* data;
    int size;
    myarr(int size);
    //���� ����
    myarr(const myarr& other);
    ~myarr();
};

//��������
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
    Person clone(kim);//��������� ȣ��

    MyArray arr1(10);  //arr1�̶�� ��ü�� �����ϸ� �⺻�����ڸ� �����´� �⺻�����ڿ� 10�� �����ϸ� size�� 10���� �ʱ�ȭ �ǰ� data��� �����ʹ� int���� �����ϴ� 10���� �����͹迭�� �Ҵ�ް� �� �ּҸ� ����Ų��.
    arr1.SetValue(0, 42);

    MyArray arr2(arr1);

    cout << "arr1 �� : " << arr1.GetValue(0) << endl;
    cout << "arr2 �� : " << arr2.GetValue(0) << endl;

    arr1.SetValue(0, 100);
    cout << "arr1 ��(������) : " << arr1.GetValue(0) << endl;
    cout << "arr2 ��(arr1 ����� ��) : " << arr2.GetValue(0) << endl;


    //==================��������================
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
    data = new int[size];//�����ڿ��� �����޸� �Ҵ�
}

//���� ������ ����(��������)
myarr::myarr(const myarr& other)
{
    
    this->size = other.size;
    this->data = new int[other.size]; //���ο� ���� �Ҵ�
    for (int i = 0; i < size; i++)
    {
        this->data[i] = other.data[i]; //data�� ���θ������ �Ű� other.data�� ������ ���⼭�� �ֳĸ� ��������� �����̱� ������
    }
}

myarr::~myarr()
{
    if (data != nullptr)delete[] this->data;
    data = nullptr;
}
