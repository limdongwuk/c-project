#include <iostream>
using namespace std;


class Shape {
public:
    virtual void Draw()const {
        std::cout << "�θ� Ŭ���� Shape" << std::endl;
    }
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void Draw()const override {
        std::cout << "�ڽ�Ŭ���� Circle" << std::endl;
    }
    void CircleFunc() {
        std::cout << "CircleŬ������ ����Լ�" << std::endl;
    }
};

class Rectangle : public Shape {
    void Draw()const override
    {
        std::cout << "�ڽ�Ŭ���� Rectangle" << std::endl;
    }
    void RectangleFunc() {
        std::cout << "RectangleŬ������ ����Լ�" << std::endl;
    }
    
};

//const_cast ����
void Print(const int* value) {
    int* newValue = const_cast<int*>(value); //�����ͳ� ������ ���� (<int*>�ڸ��� *����� �Ұ�)
    *newValue = 100;
}
void main()
{
    Shape* shape1 = new Circle(); //��ĳ����
    Shape* shape2 = new Rectangle();
    shape1->Draw();
    shape2->Draw();
    
    Circle* c = dynamic_cast<Circle*>(shape1); //�θ�Ŭ����Ÿ���� �����͸� �ڽ�Ŭ������ �ڽ�Ŭ������ �Լ����� �θ��� �ӽ�������
    c->CircleFunc();
}
// ====================================================================================================================================================================================


