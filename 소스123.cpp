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


#pragma region ������ ���� (�̱���)
/*
�� ������ ����

 - ��ü���� ���α׷��� ���� �ܰ迡�� ���� �߻��ϴ�/ �˷��� �������� ���ϱ� ���� ����ϴ� ��� / �����̶�� �� �� �ִ�.
 

 �� ����

 1. �ǻ���� ����ȭ->ȿ�� ����(�۾��ӵ� UP)

 2. ����ȭ �ǰ� �������� �ڵ� ���ۼ��� �����ϴ� ��찡 ����.
 �� ���� ���α׷��Ӱ� �̹� ������ ������ �޾� ���ұ� ������ �ð��� ������ ���� �ذ� ��ȵ� �̹� ��κ� ���� ����

 3. ���α׷��� �ۼ��� �ռ� ������ Ÿ�ӿ����� �پ��� ��Ȳ�� ���� ���̵� �� ���⼺ ���ÿ� �����ϴ�.
 �� ������ �����ϴ��� �̹� ������� ���ɰ� ȿ���� ����� ������ ������ ����ϸ� ����̻��� ����.


 �� ����
 
 1. ������ ������ �ܼ��� �ڵ带 �����ϰ� �ۼ��ϴ� �ϳ��� ����̴�.
 �� ���Ϻ� ����

 2. ��κ��� ������ ������ ���� �κа� Ȱ�� �κ����� ������ ��찡 ���� ������ �ڵ� ����ȭ �鿡���� �Ҹ��ϴ�.





 �� �̱���
  - ������Ʈ ��ü���� 1���� �����ؾ� �ϴ� ��ü�� Ŭ���� / �Ǵ� ������Ʈ ��ü���� �����ϴ� Ŭ������ ������ �� �ִ� �����̶�� �� �� �ִ�.

  �ڡڡڡڡ�
  �� ����

   - �ѹ��� new�� ���� ��ü�� �����ϸ� ���� ������Ʈ ����������� ������� �ʴ´ٸ� �ν��Ͻ��� �������� �ʱ� ������
   �޸� ���� ������ �� �ִ�.

  �� ����

   - �̱����� ��κ� ���� ������ �����ϱ� ������ ������ ������ ���� �ڵ忡 ���ؼ� �˾ƺ��� ����� ���� (���İ�Ƽ)
   ���� �̱��� �ν��Ͻ����� �ʹ� ���� �����Ͱ� �����ȴٸ� ���յ� �̽��� �ݵ�� �߻��ϱ� ������ ���� ������ ���� �����.
  
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

/*���ø� ��ü�� Ŭ������ �޸𸮻�뷮 ����
�ڷ����� Ȯ������ ���� Ÿ���̱⶧���� �ڷ����� get<I>�� ������ �ٽü���
����� �����Ϸ��� �ؾ������� ��ó���� ���� �ѱ�*/