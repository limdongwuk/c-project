#include<iostream>

//class Warrior {
//    std::string name;
//    int health;
//public:
//    Warrior(const std::string& n, const int h) : name(n), health(h){}
//    void attack() 
    {
//        std::cout << name << " ��(��) Į�� �ֵθ��ϴ�." << std::endl;
//    }
//    void TakeDamage(const int damage) 
//    {
//        health -= damage;
//        std::cout << name << "��(��)" << damage << "��ŭ ������ ����! ����ü�� : " << health << std::endl;
//    }
//};
//
//class Mage
//{
//    std::string name;
//    int health;
//public:
//
//    Mage(const std::string& n, const int h) : name(n), health(h) {}
//    void CastSkill() 
//    {
//        std::cout << name << " ��(��) ��������!" << std::endl;
//    }
//    void TakeDamage(const int damage)
//    {
//        health -= damage;
//        std::cout << name << "��(��)" << damage << "��ŭ ������ ����! ����ü�� : " << health << std::endl;
//    }
//};

#pragma endregion


#pragma region ����� ������
class Character {
public:
    std::string name;
    int health;
    
    Character(const std::string& n, const int h) : name(n),health(h){}
    void TakeDamage(const int damage)
    {
        health -= damage;
        std::cout << name << "��(��)" << damage << "��ŭ ������ ����! ����ü�� : " << health << std::endl;
    }

};

class Warrior : public Character 
{
public:
    //Character(n, h) : �ڽ� Ŭ������ Warrior���� �θ�Ŭ������ Character�� �����ڸ� ȣ��
    //�θ�->�ڽ� �ڽ�Ŭ������ ��ü�� �����Ǳ� ���� �θ�Ŭ������ ��ü�� ���� �ʱ�ȭ�Ǵ°� ��������
    Warrior(const std::string& n, const int h) : Character(n, h) {} //<<<�θ� �׳� �θ����
    void attack()
    {
        std::cout << name << " ��(��) Į�� �ֵθ��ϴ�." << std::endl;
    }
};

class Mage : public Character
{
public:
    //Character(n, h) : �ڽ� Ŭ������ Warrior���� �θ�Ŭ������ Character�� �����ڸ� ȣ��
    //�θ�->�ڽ� �ڽ�Ŭ������ ��ü�� �����Ǳ� ���� �θ�Ŭ������ ��ü�� ���� �ʱ�ȭ�Ǵ°� ��������
    Mage(const std::string& n, const int h) : Character(n, h) {} //<<<�θ� �׳� �θ����
    void CastSkill()
    {
        std::cout << name << " ��(��) ��������!" << std::endl;
    }
};

//��Ӱ� ������ ����
//is-a : �ٳ����� �����̴�(���ok)
//has-a :�ٳ����� ������ �����Ѵ�?
//Ŭ���� �ȿ� Ŭ������* ������;
class Weapon3 {};

class Sw : public Weapon3
{

public:
    void use();

};
class CChharacter
{
    Sw* s; //���� ���⼭ �����ͷ� �������� ������ Ŭ������ �ν��Ͻ��� �������� �����ϰ� �ʿ��Ҷ��� �޸𸮸� �Ҵ��ϱ� ������ 
public:
    void attack()
    {
        s->use();
    }
};


void main()
{
    Warrior* w = new Warrior("����", 100); //Warrior*: Warrior Ŭ������ ������ Ÿ���� �ǹ��մϴ�. ��, w�� Warrior ��ü�� ����ų �� �ִ� �������Դϴ�
                                            //w: ������ ������ �̸��Դϴ�. �� �����ʹ� Warrior ��ü�� �ּҸ� ������ �� �ֽ��ϴ�.
                                            //new: C++���� �������� �޸𸮸� �Ҵ��� �� ����ϴ� �������Դϴ�. new�� ����ϸ� ��(Heap) �޸� ������ ��ü�� �����ϰ�, �� ��ü�� �ּҸ� ��ȯ�մϴ�.
                                            //Warrior("����", 100): Warrior Ŭ������ �����ڸ� ȣ���Ͽ� ���ο� Warrior ��ü�� �����մϴ�. �� ��ü�� "����"��� �̸��� 100�̶�� ���� ���ڷ� �޽��ϴ�. 
                                            // �̴� Warrior Ŭ������ �����ڰ� �̷��� ���ڸ� �޾Ƶ��̵��� ���ǵǾ� �־�� �Ѵٴ� ���� �ǹ��մϴ�.
    w->attack(); //�ڽĲ�
    w->TakeDamage(10); //�θ�

}



//������Ͽ��� ���� ����(�����), �������� ������ cpp�� �ۼ�(������)