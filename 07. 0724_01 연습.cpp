#include<iostream>
#include<time.h>

using namespace std;


/*
����1.�Լ� �����ε��� Ȱ���� ĳ���� ��ų �����

ex)
��ų�̸��� �Է¹޾� ����ϴ� �Լ�
��ų �̸��̶� ������ ���� �Է¹޾� ��ų�� ����ϴ� �Լ�
��ų�̸�, ������, ũ��Ƽ�� Ȯ��, �ǰݰŸ�
*/


void skill();
void skill(string skillname2, int damage);

void main()
{
	skill();
	string skillname2;
	int damage = 0;
	skill(skillname2, damage);
}

void skill()
{
	string skillname;
		cin >> skillname;
		cout << "����� ��ų�� : " << skillname << endl;
		 
}
void skill(string skillname2, int damage)
{
	
	cin >> skillname2;
	cin >> damage;
	cout << "����� ��ų�� : " << skillname2 << endl;
	cout << "������ : " << damage << endl;
}