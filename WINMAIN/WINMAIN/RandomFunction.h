#pragma once
#include "SingletoneBase.h"
//이걸 전역적으로 쓰기위해 싱글톤으로 변경했다.
//
class RandomFunction : public SingletoneBase<RandomFunction>
{
public:
    RandomFunction()
    {
        //API 공용 함수
        //GetTickCount : API 함수로 OS가 부팅된 후의 경과 시간을 체크
        //단위는 밀리 세컨 -> 밀리 세컨 단위이기 때문에 규모가 크지 않은 난수에 좋다.
        srand(GetTickCount());
    }
    ~RandomFunction(){}

    inline int getInt(int num)
    {
        return rand() % num;
    }
    inline int getFromIntTo(int fromNum, int toNum) //조건식으로 예외처리하면 인라인 풀림
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