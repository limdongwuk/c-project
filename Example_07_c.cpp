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
    StringLength();//string s;(문자열만 다룰 수 있게 해주는 녀석, c++이라서 문자열끝에 널문자 들어가지 않음)
    StringCopy();
    StringConnection();
    StringCompare();
    StringSubstr();
    StringReplace();
    StringErase();
}




void StringLength() //문자열 길이
{
    string str = "Hello world";
    cout << "문자열의 길이" << str.length() << endl;
}

void StringCopy()// 대입연산자로 복사하는것
{
    string str = "Hello world";
    string dest = str;
    cout << "복사된 문자열 : " << dest << endl;
}

void StringCopy(const string src) //같은 복사인데 함수 오버로딩 // 이유 불문 const 붙일 것(안정성 보장)
{
    string dest = src;
    cout << "복사된 문자열 : " << dest << endl;
}

void StringConnection()
{
    string str1 = "Hello, ";
    string str2 = "world";
    str1 += str2; //문자열을 연결 / 되는이유 스트링클래스 내부에서 연산자가 오버로딩이 되어있음
    cout << "연결된 문자열 : " << str1 << endl;
}

void StringCompare()
{
    string str1 = "Hello";
    string str2 = "Hello";
    string str3 = "world";

    if (str1 == str2)cout << "문자열이 같다" << endl;
    if (str1 < str3)cout << "str1이 str3보다 앞에 있음" << endl;
}

void StringSubstr()
{
    string str = "Hello, World";
    string subStr = str.substr(7, 5);  // 원복문자열에 특정 위치(7)에서부터 지정한 길이(5)만큼 대체
    cout << "Substr문자열 : " << subStr << endl;
}

void StringReplace() // 문자열내 특정 위치에서 지정된 문자를 새 문자열로 대체 해준다.
{
    string str = "Hello, World";
    str.replace(7, 5, "C++");
    cout << "Replace문자열 : " << str << endl;

}

void StringErase()
{
    string str = "Hello, World";
    str.erase(5,7);
    cout << "erase 문자열 : " << str << endl;
}
