#include <iostream>
using namespace std;



//함수 템플릿(타입만 다를뿐 함수내용이 같음)
int GetMax(int x, int y)
{
    if (x > y) return x;
    else return y;
}
float GetMax(float x, float y)
{
    if (x > y) return x;
    else return y;
}


template <typename T>
T GetMax(const T x, const T y)
{
    if (x > y) return x;
    else return y;
}
template <typename T>
T const& max(T const& a, T const& b)
{
    return a < b ? b : a;
}
//int 형으로 대입하면 위의 템플릿은 아래와 같은 형태를 띄게 될 것임.
//int const& max(int const& a, int const& b)
//{
//    return a < b ? b : a;
//}

template <typename T>
void Output(const T data)
{
    std::cout << "데이터 : " << data << std::endl;
}

template <typename T>
void Output1(T a, T b)
{
    std::cout << a << " , " << b << std::endl;
}

template <typename T1, typename T2>
void Output2(T1 a, T2 b)
{
    std::cout << a << " , " << b << std::endl;
}

template<typename T> //클래스 템플릿
class Box
{
private:
    T data;
public:
    void SetData(T data)
    {
        this->data = data;
    }
    T GetData()
    {
        return data;
    }

    // void Print();
};
template<typename T1, typename T2>
class Box2
{
private:
    T1 firstData;
    T2 secondData;
public:
    T1 GetFirstData();
    T2 GetSecondData();

    void SetFirst(T1 val) { firstData = val; }
    void SetSecond(T1 val) { firstData = val; }
};

template<typename T1, typename T2>
T1 Box2<T1, T2>::GetFirstData()
{
    return firstData;
}

template<typename T1, typename T2>
T2 Box2<T1, T2>::GetSecondData()
{
    return secondData;
}

int main()
{
    Output(1); //int타입도 받을 수 있고
    Output(2.5); //float타입도 받아짐
    //Output1(1, 1.5); //타입 name이 하나인경우 데이터형이 동일하지 않은 경우 오류발생
    Output2(1, 1.5); //타입name이 매칭이되면 정상작동함

    Box<int>box;
    box.SetData(100);
    std::cout << box.GetData() << std::endl;
    Box<double>box1;
    std::cout << box1.GetData() << std::endl;

    Box2<int, double>box2;
    box2.SetFirst(10);
    box2.SetSecond(20.5);

    std::cout << box2.GetFirstData() << " , " << box2.GetSecondData() << std::endl;
}

//template<typename T>
//void Box<T>::Print()
//{
//}