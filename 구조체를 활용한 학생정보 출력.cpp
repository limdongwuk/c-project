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
    cout << "�̸��� �Է��ϼ���" << endl;
    cin >> s.name;
    cout << "������ �Է��ϼ���" << endl;
    cin >> s.sex;
    cout << "���̸� �Է��ϼ���" << endl;
    cin >> s.age;
}

void studentcout(student& s)
{
    cout << "�̸� : " << s.name << endl;
    cout << "���� : " << s.sex << endl;
    cout << "���� : " << s.age << endl;
}

void addstudent(student& s)
{
    cout << "�߰��Ͻ� ������ �Է��ϼ���" << endl;
    studentcin(s);
}