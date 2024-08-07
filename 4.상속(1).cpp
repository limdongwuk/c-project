#include<iostream>
//부모-자식
//클래스간의 상속관계를 맺을때는 공통의 기능을
//상위 클래스에 묶어 넣어 다른 클래스로 확장할 수 있게 하는 것이 목적.
//만약 클래스들이 서로 비슷한 또는 완전히 같은 코드를 가지고 있다면
//해당코드를 상위클래스로 묶어 내는 것을 고려하는게 좋다.

//Plyer
//->이름, 공격력, 방어력 등 속성 
// 공격하기, 스킬, 도망가기 등등 행동
//monster
//->이름, 공격력, 방어력 등 속성 
// 공격하기, 스킬, 도망가기 등등 행동

//부모, 자식
class Parent {
public:
    int publicValue;

    Parent():publicValue(1), protectedValue(2), privateValue(3){}

    void ShowValues() {
        std::cout << "부모 클래스 public값 : " << publicValue << std::endl;
        std::cout << "부모 클래스 protected값 : " << protectedValue << std::endl;
        std::cout << "부모 클래스 private값 : " << privateValue << std::endl;
    }
protected:
    int protectedValue;
private:
    int privateValue;
};

//자식 : 접근제어지시자 부모클래스
class ChildPublic : public Parent //퍼블릭으로 상속을 받음
{
public:
    void ShowValues() {
        std::cout << "자식클래스에서의 public값 : " << publicValue << std::endl;
        std::cout << "자식클래스 protected값 : " << protectedValue << std::endl;
        //자식에서 접근 불가
        /*std::cout << "자식클래스 private값 : " << privateValue << std::endl;*/
    }
};

class ChildProtected : protected Parent //프로텍티드 상속받음
{
public:
    void ShowValues() {
        std::cout << "자식클래스에서의 public값 : " << publicValue << std::endl;
        std::cout << "자식클래스 protected값 : " << protectedValue << std::endl;
        //자식에서 접근 불가
        /*std::cout << "자식클래스 private값 : " << privateValue << std::endl;*/
    }
};

class ChildPrivate : private Parent //프라이빗 상속받음
{
public:
    void ShowValues() {
        std::cout << "자식클래스에서의 public값 : " << publicValue << std::endl;
        std::cout << "자식클래스 protected값 : " << protectedValue << std::endl;
        //자식에서 접근 불가
        /*std::cout << "자식클래스 private값 : " << privateValue << std::endl;*/
    }
};

int main() {
    ChildPublic c1;
    c1.ShowValues(); //물려받은게 자식것이 있으면 자식꺼 없으면 부모꺼 가져오기도함
    std::cout << c1.publicValue << std::endl;

    //상속받은 클래스 내부에서만 사용가능하고 외부에서는 사용이 불가능하다.
 /*   std::cout << c1.protectedValue << std::endl;*/


    ChildProtected c2;
    c2.ShowValues();

    /*
    public 상속 :
    부모 클래스의 public 멤버는 자식클래스의 public으로
    부모 클래스의 protected 멤버는 자식클래스의 protected으로
    부모 클래스의 private 멤버는 자식클래스 접근x

    protected 상속 :

    
    
    */

}