#include <iostream>
#include <time.h>
#include <CoreWindow.h>
using namespace std;

/*����1.�����ϴ� ĳ���� ��� II

- ���� ĳ���� ��� ����

- ���� ������ ������ ���������� �÷�Ǯ�ϰ� ����� �´�.

- �ּ� ������ : 50 x 50
*/

void TextColor(int font, int backGround);
void main()
{
    TextColor(0, 15); cout << "�����������������������"; cout << "������������������������������������������������������������������������������" << endl;
    cout << "���������������"; TextColor(4, 15); cout << "������"; TextColor(0, 15); cout << "��ᡡ��������������������������������������������������������������������������" << endl;
    cout << "��������������"; TextColor(4, 15); cout << "�������"; TextColor(0, 15); cout << "���ᡡ������������������������������������������������������������������������" << endl;
    cout << "������������"; TextColor(4, 15); cout << "����������"; TextColor(0, 15); cout << "��ᡡ������������ᡡ������������������������������������������������" << endl;
    cout << "������������"; TextColor(4, 15); cout << "����������"; TextColor(0, 15); cout << "��ᡡ������������ᡡ������������������������������������������������" << endl;
    cout << "������������"; TextColor(4, 15); cout << "����������"; TextColor(0, 15); cout << "������"; TextColor(7, 15); cout << "���������"; TextColor(0, 15); cout <<"���ᡡ������������������������������������������" << endl;
    cout << "������������"; TextColor(4, 15); cout << "����������"; TextColor(0, 15); cout << "���"; TextColor(7, 15); cout << "������������"; TextColor(0, 15); cout << "���ᡡ������������������������������������������" << endl;
    cout << "������������"; TextColor(4, 15); cout << "����������"; TextColor(0, 15); cout << "���"; TextColor(7, 15); cout << "���������������"; TextColor(0, 15); cout << "���ᡡ������������������������������������" << endl;
    cout << "����������������"; TextColor(4, 15); cout << "������"; TextColor(8, 15); cout << "��"; TextColor(7, 15); cout << "��������"; TextColor(0, 15); cout << "��"; TextColor(7, 15); cout << "�����������"; TextColor(0, 15); cout << "��ᡡ������������������������������������" << endl;
    cout << "�������������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "���������"; TextColor(0, 15); cout << "��"; TextColor(7, 15); cout << "�����������"; TextColor(0, 15); cout << "��ᡡ������������������������������������" << endl;
    cout << "���������������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "��������"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "����"; TextColor(14, 15); cout << "������"; TextColor(0, 15); cout << "�����ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "�������"; TextColor(6, 15); cout << "���"; TextColor(14, 15); cout << "����"; TextColor(0, 15); cout << "���"; TextColor(14, 15); cout << "����"; TextColor(0, 15); cout << "���"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "�������"; TextColor(6, 15); cout << "���"; TextColor(14, 15); cout << "����"; TextColor(0, 15); cout << "��"; TextColor(14, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "�������"; TextColor(6, 15); cout << "���"; TextColor(14, 15); cout << "����"; TextColor(0, 15); cout << "��"; TextColor(14, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "�������"; TextColor(6, 15); cout << "���"; TextColor(14, 15); cout << "����"; TextColor(0, 15); cout << "��"; TextColor(14, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "�������"; TextColor(6, 15); cout << "���"; TextColor(14, 15); cout << "����"; TextColor(0, 15); cout << "��"; TextColor(14, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "����"; TextColor(7, 15); cout << "������"; TextColor(6, 15); cout << "���"; TextColor(14, 15); cout << "����"; TextColor(0, 15); cout << "��"; TextColor(14, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "����"; TextColor(7, 15); cout << "������"; TextColor(6, 15); cout << "���"; TextColor(14, 15); cout << "����"; TextColor(0, 15); cout << "��"; TextColor(14, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "����"; TextColor(7, 15); cout << "������"; TextColor(6, 15); cout << "�����"; TextColor(14, 15); cout << "��"; TextColor(0, 15); cout << "��"; TextColor(14, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "����"; TextColor(7, 15); cout << "������"; TextColor(6, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��������������������������������" << endl;
    cout << "�����������������������"; TextColor(8, 15); cout << "����"; TextColor(7, 15); cout << "������"; TextColor(6, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "������"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ��"; TextColor(0, 15); cout << "�����ᡡ������������������" << endl;
    cout << "���������������������������"; TextColor(8, 15); cout << "����"; TextColor(7, 15); cout << "������"; TextColor(6, 15); cout << "������������"; TextColor(0, 15); cout << "��ᡡ��"; TextColor(0, 15); cout << "��"; TextColor(4, 15); cout << "������"; TextColor(0, 15); cout << "�ᡡ����������������" << endl;
    cout << "���������������������������"; TextColor(8, 15); cout << "������"; TextColor(7, 15); cout << "���������������"; TextColor(0, 15); cout << "�����"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "�ᡡ��������������" << endl;
    cout << "������������������������������"; TextColor(8, 15); cout << "����"; TextColor(7, 15); cout << "�����������"; TextColor(0, 15); cout << "������"; TextColor(8, 15); cout << "��"; TextColor(0, 15); cout << "��"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "�ᡡ��������������" << endl;
    cout << "������������������������"; TextColor(8, 15); cout << "�����"; TextColor(7, 15); cout << "��"; TextColor(0, 15); cout << "�������������������"; TextColor(8, 15); cout << "��"; TextColor(0, 15); cout << "��"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "�ᡡ��������������" << endl;
    cout << "������������������������"; TextColor(8, 15); cout << "�����"; TextColor(7, 15); cout << "��"; TextColor(0, 15); cout << "�����������������"; TextColor(8, 15); cout << "����"; TextColor(0, 15); cout << "��"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "�ᡡ��������������" << endl;
    cout << "�������������������"; TextColor(8, 15); cout << "��"; TextColor(7, 15); cout << "��������"; TextColor(1, 15); cout << "���������"; TextColor(0, 15); cout << "����"; TextColor(8, 15); cout << "���������"; TextColor(0, 15); cout << "��"; TextColor(4, 15); cout << "�����"; TextColor(0, 15); cout << "��ᡡ��������������" << endl;
    cout << "�������������������"; TextColor(8, 15); cout << "��"; TextColor(7, 15); cout << "��������"; TextColor(1, 15); cout << "���������"; TextColor(0, 15); cout << "����"; TextColor(8, 15); cout << "������"; TextColor(0, 15); cout << "���ᡡ��";TextColor(0, 15); cout << "����ᡡ����������������" << endl;
    cout << "��������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "������"; TextColor(0, 15); cout << "������"; TextColor(1, 15); cout << "����"; TextColor(11, 15); cout << "������"; TextColor(1, 15); cout << "���"; TextColor(0, 15); cout << "�������"; cout << "������������������������������������" << endl;
    cout << "������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "������"; TextColor(0, 15); cout << "���ᡡ��"; TextColor(1, 15); cout << "����"; TextColor(11, 15); cout << "���������"; TextColor(1, 15); cout << "��"; TextColor(0, 15); cout << "����ᡡ������������������������������������" << endl;
    cout << "������������"; TextColor(8, 15); cout << "���"; TextColor(7, 15); cout << "������"; TextColor(0, 15); cout << "���ᡡ��"; TextColor(1, 15); cout << "����"; TextColor(11, 15); cout << "���������"; TextColor(1, 15); cout << "��"; TextColor(0, 15); cout << "�ᡡ������������������������������������������" << endl;
    cout << "����������������"; TextColor(7, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ������"; TextColor(1, 15); cout << "����"; TextColor(11, 15); cout << "���������"; TextColor(1, 15); cout << "��"; TextColor(0, 15); cout << "�ᡡ������������������������������������������" << endl;
    cout << "����������"; TextColor(4, 15); cout << "������"; TextColor(0, 15); cout << "���ᡡ��������"; TextColor(1, 15); cout << "����"; TextColor(11, 15); cout << "���������"; TextColor(1, 15); cout << "��"; TextColor(0, 15); cout << "�ᡡ������������������������������������������" << endl;
    cout << "����������"; TextColor(4, 15); cout << "������"; TextColor(0, 15); cout << "��ᡡ����������"; TextColor(1, 15); cout << "����"; TextColor(11, 15); cout << "���������"; TextColor(1, 15); cout << "��"; TextColor(0, 15); cout << "�ᡡ������������������������������������������" << endl;
    cout << "�������"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "��ᡡ��������"; TextColor(1, 15); cout << "������"; TextColor(11, 15); cout << "�������"; TextColor(1, 15); cout << "��"; TextColor(0, 15); cout << "�ᡡ������������������������������������������" << endl;
    cout << "�������"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "��ᡡ��������"; TextColor(8, 15); cout << "�������"; TextColor(14, 15); cout << "������"; TextColor(8, 15); cout << "��"; TextColor(0, 15); cout << "�ᡡ������������������������������������������" << endl;
    cout << "�������"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "��ᡡ��������"; TextColor(8, 15); cout << "�������"; TextColor(14, 15); cout << "������"; TextColor(8, 15); cout << "��"; TextColor(0, 15); cout << "�ᡡ������������������������������������������" << endl;
    cout << "�������"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "��ᡡ���������������"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��"; TextColor(6, 15); cout << "���"; TextColor(0, 15); cout << "��ᡡ������������������������������������������" << endl;
    cout << "�������"; TextColor(4, 15); cout << "��������"; TextColor(0, 15); cout << "��ᡡ����������"; TextColor(1, 15); cout << "����"; TextColor(11, 15); cout << "������"; TextColor(1, 15); cout << "����"; TextColor(0, 15); cout << "�ᡡ������������������������������������������" << endl;
    cout << "��������"; TextColor(4, 15); cout << "������"; TextColor(0, 15); cout << "��ᡡ��������������"; TextColor(1, 15); cout << "����"; TextColor(11, 15); cout << "������"; TextColor(1, 15); cout << "����"; TextColor(0, 15); cout << "��ᡡ����������������������������������������" << endl;
    cout << "��������������ᡡ���������������"; TextColor(1, 15); cout << "�����������"; TextColor(8, 15); cout << "��"; TextColor(0, 15); cout << "���ᡡ��������������������������������������" << endl;
    cout << "�������������������������������������"; TextColor(8, 15); cout << "����"; TextColor(0, 15); cout << "������"; TextColor(8, 15); cout << "����"; TextColor(7, 15); cout << "���"; TextColor(0, 15); cout << "�ᡡ��������������������������������������" << endl;
    cout << "�����������������������������������������������������ᡡ��������������������������������" << endl;
    cout << "�����������������������������������������ᡡ����������������ᡡ����������������������������" << endl;
    cout << "����������������������������������������ᡡ�������������������ᡡ����������������������������" << endl;
    cout << "����������������������������������������ᡡ��������������������ᡡ��������������������������" << endl;
    cout << "���������������������������������������ᡡ����������������������ᡡ��������������������������" << endl;
    cout << "�������������������������������������ᡡ������������������������ᡡ��������������������������" << endl;
    cout << "�������������������������������������ᡡ������������������������ᡡ��������������������������" << endl;
    cout << "���������������������������������ᡡ������������������������������ᡡ����������������������" << endl;
    cout << "��������������������������������ᡡ������������������������������ᡡ����������������������" << endl;
    cout << "����������������������������������ᡡ������������������������������ᡡ��������������" << endl;
    cout << "���������������������������������ᡡ������������������������������ᡡ������������" << endl;
    cout << "�����������������������"; TextColor(4, 15); cout << "�����������";  TextColor(0, 15); cout << "��ᡡ�����������������"; TextColor(4, 15); cout << "������������"; TextColor(0, 15); cout << "��ᡡ����������" << endl;
    cout << "���������������������"; TextColor(4, 15); cout << "�������������"; TextColor(0, 15); cout << "��ᡡ��������������"; TextColor(4, 15); cout << "��������������"; TextColor(0, 15); cout << "�ᡡ����������" << endl;
    cout << "��������������������"; TextColor(4, 15); cout << "��������������"; TextColor(0, 15); cout << "��ᡡ��������������"; TextColor(4, 15); cout << "��������������"; TextColor(0, 15); cout << "�ᡡ����������" << endl;
    cout << "��������������������"; TextColor(4, 15); cout << "��������������"; TextColor(0, 15); cout << "��ᡡ��������������"; TextColor(4, 15); cout << "��������������"; TextColor(0, 15); cout << "�ᡡ����������" << endl;
    cout << "��������������������"; TextColor(4, 15); cout << "��������������"; TextColor(0, 15); cout << "��ᡡ��������������"; TextColor(4, 15); cout << "��������������"; TextColor(0, 15); cout << "�ᡡ����������" << endl;
    cout << "��������������������"; TextColor(4, 15); cout << "������������"; TextColor(0, 15); cout << "��ᡡ������������������"; TextColor(0, 15); cout << "��������������ᡡ����������" << endl;
    cout << "�������������������������������ᡡ������������������������������������������������������������" << endl;
    cout << "����������������������������������������������������������������������������������������������������������" << endl;
    cout << "����������������������������������������������������������������������������������������������������������" << endl;
    cout << "����������������������������������������������������������������������������������������������������������" << endl;




























}
    void TextColor(int font, int backGround)
{
        int Color = font + backGround * 16;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}