#include<iostream>
#include<time.h>

using namespace std;


/*
과제1.함수 오버로딩을 활용한 캐릭터 스킬 만들기

ex)
스킬이름만 입력받아 사용하는 함수
스킬 이름이랑 데미지 값을 입력받아 스킬을 사용하는 함수
스킬이름, 데미지, 크리티컬 확률, 피격거리
*/

string skill(string name);
void skill(string name, int damage);
void skill(int critical, int Adistance);

void main()
{
    string name;
    string skillname = skill(name); //스킬 이름만 입력받아 사용하는 함수
    cout << "스킬 명 : " << skillname << endl;

    int damage=0; // 왜 데미지를 초기화 해줘야 하는지?
    skill(name, damage);
    int critical = 0;
    int Adistance = 0;
    skill(critical, Adistance);

    

}

string skill(string name)
{
    cout << "스킬 명을 입력해주세요." << endl;
    cin >> name;
    return name;
}

void skill(string name, int damage)
{
    cout << "스킬 명을 입력해주세요." << endl;
    cin >> name;
    
    cout << "데미지를 입력해주세요." << endl;
    cin >> damage;
    cout << "스킬 명 : " << name << endl;
    cout << "데미지 : " << damage << endl;
   
}

void skill(int critical, int Adistance)
{
    string name;
    int damage;
    cout << "스킬 명을 입력해주세요." << endl;
    cin >> name;

    cout << "데미지를 입력해주세요." << endl;
    cin >> damage;

    cout << "스킬 명 : " << name << endl;
    cout << "데미지 : " << damage << endl;

    

    srand(time(NULL));
        critical = rand() % 21 + 60;
        cout << "크리티컬 확률 : " << critical << " % (크리티컬 확률은 기본 60에서 최대 80까지 증가할 수 있습니다.)" << endl;
        Adistance = 30;
        cout << "공격 사거리는 " << Adistance << " 입니다. " << endl;

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
//    std::string SkillName = "짱쎈";
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
//    cout << "스킬 이름 : ";
//    skill("name");
//
//        cout << "스킬 이름 / 데미지 출력 : ";
//       skill("name / ", "damage");
//
//       cout << "스킬 이름 / 데미지 출력 / 크리티컬 확률 / 피격거리 : ";
//       skill("파이어볼 / ", "300 / ", "80 / ", "200");
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