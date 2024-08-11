#include<iostream>

//�Լ�ȣ���� ��� �����Ǵ°ų�? ��������? ��������?
//�Լ��� ȣ���� �ɶ� �Լ��� �ּҸ� ��������

//1. ���� ���ε�?
//������ Ÿ�ӿ� �Լ�ȣ�⿡ ��Լ��� ������� �����ϴ� �༮(����ӵ���������, ������ �Ұ��ϴ�)
//

//2. ���� ���ε�?
//�Լ�ȣ���� ��Լ��� ������� �����ϴ� �༮
// � �����Ϳ����� ���ٵǾ����� ������� ������ �ν��Ͻ��� ���� Ŭ�������� ����  -->������ ���� 
//���ε� ��ü�� ����ð��� 
//ȣ���Ҷ� �������� �������̵��� �Լ��� ã�Ƽ� ����

//�������ε��� �۵�(�����Լ����̺��� ������??)<<���������ڡڡڡ�
// Ŭ�������� �����Լ� �����ϸ� �����Լ� ���̺��� �����Ѵ�.
// �����Լ� ���̺� �޸𸮿� �����ġ�� �ִ��� ����Ų��.
//��ü�� �����ɶ� �� Ŭ������ �����Լ� ���̺��� ����Ű�� �����͸� ������ �ǰ�
//�긦 ���ؼ� ��Ÿ�ӿ� �´� ������ �Լ��� ȣ���ϰ� �ȴ�.

class CPrint {
public:
    void Print(int a) {
        std::cout << "int�� ���" << a << std::endl;
    }
    void Print(double a) {
        std::cout << "double�� ���" << a << std::endl;
    }
};

class Parent {
    public:
        virtual void Show() {
            std::cout << "�θ� Ŭ���� Show �Լ�" << std::endl;
        }
        virtual ~Parent() = default; // �⺻������ �����Ϸ����� ����Ʈ�� ���ڴ� ���Ѱ�
};

class Child : public Parent {

    void Show()override {
        std::cout << "�ڽ�Ŭ���� show" << std::endl;
    }

};
//int main() {
//    CPrint c; //�������ε� �ڷ����� ���ؼ� ȣ���̵�(�̹� �����̵Ǽ�)
//    c.Print(10);
//    c.Print(20.5);
//
//    Parent* pPtr = new Child(); //parent�� ��ӹޤ��� child�̱� ������ �̷��� ��� ����
//    pPtr->Show();//�ڽ�Ŭ������ ���� �Լ��� ȣ�� ���� ���ε�
//    
//    delete pPtr;
//}

#include <iostream>

class Base {
public:
    virtual void display() const { std::cout << "Base class" << std::endl; } // ���� �Լ�
    virtual ~Base() {} // ���� �Ҹ���
};

class Derived : public Base {
public:
    void display() const override { std::cout << "Derived class" << std::endl; }
};

void show(const Base& obj) { //�Լ����� �Ű������� ���̽�Ŭ������ �����ϴ� obj��� ������ ���� �̺����δ� �θ�� �ڽ��� �ż���ȣ���� ��� �����ϴ�. 
    //const Base& obj�� Base Ŭ���� Ÿ���� ������, �����δ� Base �Ǵ� Base�� ��ӹ��� �ڽ� Ŭ������ ��ü�� �����մϴ�.
    //obj�� ���� ��ü�� Ÿ�Կ� ���� ������ display�� ȣ���Ѵ�.
    obj.display(); // ������: obj�� ���� Ÿ�Կ� ���� ȣ��Ǵ� �Լ��� �޶���
}

//void show(const Base* obj) {
//    obj->display(); // �����͸� ���� display() �޼��� ȣ��
//}        //�̷��Ե� ��밡��
int main() {
    Derived d;   // Derived Ŭ������ ��ü ����
    show(d);     // DerivedŬ������ d��� ��ü�� Base ����(��ȯ�Ͽ�) ����((show(d)�� ȣ���� �� Base& obj = d�� ������ ��)))
    //show �Լ� ������ obj.display()�� ȣ���� ��, obj�� Base Ŭ���� Ÿ���� ���������� 
    // �����δ� Derived ��ü�� �����մϴ�. �� ���, �������̵� ���п� Derived Ŭ������ display �޼��尡 ȣ��˴ϴ�.
    return 0;
}
//"�����δ� Derived ��ü�� �����Ѵ�"�� ���� ������ ����Ű�� ��ü�� ���� Ÿ���� Derived Ŭ�������� �ǹ��ϸ�, 
// �̷� ���� �������̵��� �޼��尡 ȣ��ȴٴ� ���� �����մϴ�.

int main() {
    Base* b = new Derived(); // Base �����Ͱ� Derived ��ü�� ����Ŵ
    show(*b); // "Derived class" ���
    delete b; // �޸� ����
    return 0;
}