#include <iostream>
using namespace std;



//멤버변수는 private
//생성자, 소멸자, 멤버함수는 public
//접근자(getter),
// 접근자(accessor) 함수는 클래스의 private 또는 protected 멤버 변수의 값을 읽을 수 있도록 해주는 함수
//  설정자(setter)
// 설정자(mutator) 함수는 클래스의 private 또는 protected 멤버 변수를 수정할 수 있게 해주는 함수
//프라이빗으로 설정된 내용을 외부에서 접근할수있게해주는것
class Person
{
private:
    std::string name;
    int age;
public:
    //getter
    string getName()const 
    {
        return name;
    }
    //setter
    void SetName(const string& name)
    {
        //Person::name = name; == this ->name = name;          같은 것
        this->name = name; //내자신을 가리키는 포인터 클래스의 멤버변수에서 매개변수와 이름이 같을때 사용 (디스가 가르키는 네임은 std::string name이다)
        
    }

};
void main()
{
    Person p;
    p.SetName("d");
    cout << p.getName() << endl;
}

//클레스는 설계도임.
//객체를 찍어내기위한 녀석.
//구조체와 클래스의 차이는 기본접근제어지시자가 다르다.
//접근제어 지시자는 private, public, protected(상속)
//프라이빗은 오로지 클래스 내부에서만 접근이 가능(멤버변수는 이곳에)
//public은 클래스 내,외부에서 접근이 가능.(외부에 공개할 멤버함수, 생성자, 소멸자)
//protected는 상속관계에서 활용되며 클래스 내부와 상속관계에서 접근을 허용한다.
//생성자는 기본적으로 무조건적으로 호출되며 없는 경우 컴파일러가 알아서 생성해준다.
//생성자는 일반적으로 멤버들을 초기화 할때 사용하며, 멤버 이니셜라이즈 리스트 사용하는게 효율적임.
//(상수와 참조변수들은 반드시 이녀석을 이용해야함.)
//소멸자는 생성자와 마찬가지로 자동호출되며(객체가 소멸될때)
//이곳에 메모리 해제를 할때 사용
//생성자->소멸자 호출순서임.
//생성자는 오버로딩이 가능하고 소멸자는 불가능
//접근자, 설정자는 데이터 캡슐화를 보존하며 외부에서 변경이 가능하다./(멤버변수)


//const 쓰는 버릇을 기릅시다. 제발

//주말맞이 과제
//1.택1
//ㄴ 슬라이드,빙고,월남뽕(카드게임)
//ㄴ셋 중 한개를 클래스화 시킬것.
//동적할당도 활용하시고...


//2. 대전게임
//플레이어와 몬스터 각각의 클래스가 있다.
//기본적으로 둘다 공격력, 방어력, 체력이 있음.
//멤버변수는 무조건 private
//멤버함수들은 당연 public (공격함수, 공격하고 내정보출력함수)(get set써야함)
//종료조건 둘중하나 다이하면 끝
