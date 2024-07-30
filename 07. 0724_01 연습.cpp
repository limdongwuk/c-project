#include<iostream>
#include<time.h>

using namespace std;


/*
과제1.함수 오버로딩을 활용한 캐릭터 스킬 만들기

ex)
스킬이름만 입력받아 사용하는 함수
스킬 이름이랑 데미지 값을 입력받아 스킬을 사용하는 함수
스킬이름, 데미지, 크리티컬 확률, 피격거리
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
		cout << "사용할 스킬명 : " << skillname << endl;
		 
}
void skill(string skillname2, int damage)
{
	
	cin >> skillname2;
	cin >> damage;
	cout << "사용할 스킬명 : " << skillname2 << endl;
	cout << "데미지 : " << damage << endl;
}