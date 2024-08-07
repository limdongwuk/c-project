/*

virtual void Move()const = 0; //0또는 abstract 붙으면 순수 가상함수 -->
순수 가상함수 : 선언만하고 구현하진 않음.

*/

#include"Player1.h"
int main() {
    Player1* p = new Player1("홍", 200); //순수가상함수는 자식클래스에서 구현해야함 (재정의 무조건 해야함)
    p->Attack();
    p->TakeDamage(10);

    /*추상클래스는 인스턴스화 시킬 수 없다
    Unit* u = new Unit("asdas", 200)*/
}

// 동적바인딩 과정.
// 클래스에서 가상함수를 선언하면, 해당 클래스의 가상함수 테이블 생성.
// 그 가상함수 테이블은, 클래스의 가상함수의 주소를 저장하게 되고, 객체가 생성이 되는 순간.
// 객체의 가상함수 포인터가, 해당 클래스의 가상함수 테이블을 가리키게 되고, 함수호출을 하게 되면,
// 객체의 가상함수 테이블의 포인터를 통해서, 호출할 함수를 찾고 호출한다.

//1.oop 특성 조사 -> 파일로 제출할 것.(이왕이면 pdf로)추상화 다형성 캡슐화

//2.클래스 전방선언(상호참조오류 방지)->과제(위와 동일함)
// 
// player.h
// class Weapon;<<-----전방선언
// class Player
//{
// private:
//  Weapon* weapon;
//};

//#include "Player"
//class Weapon
//{
// private:
// Plyaer* player;
//};



// 
// 만약에 두개의 클래스가 있음.파일은 각각분할
//Player
//Weapon
// #include "Weapon"
//class Player
//{
// private:
//  Weapon* weapon;
//};

//#include "Player"
//class Weapon
//{
// private:
// Plyaer* player;
//};

//이렇게하면 상호참조 오류발생

//3. 추상클래스를 활용한 3가지 케릭터 클래스를 구현하세요.
//3-1 기본 스텟, 움직이는 함수, 공격하는 함수, 데미지 먹는 함수..기타등등..
