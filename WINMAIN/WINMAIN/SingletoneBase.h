#pragma once
//싱글톤 : 프로젝트 전체에서 1개만 존재해야 하는 객체 / 클래스 -> 또는 공유하는 클래스
// ㄴ 장 : 인스턴스가 생성되지 않으면 메모리를 먹지않아 효율 좋음
// ㄴ 단 : 결합도
//SingletonBase

//인라인,템플릿은 게터, 세터, 헤더파일구현을 원칙으로 한다.
//★★★★손코딩 문제로 나올 수 있음
template <class T>
class SingletoneBase
{
protected:
    static T* singleton; // 처음 호출할때 객체를 생성

    SingletoneBase(){}
    ~SingletoneBase() {}

public:
    static T* getSingleton(void);
    void releaseSingleton(void);
};
template <typename T>
T* SingletoneBase<T>::singleton = 0;

//가져오는 함수
template <typename T>
T* SingletoneBase<T>::getSingleton(void)
{
    if (!singleton) singleton = new T; //singleton 포인터가 null이라면 객체 생성
    return singleton; 
}

template <typename T>
void SingletoneBase<T>::releaseSingleton(void)
{
    if (singleton) //singleton 포인터가 null이 아니라면 삭제
    {
        delete singleton;
        singleton = 0;
    }
}