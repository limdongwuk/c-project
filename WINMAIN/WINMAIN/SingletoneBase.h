#pragma once
//�̱��� : ������Ʈ ��ü���� 1���� �����ؾ� �ϴ� ��ü / Ŭ���� -> �Ǵ� �����ϴ� Ŭ����
// �� �� : �ν��Ͻ��� �������� ������ �޸𸮸� �����ʾ� ȿ�� ����
// �� �� : ���յ�
//SingletonBase

//�ζ���,���ø��� ����, ����, ������ϱ����� ��Ģ���� �Ѵ�.
//�ڡڡڡڼ��ڵ� ������ ���� �� ����
template <class T>
class SingletoneBase
{
protected:
    static T* singleton; // ó�� ȣ���Ҷ� ��ü�� ����

    SingletoneBase(){}
    ~SingletoneBase() {}

public:
    static T* getSingleton(void);
    void releaseSingleton(void);
};
template <typename T>
T* SingletoneBase<T>::singleton = 0;

//�������� �Լ�
template <typename T>
T* SingletoneBase<T>::getSingleton(void)
{
    if (!singleton) singleton = new T; //singleton �����Ͱ� null�̶�� ��ü ����
    return singleton; 
}

template <typename T>
void SingletoneBase<T>::releaseSingleton(void)
{
    if (singleton) //singleton �����Ͱ� null�� �ƴ϶�� ����
    {
        delete singleton;
        singleton = 0;
    }
}