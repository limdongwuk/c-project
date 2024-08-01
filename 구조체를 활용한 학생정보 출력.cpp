#include <iostream>
#include <string>


using namespace std;

struct student
{
    string name;
    string sex;
    int age;

};

void studentcin(student& s);
void studentcout(student& s);
void addstudent(student& s);





void main()
{
    student s;
    studentcin(s);
    studentcout(s);
    addstudent(s);
    studentcout(s);
}

void studentcin(student& s)
{
    cout << "이름을 입력하세요" << endl;
    cin >> s.name;
    cout << "성별을 입력하세요" << endl;
    cin >> s.sex;
    cout << "나이를 입력하세요" << endl;
    cin >> s.age;
}

void studentcout(student& s)
{
    cout << "이름 : " << s.name << endl;
    cout << "성별 : " << s.sex << endl;
    cout << "나이 : " << s.age << endl;
}

void addstudent(student& s)
{
    cout << "추가하실 정보를 입력하세요" << endl;
    studentcin(s);
}