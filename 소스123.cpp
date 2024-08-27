#include <iostream>
#include <memory>
#include <Windows.h>

using namespace std;


void AddHP(int hp, int value)
{
    hp += value;
}

void main()
{
    int hp = 100;
    AddHP(hp, 100);

    cout << hp << endl;
}


#pragma region 디자인 패턴 (싱글톤)
/*
▶ 디자인 패턴

 - 객체지향 프로그래밍 설계 단계에서 자주 발생하는/ 알려진 문제들을 피하기 위해 사용하는 기법 / 패턴이라고 할 수 있다.
 

 ▷ 장점

 1. 의사소통 간결화->효율 증가(작업속도 UP)

 2. 평준화 되고 안정적인 코드 동작성을 보장하는 경우가 많다.
 ㄴ 많은 프로그래머가 이미 동일한 증상을 겪어 보았기 때문에 시간이 지남에 따라 해결 방안도 이미 대부분 나온 상태

 3. 프로그래밍 작성에 앞서 디자인 타임에서의 다양한 상황에 대한 가이드 및 방향성 제시에 유리하다.
 ㄴ 경험이 부족하더라도 이미 어느정도 성능과 효율이 보장된 디자인 패턴을 사용하면 평균이상은 간다.


 ▷ 단점
 
 1. 디자인 패턴은 단순히 코드를 설계하고 작성하는 하나의 방법이다.
 ㄴ 패턴병 조심

 2. 대부분의 디자인 패턴은 원본 부분과 활용 부분으로 나뉘는 경우가 많기 때문에 코드 간결화 면에서는 불리하다.





 ▶ 싱글톤
  - 프로젝트 전체에서 1개만 존재해야 하는 객체나 클래스 / 또는 프로젝트 전체에서 공유하는 클래스에 적용할 수 있는 패턴이라고 할 수 있다.

  ★★★★★
  ▷ 장점

   - 한번의 new를 통해 객체를 생성하면 만약 프로젝트 어느곳에서도 사용하지 않는다면 인스턴스를 생성하지 않기 때문에
   메모리 낭비를 방지할 수 있다.

  ▷ 단점

   - 싱글톤은 대부분 전역 접근을 전재하기 때문에 로직이 복잡해 지면 코드에 대해서 알아보기 힘들어 지고 (스파게티)
   또한 싱글톤 인스턴스에게 너무 많은 데이터가 공유된다면 결합도 이슈는 반드시 발생하기 때문에 유지 보수가 아주 힘들다.
  
  */
#pragma endregion
template <class T>
class Singletone
{
protected:
    static T* singleton;

public:
    static T* getSin(void);
    void releaseSing(void);
};

class MainGame : public Singletone<MainGame>
{
};

//          
template<typename T1, typename T2, typename T3, typename T4, typename T5>
class Varinats
{
public:
    std::map<T1, map<T2, T3>> data;

    Variants(T1 Val1) : data (Val1, nullptr, nullptr, nullptr, nullptr){}

    template<size_t I>
    auto getVariable() const -> decltype (std::get<I>(data)) {return std::get<I>(data); }

};

#define MAKE_VARIANTS_1(type0, type1)\
Varinats<type0, void*, void*, void*, void*>(value1, ...)

/*템플릿 자체는 클래스라서 메모리사용량 높음
자료형이 확정되지 않은 타입이기때문에 자료형을 get<I>로 날리고 다시설정
계산은 컴파일러가 해야할일을 전처리기 한테 넘김*/