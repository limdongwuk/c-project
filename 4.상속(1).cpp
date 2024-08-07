#include<iostream>
//�θ�-�ڽ�
//Ŭ�������� ��Ӱ��踦 �������� ������ �����
//���� Ŭ������ ���� �־� �ٸ� Ŭ������ Ȯ���� �� �ְ� �ϴ� ���� ����.
//���� Ŭ�������� ���� ����� �Ǵ� ������ ���� �ڵ带 ������ �ִٸ�
//�ش��ڵ带 ����Ŭ������ ���� ���� ���� ����ϴ°� ����.

//Plyer
//->�̸�, ���ݷ�, ���� �� �Ӽ� 
// �����ϱ�, ��ų, �������� ��� �ൿ
//monster
//->�̸�, ���ݷ�, ���� �� �Ӽ� 
// �����ϱ�, ��ų, �������� ��� �ൿ

//�θ�, �ڽ�
class Parent {
public:
    int publicValue;

    Parent():publicValue(1), protectedValue(2), privateValue(3){}

    void ShowValues() {
        std::cout << "�θ� Ŭ���� public�� : " << publicValue << std::endl;
        std::cout << "�θ� Ŭ���� protected�� : " << protectedValue << std::endl;
        std::cout << "�θ� Ŭ���� private�� : " << privateValue << std::endl;
    }
protected:
    int protectedValue;
private:
    int privateValue;
};

//�ڽ� : �������������� �θ�Ŭ����
class ChildPublic : public Parent //�ۺ����� ����� ����
{
public:
    void ShowValues() {
        std::cout << "�ڽ�Ŭ���������� public�� : " << publicValue << std::endl;
        std::cout << "�ڽ�Ŭ���� protected�� : " << protectedValue << std::endl;
        //�ڽĿ��� ���� �Ұ�
        /*std::cout << "�ڽ�Ŭ���� private�� : " << privateValue << std::endl;*/
    }
};

class ChildProtected : protected Parent //������Ƽ�� ��ӹ���
{
public:
    void ShowValues() {
        std::cout << "�ڽ�Ŭ���������� public�� : " << publicValue << std::endl;
        std::cout << "�ڽ�Ŭ���� protected�� : " << protectedValue << std::endl;
        //�ڽĿ��� ���� �Ұ�
        /*std::cout << "�ڽ�Ŭ���� private�� : " << privateValue << std::endl;*/
    }
};

class ChildPrivate : private Parent //�����̺� ��ӹ���
{
public:
    void ShowValues() {
        std::cout << "�ڽ�Ŭ���������� public�� : " << publicValue << std::endl;
        std::cout << "�ڽ�Ŭ���� protected�� : " << protectedValue << std::endl;
        //�ڽĿ��� ���� �Ұ�
        /*std::cout << "�ڽ�Ŭ���� private�� : " << privateValue << std::endl;*/
    }
};

int main() {
    ChildPublic c1;
    c1.ShowValues(); //���������� �ڽİ��� ������ �ڽĲ� ������ �θ� �������⵵��
    std::cout << c1.publicValue << std::endl;

    //��ӹ��� Ŭ���� ���ο����� ��밡���ϰ� �ܺο����� ����� �Ұ����ϴ�.
 /*   std::cout << c1.protectedValue << std::endl;*/


    ChildProtected c2;
    c2.ShowValues();

    /*
    public ��� :
    �θ� Ŭ������ public ����� �ڽ�Ŭ������ public����
    �θ� Ŭ������ protected ����� �ڽ�Ŭ������ protected����
    �θ� Ŭ������ private ����� �ڽ�Ŭ���� ����x

    protected ��� :

    
    
    */

}