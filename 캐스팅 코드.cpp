#include <iostream>
using namespace std;


class Shape {
public:
    virtual void Draw()const {
        std::cout << "부모 클래스 Shape" << std::endl;
    }
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void Draw()const override {
        std::cout << "자식클래스 Circle" << std::endl;
    }
    void CircleFunc() {
        std::cout << "Circle클래스의 멤버함수" << std::endl;
    }
};

class Rectangle : public Shape {
    void Draw()const override
    {
        std::cout << "자식클래스 Rectangle" << std::endl;
    }
    void RectangleFunc() {
        std::cout << "Rectangle클래스의 멤버함수" << std::endl;
    }
    
};

//const_cast 예시
void Print(const int* value) {
    int* newValue = const_cast<int*>(value); //포인터나 참조만 가능 (<int*>자리에 *지우면 불가)
    *newValue = 100;
}
void main()
{
    Shape* shape1 = new Circle(); //업캐스팅
    Shape* shape2 = new Rectangle();
    shape1->Draw();
    shape2->Draw();
    
    Circle* c = dynamic_cast<Circle*>(shape1); //부모클래스타입의 포인터를 자식클래스로 자식클래스의 함수들을 부를때 임시적으로
    c->CircleFunc();
}
// ====================================================================================================================================================================================


