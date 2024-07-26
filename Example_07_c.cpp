#include<iostream>

using namespace std;


//String Class


void StringLength();
void StringCopy();
void StringCopy(string src);
void StringConnection();
void StringCompare();
void StringSubstr();
void StringReplace();
void StringErase();

int main()
{
    StringLength();//string s;(���ڿ��� �ٷ� �� �ְ� ���ִ� �༮, c++�̶� ���ڿ����� �ι��� ���� ����)
    StringCopy();
    StringConnection();
    StringCompare();
    StringSubstr();
    StringReplace();
    StringErase();
}




void StringLength() //���ڿ� ����
{
    string str = "Hello world";
    cout << "���ڿ��� ����" << str.length() << endl;
}

void StringCopy()// ���Կ����ڷ� �����ϴ°�
{
    string str = "Hello world";
    string dest = str;
    cout << "����� ���ڿ� : " << dest << endl;
}

void StringCopy(const string src) //���� �����ε� �Լ� �����ε� // ���� �ҹ� const ���� ��(������ ����)
{
    string dest = src;
    cout << "����� ���ڿ� : " << dest << endl;
}

void StringConnection()
{
    string str1 = "Hello, ";
    string str2 = "world";
    str1 += str2; //���ڿ��� ���� / �Ǵ����� ��Ʈ��Ŭ���� ���ο��� �����ڰ� �����ε��� �Ǿ�����
    cout << "����� ���ڿ� : " << str1 << endl;
}

void StringCompare()
{
    string str1 = "Hello";
    string str2 = "Hello";
    string str3 = "world";

    if (str1 == str2)cout << "���ڿ��� ����" << endl;
    if (str1 < str3)cout << "str1�� str3���� �տ� ����" << endl;
}

void StringSubstr()
{
    string str = "Hello, World";
    string subStr = str.substr(7, 5);  // �������ڿ��� Ư�� ��ġ(7)�������� ������ ����(5)��ŭ ��ü
    cout << "Substr���ڿ� : " << subStr << endl;
}

void StringReplace() // ���ڿ��� Ư�� ��ġ���� ������ ���ڸ� �� ���ڿ��� ��ü ���ش�.
{
    string str = "Hello, World";
    str.replace(7, 5, "C++");
    cout << "Replace���ڿ� : " << str << endl;

}

void StringErase()
{
    string str = "Hello, World";
    str.erase(5,7);
    cout << "erase ���ڿ� : " << str << endl;
}
