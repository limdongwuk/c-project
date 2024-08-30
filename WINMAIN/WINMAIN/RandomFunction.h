#pragma once
#include "SingletoneBase.h"
//�̰� ���������� �������� �̱������� �����ߴ�.
//
class RandomFunction : public SingletoneBase<RandomFunction>
{
public:
    RandomFunction()
    {
        //API ���� �Լ�
        //GetTickCount : API �Լ��� OS�� ���õ� ���� ��� �ð��� üũ
        //������ �и� ���� -> �и� ���� �����̱� ������ �Ը� ũ�� ���� ������ ����.
        srand(GetTickCount());
    }
    ~RandomFunction(){}

    inline int getInt(int num)
    {
        return rand() % num;
    }
    inline int getFromIntTo(int fromNum, int toNum) //���ǽ����� ����ó���ϸ� �ζ��� Ǯ��
    {
        return rand() % (toNum - fromNum + 1) + fromNum;
    }

    float getFloat(void)
    {
        return (float)rand() / (float)RAND_MAX;
    }

    float getFloat(float num)
    {
        return (float)rand() / (float)RAND_MAX * num;
    }

    float getFromFloatTo(float fromNum, float toNum)
    {
        float rnd = (float)rand() / (float)RAND_MAX;
        return (rnd * (toNum - fromNum) + fromNum);
    }
};