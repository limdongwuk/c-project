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
//    Parent* pPtr = new Child();
//    pPtr->Show();//자식클래스의 쇼라는 함수를 호출 동적 바인딩
//    
//    delete pPtr;
//}