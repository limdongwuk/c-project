#include <iostream>

#include "BattleMaster.h"
#include "Blade.h"
#include "Gunslinger.h"
//3. �߻�Ŭ������ Ȱ���� 3���� �ɸ��� Ŭ������ �����ϼ���.
//3-1 �⺻ ����, �����̴� �Լ�, �����ϴ� �Լ�, ������ �Դ� �Լ�..��Ÿ���..

void main()
{
    LostArkClass* CL = nullptr;
    CL->choice();
    int num;
    std::cin >> num;
    switch (num)
    {
    case 1:
        CL = new BattleMaster("��Ʋ������", 12000, 8000, 9000, 1400);
        break;
    case 2:
        CL = new Blade("���̵�", 13000, 8000, 12000, 1300);
        break;
    case 3:
        CL = new GunSlinger("�ǽ�����", 10000, 8000, 7000, 700);
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