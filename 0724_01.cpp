#include<iostream>
#include<time.h>

using namespace std;


/*
����1.�Լ� �����ε��� Ȱ���� ĳ���� ��ų �����

ex)
��ų�̸��� �Է¹޾� ����ϴ� �Լ�
��ų �̸��̶� ������ ���� �Է¹޾� ��ų�� ����ϴ� �Լ�
��ų�̸�, ������, ũ��Ƽ�� Ȯ��, �ǰݰŸ�
*/

string skill(string name);
void skill(string name, int damage);
void skill(int critical, int Adistance);

void main()
{
    string name;
    string skillname = skill(name); //��ų �̸��� �Է¹޾� ����ϴ� �Լ�
    cout << "��ų �� : " << skillname << endl;

    int damage=0; // �� �������� �ʱ�ȭ ����� �ϴ���?
    skill(name, damage);
    int critical = 0;
    int Adistance = 0;
    skill(critical, Adistance);

    

}

string skill(string name)
{
    cout << "��ų ���� �Է����ּ���." << endl;
    cin >> name;
    return name;
}

void skill(string name, int damage)
{
    cout << "��ų ���� �Է����ּ���." << endl;
    cin >> name;
    
    cout << "�������� �Է����ּ���." << endl;
    cin >> damage;
    cout << "��ų �� : " << name << endl;
    cout << "������ : " << damage << endl;
   
}

void skill(int critical, int Adistance)
{
    string name;
    int damage;
    cout << "��ų ���� �Է����ּ���." << endl;
    cin >> name;

    cout << "�������� �Է����ּ���." << endl;
    cin >> damage;

    cout << "��ų �� : " << name << endl;
    cout << "������ : " << damage << endl;

    

    srand(time(NULL));
        critical = rand() % 21 + 60;
        cout << "ũ��Ƽ�� Ȯ�� : " << critical << " % (ũ��Ƽ�� Ȯ���� �⺻ 60���� �ִ� 80���� ������ �� �ֽ��ϴ�.)" << endl;
        Adistance = 30;
        cout << "���� ��Ÿ��� " << Adistance << " �Դϴ�. " << endl;

}





















//string skill(string name);
//
//int main()
//{
//    string name;
//    cin >> name;
//
//    string SkillName = "";
//    SkillName = skill(name);
//
//    cout << SkillName << endl;
//
//    return 0;
//}
//
//
//string skill(string name)
//{
//    std::string SkillName = "¯��";
//    SkillName += name;
//
//    return SkillName;
//}




//
//
//void skill(string name);
//void skill(string name, string damage);
//void skill(string name, string damage, string criticalpercent, string attackdistance);
//
//int Rand(int _Cri = 80)
//{
//    int Random = 0;
//    Random = rand() % 3 + 1 + _Cri;
// 
//    return Random;
//}
//
//int main()
//{
//    cout << "��ų �̸� : ";
//    skill("name");
//
//        cout << "��ų �̸� / ������ ��� : ";
//       skill("name / ", "damage");
//
//       cout << "��ų �̸� / ������ ��� / ũ��Ƽ�� Ȯ�� / �ǰݰŸ� : ";
//       skill("���̾ / ", "300 / ", "80 / ", "200");
//
//       int a = 0;
//       int Critical = Rand();
//
//       skill(_Name, Dam, Critical, )
//}
//
//
//
//
//    void skill(string name)
//    {
//        cin >> name;
//
//    }
//
//void skill(string name, string damage)
//{
//    cin >> name;
//    cin >> damage;
//}
//void skill(string name, string damage, string criticalpercent, string attackdistance)
//{
//    cout << name << " ";
//    cout << damage << " ";
//    cout << criticalpercent << " ";
//    cout << attackdistance << endl;
//}