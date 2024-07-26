#include<iostream>

using namespace std;




#pragma region enumClass

//enum class
/*
enum class 자신만의 스코프를 가지고 있다.
같은 이름의 열거형 상수가 다른 열거형과 충돌하지 않는다.
타입에대한 안정성을 보장한다.(암시적 형변환 X)

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
    //범위지정을 명확히 해줘야 한다.
    //Color color = RED;
    Color color = Color::RED; // 자신만의 영역을 확실하게 하는 애기 때문에 / Color:: 나 여기안에 있어라고 알려주는애

    //타입의 안정성을 보장하기 위해 암시적으로 형변환을 허용하지 않는다.
    //int c = Color::RED;
    // 명시적으로 형변환을 해줘야 한다.
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
//요약
/*
enum은 열거형 상수가 전역스코프에 해당함. 암묵적인 형변환을 허용-> 타입에 대한 안정성이 낮다.
enumClass는 열거형 자체의 스코프에 해당함. 암묵적인 형변환을 허용하지 않는다. -> 타입에 대한 안정성을 보장한다.

*/