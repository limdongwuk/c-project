#include<iostream>

using namespace std;
/*
����ü : Struct
 - �ϳ� �̻��� ������ �׷������� ���ο� �ڷ����� ����

 <����ü ����>
 struct ����ü �̸�{����ü ����};
  - ����ü �������δ� ������ �Լ��� ������ ����
  - ����ü�� ���Ե� ������ ��� ����, ���Ե� �Լ��� ����Լ������.
*/

/*
�ڷ��� ������
�ڷ����� ��Ī�� �����ϰ� ���� �ڷ��� �̸� ��� ���
<typedef �ڷ��� ��Ī>

*/
//������Ÿ��
typedef int myIn_t; // �ڷ��� �����Ǵ� _t�� �����°� ����
typedef unsigned long long uint64_t; // ������ �ڷ����� ����ȭ ����

//C++11 ���Ե� ��Ÿ��
using Integer = int;



       

struct Student
{

    string name;
    int math;
    int english;
    int science;

        float Average()
    {
        return(math + english + science) / 3.0f;
    }

};


struct Point
{
    int x;
    int y;
    void print();
};

//�����ڰ� �ִ� ����ü
//<����ü ������>
//��ȯ�� ���� ����ü�� �̸��� �Լ��� �����Ͽ� ���

struct Monster
{
    string name;
    int hp;
    int mp;

    Monster()
    {
        name = "����";
        hp = 10;
        mp = 20;
    }

    Monster(string _name, int _hp, int _mp)
    {
        name = _name;
        hp = _hp;
        mp = _mp;
    }
};

struct family
{
    string relation;
    string name;
    int age;

    family()
    {
        relation = "��";
        name = "������";
    }
};

int main()
{  //����ü ����
    
    /*family father;
    cout << relation << endl;
    cout;*/
    //Point p;
    //p.x = 10;
    //p.y = 20;

    //cout << "����ü p.x�� �� : " << p.x << endl;
    //cout << "����ü p.y�� �� : " << p.y << endl;
    ////P.Print();

    //Point p1 = { 50, 120 }; // ������ ���ÿ� �ʱ�ȭ

    Monster mons;
    Monster dragon = Monster("�巡��", 250, 100);
    Monster slime = Monster("������", 10, 3);
    
    cout << mons.name << endl;
    cout << mons.hp << endl;
    cout << mons.mp << endl;

    cout << "====================================" << endl;
    cout << dragon.name << endl;
    cout << dragon.hp << endl;
    cout << dragon.mp << endl;

    cout << "====================================" << endl;

   
}

void Point::print()
{
    cout << " ����Ʈ ����ü ��� �Լ���";
}

//���� �غ� ��.
//����ü�� Ȱ���ؼ� �������踦 ����غ�����.



/*
ī����� �����
Ʈ����ī��� 52��

���� �� ���� ������ ���� ī�尡 ���Դٸ�(���)
�Ʒ��� ���� �������� ī��� ��ǻ�Ͱ� ���ٰ� ������.
��7(��)  ��8  ��9(��)
��ǻ�Ͱ� �� ���� �ΰ� ���̿� �������� ī���� ���ڰ� ������ �¸�(���þ� *2)
��ǻ�Ͱ� �� ���ڿ� �Ѱ��� ���ڰ� ������ ������ ��(���þ� ��ŭ ����)
�����ȿ� ������ �ʴ´ٸ� (���þ� *2 ����)

����)�ѹ� ����� ī��� �����ߵ�.(������� �ʴ°� ��)
17�� ������ �ڵ����� ��������(3���� ī�带 ���ϸ��� �Һ�)

��7�� ���Դٸ� �ι��ٽ� ��7�� ������� �ʴ´�.
a=1 
k = 13
�����ٶ� 13�� k�� �������� �Ұ�
������ �������� ������ ��
�ּ� ���ñݾ� ������

�迭�� �Ұ�
a1 b1 c1 d1










*/