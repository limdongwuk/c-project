#include<iostream>

//함수호출이 어떻게 결정되는거냐? 정적인지? 동적인지?
//함수가 호출이 될때 함수의 주소를 연결해줌

//1. 정적 바인딩?
//컴파일 타임에 함수호출에 어떤함수가 연결될지 결정하는 녀석(실행속도가빠르고, 변경이 불가하다)
//

//2. 동적 바인딩?
//함수호출이 어떤함수로 연결될지 결정하는 녀석
// 어떤 포인터에의해 접근되었는지 상관없이 참조된 인스턴스의 실제 클래스형에 따라서  -->다형성 제공 
//바인딩 자체를 실행시간에 
//호출할때 동적으로 오버라이딩된 함수를 찾아서 실행

//동적바인딩의 작동(가상함수테이블이 뭔가요??)<<면접질문★★★★
// 클래스에서 가상함수 선언하면 가상함수 테이블을 생성한다.
// 가상함수 테이블 메모리에 어느위치에 있는지 가리킨다.
//객체가 생성될때 그 클래스의 가상함수 테이블을 가리키는 포인터를 가지게 되고
//얘를 통해서 런타임에 맞는 적절한 함수를 호출하게 된다.

class CPrint {
public:
    void Print(int a) {
        std::cout << "int형 출력" << a << std::endl;
    }
    void Print(double a) {
        std::cout << "double형 출력" << a << std::endl;
    }
};

class Parent {
    public:
        virtual void Show() {
            std::cout << "부모 클래스 Show 함수" << std::endl;
        }
        virtual ~Parent() = default; // 기본구현을 컴파일러한테 디폴트로 놓겠다 말한것
};

class Child : public Parent {

    void Show()override {
        std::cout << "자식클래스 show" << std::endl;
    }

};
//int main() {
//    CPrint c; //정적바인딩 자료형에 의해서 호출이됨(이미 결정이되서)
//    c.Print(10);
//    c.Print(20.5);
//
//    Parent* pPtr = new Child(); //parent를 상속받ㄷ는 child이기 때문에 이렇게 사용 가능
//    pPtr->Show();//자식클래스의 쇼라는 함수를 호출 동적 바인딩
//    
//    delete pPtr;
//}

#include <iostream>

class Base {
public:
    virtual void display() const { std::cout << "Base class" << std::endl; } // 가상 함수
    virtual ~Base() {} // 가상 소멸자
};

class Derived : public Base {
public:
    void display() const override { std::cout << "Derived class" << std::endl; }
};

void show(const Base& obj) { //함수에서 매개변수에 베이스클래스를 참조하는 obj라는 변수를 생성 이변수로는 부모와 자식의 매서드호출이 모두 가능하다. 
    //const Base& obj는 Base 클래스 타입의 참조로, 실제로는 Base 또는 Base를 상속받은 자식 클래스의 객체를 참조합니다.
    //obj는 실제 객체의 타입에 따라 적절한 display를 호출한다.
    obj.display(); // 다형성: obj의 실제 타입에 따라 호출되는 함수가 달라짐
}

//void show(const Base* obj) {
//    obj->display(); // 포인터를 통해 display() 메서드 호출
//}        //이렇게도 사용가능
int main() {
    Derived d;   // Derived 클래스의 객체 생성
    show(d);     // Derived클래스의 d라는 객체를 Base 참조(변환하여) 전달((show(d)를 호출할 때 Base& obj = d가 생략된 것)))
    //show 함수 내에서 obj.display()를 호출할 때, obj는 Base 클래스 타입의 참조이지만 
    // 실제로는 Derived 객체를 참조합니다. 이 경우, 오버라이드 덕분에 Derived 클래스의 display 메서드가 호출됩니다.
    return 0;
}
//"실제로는 Derived 객체를 참조한다"는 것은 참조가 가리키는 객체의 실제 타입이 Derived 클래스임을 의미하며, 
// 이로 인해 오버라이딩된 메서드가 호출된다는 것을 설명합니다.

int main() {
    Base* b = new Derived(); // Base 포인터가 Derived 객체를 가리킴
    show(*b); // "Derived class" 출력
    delete b; // 메모리 해제
    return 0;
}