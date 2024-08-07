#include <iostream>

#include "BattleMaster.h"
#include "Blade.h"
#include "Gunslinger.h"
//3. 추상클래스를 활용한 3가지 케릭터 클래스를 구현하세요.
//3-1 기본 스텟, 움직이는 함수, 공격하는 함수, 데미지 먹는 함수..기타등등..

void main()
{
    LostArkClass* CL = nullptr;
    CL->choice();
    int num;
    std::cin >> num;
    switch (num)
    {
    case 1:
        CL = new BattleMaster("배틀마스터", 12000, 8000, 9000, 1400);
        break;
    case 2:
        CL = new Blade("블레이드", 13000, 8000, 12000, 1300);
        break;
    case 3:
        CL = new GunSlinger("건슬링어", 10000, 8000, 7000, 700);
        break;
    }
  
    CL->status();
    std::cout << std::endl;
    CL->Move();
    std::cout << std::endl;
    CL->Damage(200);
    std::cout << std::endl;
    CL->classattack();

    delete CL;

}