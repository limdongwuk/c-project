#include<iostream>

using namespace std;




#pragma region enumClass

//enum class
/*
enum class �ڽŸ��� �������� ������ �ִ�.
���� �̸��� ������ ����� �ٸ� �������� �浹���� �ʴ´�.
Ÿ�Կ����� �������� �����Ѵ�.(�Ͻ��� ����ȯ X)

*/


enum class Color
{
    RED, GREEN, WHITE
};


#pragma endregion

enum class SkillType
{
    Fire,
    Ice,
    Lighting

};
void UseSkill(SkillType skil1);

int main()
{
    //���������� ��Ȯ�� ����� �Ѵ�.
    //Color color = RED;
    Color color = Color::RED; // �ڽŸ��� ������ Ȯ���ϰ� �ϴ� �ֱ� ������ / Color:: �� ����ȿ� �־��� �˷��ִ¾�

    //Ÿ���� �������� �����ϱ� ���� �Ͻ������� ����ȯ�� ������� �ʴ´�.
    //int c = Color::RED;
    // ��������� ����ȯ�� ����� �Ѵ�.
    int a = static_cast<int>(Color::RED);


}

void UseSkill(SkillType skill)
{
    switch (skill)
    {
    case SkillType::Fire:
        break;
    case SkillType::Ice:
        break;
    case SkillType::Lighting:
        break;
    default:
        break;
    }
    
}
//���
/*
enum�� ������ ����� ������������ �ش���. �Ϲ����� ����ȯ�� ���-> Ÿ�Կ� ���� �������� ����.
enumClass�� ������ ��ü�� �������� �ش���. �Ϲ����� ����ȯ�� ������� �ʴ´�. -> Ÿ�Կ� ���� �������� �����Ѵ�.

*/