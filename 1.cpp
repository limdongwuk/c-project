#include <iostream>
using namespace std;

/*
class��
-��ü���� ���α׷���?
���츮�� ��� �ִ� ���� ���谡 ��ü��� �����Ǿ� �ִ� ��ó��
����Ʈ��� ��ü�� �����ϴ� ���
�����, TV, ��Ź��, ����� ���.. ���� ��ü�� ������.
�������� ����� �����ϰ� �ٸ� ��ü��� ��ȣ�ۿ�

-��ü?
��Ŭ����->Ʋ�̳� ���赵->��ü�� �����ϴ� Ʋ�̳� ���赵
��Ʋ�� ��������� ��?->��Ծ�� ���� ����?
����ü�� ���赵�� ������� ��üȭ ��Ű�� ��.->�׷��� ������ϱ�
*/

//����ü
struct Circle
{
public: //����ü�� �Ϲ������� �ۺ����� ��������

    //�������
    int radius;
    string color;
    //����Լ�
    double calArea() 
    {
        return 3.14 * radius * radius;
    }
};
//Ŭ����
//???����ü�� Ŭ������ ���� �ٸ���?
class Circle1
{
private: //Ŭ������ �⺻������ �����̺�
    int radius;
    string color;

    double calArea()
    {
        return 3.14 * radius * radius;
    }
};


class Student
{
private :

public:

    void Print() { std::cout << "��Ʃ��Ʈ Ŭ������ ����Ʈ �Լ�"; }
    void Print(int a, int b) {};
    void Print(std::string str = "����Ʈ �Ű�����") { std::cout << str << std::endl; }


    //Ŭ���� ���ο� �Լ� ������
    int Sum(int a, int b);
};

class square
{
private :
    int a =0;
    int b =0;
    int c =0;
public : 
    void Print() 
    {
        cout << "�簢�� Ŭ������ �簢���� ���ϱ�" << endl;
    }
    void multiple(int a, int b)
    {
        c = a * b;
    }
    void resultPrint()
    {
        cout << c << endl;
    }
};




void main()
{
    //����ü
    Circle c;
    c.radius = 5;

    //Ŭ����
    Circle1 cc;
    //�� �ȵǴµ�? �������� �� �����ϴ�. 
    /*cc.radius = 5;*/

    //����ü(public)�� Ŭ����(private)�� ���̴� ����Ʈ �������������ڰ� �ٸ���.
    //private, public, protected
    //private : Ŭ���� ���ο����� ��������
    //�����ܾ��� �������
    //public : �Լ�, ������, �Ҹ���

    /*
    ��������        Ŭ��������       Ŭ�����ܺ�       ���Ŭ����
    private            o                x               x
    public             o                o               o 
    protected          o                x               o
    */

    square sq;
    sq.Print();
    sq.multiple(20, 30);
    sq.resultPrint();
}

int Student::Sum(int a, int b) //Student Ŭ���� ���ο� �ִ� sum�̶�� �Լ� 
{
    return 0;
}


/*

�簢���� Ŭ������ ����� ������.
-����Լ��δ� �簢���� ���̴� ���.
����±��� �غ�����*/

//�����Լ������� Ŭ����