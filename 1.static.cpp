#include <iostream>
using namespace std;

/*
static,

extern
�ܺκ���
�ٸ����Ͽ� �ִ� ���������� �������Ͽ��� �����ϱ����� ���



*/
//staticVariable.cpp�ȿ� �ִ� ���������� �����Ѵ�.
//extern int num1;
//
//static int a; //������������ �ٴ� static�� �Լ��ȿ���, Ŭ������ ��������� ���̴� ����ƽ ������ �ٴٸ�
//
//void Count();
//
//static int sNum;//����ƽ������ �˾Ƽ� 0���� �ʱ�ȭ ���ش�.
//=================================
//Ŭ���� ���� static?
//Ŭ���� ���ο��� static���� ����� ������ �ش� Ŭ������
//��� �ν��Ͻ����� ������. Ŭ������ �ν��Ͻ� ���� �������� ���Ǵ� ����
//Ŭ������ �ν��Ͻ��� ���̵� ������ �����ϴ�.


//������
//Ŭ���� ���ο��� static�� ����Ͽ� ����
//�� ������ �����Ϸ����� �ش� Ŭ������ ���� ��������� ������ �˷���
//�ܺο��� �ʱ�ȭ�ؾ���.
//::�� ����ؼ� �ʱ�ȭ�� �ؾ���.
//=================================

class Character
{
    private:
        static int count;
        int num;
        public:
            Character() {
                count++;
            }
            static void PrintCount() //Ŭ���� �ν��Ͻ� ���� ȣ�Ⱑ���� �Լ�
            {
                cout << count << endl;
                //���� : static����Լ��� �Ϲ� ��� ������ ȣ���� �� ����.
               /* cout << num << endl;*/
            }

};

int Character::count = 0;

void main()
{
    //Count();
    //Count();
    //Count();
    Character::PrintCount(); //�ν��Ͻ� �������ߴµ� �Լ� ȣ�� ����
    Character baba; //��ü�� �����ɶ����� �����ڹߵ��Ͽ� ī��Ʈ+
    Character::PrintCount(); 
    Character war;
    Character::PrintCount();

}

//void Count()
//{
//    static int x = 0;//����
//    int y = 0; //����
//    x = x + 1;
//    y = y + 1;
//
//    cout << "x��  : " << x << "y�� : " << y << endl;
//}
