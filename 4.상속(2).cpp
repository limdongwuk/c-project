#include<iostream>

//class Warrior {
//    std::string name;
//    int health;
//public:
//    Warrior(const std::string& n, const int h) : name(n), health(h){}
//    void attack() 
//    {
//        std::cout << name << " 이(가) 칼을 휘두릅니다." << std::endl;
//    }
//    void TakeDamage(const int damage) 
//    {
//        health -= damage;
//        std::cout << name << "이(가)" << damage << "만큼 데미지 먹음! 남은체력 : " << health << std::endl;
//    }
//};
//
//class Mage
//{
//    std::string name;
//    int health;
//public:
//
//    Mage(const std::string& n, const int h) : name(n), health(h) {}
//    void CastSkill() 
//    {
//        std::cout << name << " 이(가) 얼음공격!" << std::endl;
//    }
//    void TakeDamage(const int damage)
//    {
//        health -= damage;
//        std::cout << name << "이(가)" << damage << "만큼 데미지 먹음! 남은체력 : " << health << std::endl;
//    }
//};

#pragma endregion


#pragma region 상속을 썼을때
class Character {
public:
    std::string name;
    int health;
    
    Character(const std::string& n, const int h) : name(n),health(h){}
    void TakeDamage(const int damage)
    {
        health -= damage;
        std::cout << name << "이(가)" << damage << "만큼 데미지 먹음! 남은체력 : " << health << std::endl;
    }

};

class Warrior : public Character 
{
public:
    //Character(n, h) : 자식 클래스인 Warrior에서 부모클래스인 Character의 생성자를 호출
    //부모->자식 자식클래스의 객체가 생성되기 전에 부모클래스의 객체가 먼저 초기화되는걸 보장해줌
    Warrior(const std::string& n, const int h) : Character(n, h) {} //<<<부모껄 그냥 부르면됨
    void attack()
    {
        std::cout << name << " 이(가) 칼을 휘두릅니다." << std::endl;
    }
};

class Mage : public Character
{
public:
    //Character(n, h) : 자식 클래스인 Warrior에서 부모클래스인 Character의 생성자를 호출
    //부모->자식 자식클래스의 객체가 생성되기 전에 부모클래스의 객체가 먼저 초기화되는걸 보장해줌
    Mage(const std::string& n, const int h) : Character(n, h) {} //<<<부모껄 그냥 부르면됨
    void CastSkill()
    {
        std::cout << name << " 이(가) 얼음공격!" << std::endl;
    }
};

//상속과 포함의 개념
//is-a : 바나나는 과일이다(상속ok)
//has-a :바나나는 과일을 포함한다?
//클래스 안에 클래스명* 변수명;
class Weapon3 {};

class Sw : public Weapon3
{

public:
    void use();

};
class CChharacter
{
    Sw* s; //포함
public:
    void attack()
    {
        s->use();
    }
};


void main()
{
    Warrior* w = new Warrior("전사", 100);
    w->attack(); //자식꺼
    w->TakeDamage(10); //부모꺼

}



//헤더파일에는 선언만 해줌(선언부), 실질적인 로직은 cpp에 작성(구현부)