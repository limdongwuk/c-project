#include<iostream>

using namespace std;


//함수 오버로딩
// 함수 오버로딩(function overloading)은 다른 매개 변수를 가진 같은 이름의 여러 함수를 만들 수 있는 C++의 기능

//쓰는 이유 : 유지보수성이 좋아짐
//함수이름이 같더라도 매개변수의 갯수가 다르면 다른함수로 인지함
//오버로딩 성립 조건 : 함수이름이 같더라도 매개변수의 갯수가 다르면 다른함수로 인지함(매개변수의 갯수가 달라야 한다)
//                    매개변수의 타입이 달라도 다른함수로 인지한다.
//                    순서가 달라도 다른 함수로 인지한다.
// 
//   int func(int a);
//double func(int b);                 리턴 타입이 아니어야 한다.
                      
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int sum(double a, int b, int c)
{
    return a + b + c;
}

int sum(int a, double b, int c)
{
    return a + b + c;
}
//디폴트 매개변수
//기본값을 지정해주는 것(ex c=3)을 넣은 함수의 값이 1+2+3이 나옴
//디폴트 매개변수는 맨오른쪽부터 지정해줘야함
int sum(int a, int b, int c=3)
{
    return a + b + c;
}

int main()
{
    int result = sum(1, 2, 3);
}


//inline 함수 : 함수의 호출과정에서 바로때려 박는 방식
inline int Test(int left, int right) 
{
    return left > right ? left : right;
}


/*
과제1. 함수 오버로딩을 활용한 캐릭터 스킬 만들기

ex) 
스킬이름만 입력받아 사용하는 함수
스킬 이름이랑 데미지 값을 입력받아 스킬을 사용하는 함수
스킬이름, 데미지, 크리티컬 확률, 피격거리


과제2. 사용자가 입력한 양의 정수의 각 자릿수의 합을 구하는 로직을 구현해라.
ex) 예를 들어서..
    18324 => 1 + 8 + 3 + 2 + 4 =18
    3849 => 24    
    10으로 나눠서 나머지를 계속 보여주면 됨
*/