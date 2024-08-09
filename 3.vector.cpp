#include<iostream>
#include<vector>
#include<memory> // 이거 있어야 스마트 포인터 가능
class Weapon1
{
public:
    Weapon1(const std::string name, int damage) 
        : name(name),damage(damage){}

    void Print()const 
    {
        std::cout << "이름 : " << name << ", 공격력 : " << damage << std::endl;
    }
private:

    std::string name;
    int damage;

};

void main()
{//벡터를 사용한 푸시백
    std::vector<Weapon1>weapon; //wapon 객체를 저장할 벡터 생성
    //벡터에 정적할당 하는 방법
    weapon.push_back(Weapon1("장검", 50));
    weapon.push_back(Weapon1("활", 10));
    weapon.push_back(Weapon1("단검", 100));
    weapon.push_back(Weapon1("집행", 600));
    
    std::vector<Weapon1*>weapons;
    weapons.push_back(new Weapon1("장검", 50));
    weapons.push_back(new Weapon1("활", 10));
    weapons.push_back(new Weapon1("단검", 100));
    weapons.push_back(new Weapon1("집행", 600));

    for (const auto& w : weapon)
    {
        w.Print();
    }
    //벡터에 동적할당 하는 방법 ( 변경점'공백' -> *, weapon->weapon1, -> new 추가)
    std::vector<Weapon1*> weapon2; // Weapon1*은 weapon1 클래스의 포인터 타입
    //weapon2백터는 weapon1 클래스의 객체를 가리키는 포인터를 저장하는 벡터
    //weapon2는 Weapon1* 타입의 포인터를 저장할 수 있는 std::vector 객체를 생성합니다. 
    // 이 벡터는 무기 객체의 포인터를 여러 개 저장할 수 있습니다.
    //new Weapon1("장검", 50) 호출은 Weapon1 객체를 동적으로 생성하고, 이 객체의 메모리 주소를 반환합니다. 이 주소는 Weapon1* 타입의 포인터입니다.
    //weapon2.push_back(new Weapon1("장검", 50));에서 new Weapon1("장검", 50) 호출로 생성된 Weapon1 객체의 포인터를 push_back 메서드에 전달합니다
    //
   /* 전체적인 동작
        std::vector<Weapon1*> weapon2; 는 Weapon1* 타입의 포인터를 저장할 수 있는 빈 벡터를 생성합니다.
        new Weapon1("장검", 50) 호출로 Weapon1 객체를 동적으로 생성하고, 객체의 포인터를 반환합니다.
        weapon2.push_back(...) 호출로 이 포인터를 weapon2 벡터에 추가합니다.*/
    weapon2.push_back(new Weapon1("장검", 50));//new 연산자는 동적 메모리 할당을 수행하고, Weapon1 클래스의 생성자를 호출하여 새 Weapon1 객체를 생성합니다. 
    weapon2.push_back(new Weapon1("활", 10));
    weapon2.push_back(new Weapon1("단검", 100));
    weapon2.push_back(new Weapon1("집행", 600));
    
    //메모리 해제 방법
    for (auto& w : weapon2)
    {
        delete w;
    }
    //스마트포인터(auto_ptr(권장x) ,오토피티알 업글버전 -> unique_ptr, shared, shared_ptr, weak_ptr(잘안씀))  
    // : 딜리트 안해줘도 알아서 메모리 관리함(★★★찾아볼것 면접시스마트포인터 써봤냐 질문할 수 있음)
   /* std::vector < std::unique_ptr<Weapon1>>weapon2*/; //굉장히 편리하다 딜리트 안써도되서
    // std::make_unique //객체를 생성하고 동시에 주어진 매개변수를 생성해서 .... 찾아보기!!!!!


    //과제 
    //1. 아무거나 클래스 만들어서 백터에 저장하고 출력하기(실습)
    //2. 상점시스템 만들기
    //ㄴ shop, item 샵은 아이템클래스를 알아야할것,벡터써서 만들어야함 
    //ㄴ캐릭터 클래스는 인벤토리 클래스를 알아야함
    //샵에 들어가면 아이템이 뜰것이고 공격력에 관련된 템을 누르면 그게 다 나오고 사야함, 사고나서 내가산 아이템 인벤토리로 가야함
    //인벤토리에서 장착/탈착 가능.. push_back, pop_back 캐릭터->인벤토리 
    //인벤토리에서 되팔기 기능(가격은 절반정도)..
    //수량제한 상점에 몇개밖에없고 구매시 샵의 아이템 갯수 줄어들어야함, 다사면 매진표시 
    // 아이템 장착시 status가 증가 캐릭터 stat창필요하고 템착용 증가 
    
    //캐릭터는 샵도알아야하고 인벤토리도 연결되어있어야함
        

    //★★★★면접질문★
    //벡터와 리스트의 차이점
    //벡터는 데이터가 100만개면 땡기고 밀기때문에 중간 삽입 삭제가 느리다
    //리스트는 노드 기반이라 데이터를 저장할 공간과 다음 노드를 가리키는 포인터로 이루어져있음(중간 삽입 삭제가 빠르다) 
    // 링크드 리스트 구현해보세요 


}