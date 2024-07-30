#include<iostream>

using namespace std;
/*
구조체 : Struct
 - 하나 이상의 변수를 그룹지에서 새로운 자료형을 정의

 <구조체 선언>
 struct 구조체 이름{구조체 내용};
  - 구조체 내용으로는 변수와 함수가 포함이 가능
  - 구조체에 포함된 변수를 멤버 변수, 포함된 함수를 멤버함수라고함.
*/

/*
자료형 재정의
자료형의 별칭을 생성하고 실제 자료형 이름 대신 사용
<typedef 자료형 별칭>

*/
//고전스타일
typedef int myIn_t; // 자료형 재정의는 _t로 끝내는걸 권장
typedef unsigned long long uint64_t; // 복잡한 자료형의 간소화 버전

//C++11 도입된 스타일
using Integer = int;



       

struct Student
{

    string name;
    int math;
    int english;
    int science;

        float Average()
    {
        return(math + english + science) / 3.0f;
    }

};


struct Point
{
    int x;
    int y;
    void print();
};

//생성자가 있는 구조체
//<구조체 생성자>
//반환형 없이 구조체의 이름의 함수를 구현하여 사용

struct Monster
{
    string name;
    int hp;
    int mp;

    Monster()
    {
        name = "몬스터";
        hp = 10;
        mp = 20;
    }

    Monster(string _name, int _hp, int _mp)
    {
        name = _name;
        hp = _hp;
        mp = _mp;
    }
};

struct family
{
    string relation;
    string name;
    int age;

    family()
    {
        relation = "부";
        name = "임정원";
    }
};

int main()
{  //구조체 변수
    
    /*family father;
    cout << relation << endl;
    cout;*/
    //Point p;
    //p.x = 10;
    //p.y = 20;

    //cout << "구조체 p.x의 값 : " << p.x << endl;
    //cout << "구조체 p.y의 값 : " << p.y << endl;
    ////P.Print();

    //Point p1 = { 50, 120 }; // 생성과 동시에 초기화

    Monster mons;
    Monster dragon = Monster("드래곤", 250, 100);
    Monster slime = Monster("슬라임", 10, 3);
    
    cout << mons.name << endl;
    cout << mons.hp << endl;
    cout << mons.mp << endl;

    cout << "====================================" << endl;
    cout << dragon.name << endl;
    cout << dragon.hp << endl;
    cout << dragon.mp << endl;

    cout << "====================================" << endl;

   
}

void Point::print()
{
    cout << " 포인트 구조체 멤버 함수임";
}

//지금 해볼 것.
//구조체를 활용해서 가족관계를 출력해보세요.



/*
카드게임 만들기
트럼프카드는 52장

예를 들어서 만약 다음과 같은 카드가 나왔다면(출력)
아래와 같이 보여지는 카드는 컴퓨터가 낸다고 가정함.
♧7(컴)  ♤8  ♡9(컴)
컴퓨터가 낸 숫자 두개 사이에 내가뽑은 카드의 숫자가 들어오면 승리(배팅액 *2)
컴퓨터가 낸 숫자와 한개라도 숫자가 같으면 무조건 짐(배팅액 만큼 소진)
범위안에 들어오지 않는다면 (배팅액 *2 차감)

조건)한번 사용한 카드는 버려야됨.(사용하지 않는것 뿐)
17판 돌리면 자동으로 끝나야함(3장의 카드를 한턴마다 소비)

♧7가 나왔다면 두번다시 ♧7는 사용하지 않는다.
a=1 
k = 13
보여줄땐 13은 k로 보여지게 할것
소지금 다잃으면 종료할 것
최소 베팅금액 있을것

배열로 할것
a1 b1 c1 d1










*/