#include<iostream>
#include<vector>
#include<memory> // �̰� �־�� ����Ʈ ������ ����
class Weapon1
{
public:
    Weapon1(const std::string name, int damage) 
        : name(name),damage(damage){}

    void Print()const 
    {
        std::cout << "�̸� : " << name << ", ���ݷ� : " << damage << std::endl;
    }
private:

    std::string name;
    int damage;

};

void main()
{//���͸� ����� Ǫ�ù�
    std::vector<Weapon1>weapon; //wapon ��ü�� ������ ���� ����
    //���Ϳ� �����Ҵ� �ϴ� ���
    weapon.push_back(Weapon1("���", 50));
    weapon.push_back(Weapon1("Ȱ", 10));
    weapon.push_back(Weapon1("�ܰ�", 100));
    weapon.push_back(Weapon1("����", 600));
    
    std::vector<Weapon1*>weapons;
    weapons.push_back(new Weapon1("���", 50));
    weapons.push_back(new Weapon1("Ȱ", 10));
    weapons.push_back(new Weapon1("�ܰ�", 100));
    weapons.push_back(new Weapon1("����", 600));

    for (const auto& w : weapon)
    {
        w.Print();
    }
    //���Ϳ� �����Ҵ� �ϴ� ��� ( ������'����' -> *, weapon->weapon1, -> new �߰�)
    std::vector<Weapon1*> weapon2; // Weapon1*�� weapon1 Ŭ������ ������ Ÿ��
    //weapon2���ʹ� weapon1 Ŭ������ ��ü�� ����Ű�� �����͸� �����ϴ� ����
    //weapon2�� Weapon1* Ÿ���� �����͸� ������ �� �ִ� std::vector ��ü�� �����մϴ�. 
    // �� ���ʹ� ���� ��ü�� �����͸� ���� �� ������ �� �ֽ��ϴ�.
    //new Weapon1("���", 50) ȣ���� Weapon1 ��ü�� �������� �����ϰ�, �� ��ü�� �޸� �ּҸ� ��ȯ�մϴ�. �� �ּҴ� Weapon1* Ÿ���� �������Դϴ�.
    //weapon2.push_back(new Weapon1("���", 50));���� new Weapon1("���", 50) ȣ��� ������ Weapon1 ��ü�� �����͸� push_back �޼��忡 �����մϴ�
    //
   /* ��ü���� ����
        std::vector<Weapon1*> weapon2; �� Weapon1* Ÿ���� �����͸� ������ �� �ִ� �� ���͸� �����մϴ�.
        new Weapon1("���", 50) ȣ��� Weapon1 ��ü�� �������� �����ϰ�, ��ü�� �����͸� ��ȯ�մϴ�.
        weapon2.push_back(...) ȣ��� �� �����͸� weapon2 ���Ϳ� �߰��մϴ�.*/
    weapon2.push_back(new Weapon1("���", 50));//new �����ڴ� ���� �޸� �Ҵ��� �����ϰ�, Weapon1 Ŭ������ �����ڸ� ȣ���Ͽ� �� Weapon1 ��ü�� �����մϴ�. 
    weapon2.push_back(new Weapon1("Ȱ", 10));
    weapon2.push_back(new Weapon1("�ܰ�", 100));
    weapon2.push_back(new Weapon1("����", 600));
    
    //�޸� ���� ���
    for (auto& w : weapon2)
    {
        delete w;
    }
    //����Ʈ������(auto_ptr(����x) ,������Ƽ�� ���۹��� -> unique_ptr, shared, shared_ptr, weak_ptr(�߾Ⱦ�))  
    // : ����Ʈ �����൵ �˾Ƽ� �޸� ������(�ڡڡ�ã�ƺ��� �����ý���Ʈ������ ��ó� ������ �� ����)
   /* std::vector < std::unique_ptr<Weapon1>>weapon2*/; //������ ���ϴ� ����Ʈ �Ƚᵵ�Ǽ�
    // std::make_unique //��ü�� �����ϰ� ���ÿ� �־��� �Ű������� �����ؼ� .... ã�ƺ���!!!!!


    //���� 
    //1. �ƹ��ų� Ŭ���� ���� ���Ϳ� �����ϰ� ����ϱ�(�ǽ�)
    //2. �����ý��� �����
    //�� shop, item ���� ������Ŭ������ �˾ƾ��Ұ�,���ͽἭ �������� 
    //��ĳ���� Ŭ������ �κ��丮 Ŭ������ �˾ƾ���
    //���� ���� �������� ����̰� ���ݷ¿� ���õ� ���� ������ �װ� �� ������ �����, ����� ������ ������ �κ��丮�� ������
    //�κ��丮���� ����/Ż�� ����.. push_back, pop_back ĳ����->�κ��丮 
    //�κ��丮���� ���ȱ� ���(������ ��������)..
    //�������� ������ ��ۿ����� ���Ž� ���� ������ ���� �پ������, �ٻ�� ����ǥ�� 
    // ������ ������ status�� ���� ĳ���� statâ�ʿ��ϰ� ������ ���� 
    
    //ĳ���ʹ� �����˾ƾ��ϰ� �κ��丮�� ����Ǿ��־����
        

    //�ڡڡڡڸ���������
    //���Ϳ� ����Ʈ�� ������
    //���ʹ� �����Ͱ� 100������ ����� �б⶧���� �߰� ���� ������ ������
    //����Ʈ�� ��� ����̶� �����͸� ������ ������ ���� ��带 ����Ű�� �����ͷ� �̷��������(�߰� ���� ������ ������) 
    // ��ũ�� ����Ʈ �����غ����� 


}