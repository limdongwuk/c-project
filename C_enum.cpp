#include<iostream>

using namespace std;

/*
 �� ����� ���� �ڷ���
  �� ����ü, ����ü, ������, Ŭ������ �ִ�.

*/

#pragma region C_enum
/*
    1. ������
     - ���õ� ������� �ϳ��� �׷����� ���´�.
     - �ڵ��� �������� ���̰� �ǹ��ִ� �̸��� �ο��� �� �ִ�.

*/
//�⺻ ���� ���
enum Color {Red, Green, White};
//enum RGB { Red, Green, White };
//������� ���� �Ҵ�
enum Direction {Left, Right=2, Up, Down};

#pragma endregion

#pragma region enumClass

enum class MyEnumClass
{

};


#pragma endregion





void main()
{
    Color color = Red;

    if (color==Red)
    {
        cout << "����" << endl;
    }
    else if(color==Green)
    {
        cout << "���" << endl;
    }

    Direction key = Left;

    switch (key)
    {
    case Left:

        cout << "�������� �̵�" << endl;
        break;

    case Right:

        cout << "���������� �̵�" << endl;
        break;

    case Up:

        cout << "�������� �̵�" << endl;
        break;

    case Down:

        cout << "�Ʒ������� �̵�" << endl;
        break;

    }
        
    int red = Red; //�Ͻ������� enum�� ����ȯ ����

    cout << red << endl;




    
















}
