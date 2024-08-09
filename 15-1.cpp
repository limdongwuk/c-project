#include <iostream>
#include <list>
#include <map> 
using namespace std;

/*
백터와 리스트의 차이점은 반드시 알아두세요.
vector는 인덱스나 iter를 통해 원하는 곳에 접근 가능
-작업에 있어 탐색의 빈도수가 높기때문에 더 많이 사용함

list는 노드형태로 원하는 곳에 접근하기 어려움
-중간 삽입삭제에 유리함
-포인터도 담아야하기에 메모리 사용량이 더 높다.
-탐색속도가 느리다..
*/

/*
push_back : 리스트 끝에 추가
psuh_front : 리스트 앞에 추가
pop_back : 리스트 끝 요소 제거
pop_front : 리스트 앞 요소 제거
insert : 지정된 위치의 요소 삽입
erase : 지정된 위치의 요소 제거
clear : 모든 요소 제거
size : 리스트 요소 갯수 반환
front : 첫번째 요소 반환
back : 마지막 요소 반환
remove : 지정한 값을 가지는 모든 요소 제거
reverse : 리스트 순서 뒤집음
sort : 정렬
*/

/*
Map
-연관컨테이너 중에 자주 사용하는 컨테이너.
- key, value의 쌍으로 저장(pair) 
- key값은 컨테이너에 중복저장이 될 수 없음.
- 이진검색트리 레드블랙트리로 구성 중복을 허용하지 않음 중복되어있는것으로 쓰려면 멀티맵 

*/
void main()
{	
	//list
 //   std::list<int>lst = { 3,1,45,7,10 };
 //   lst.push_back(9); //리스트 끝에 9 추가

	//for (auto& i : lst)
	//{
	//	std::cout << i << std::endl;
	//}
	//lst.push_front(6); //리스트 앞에6 추가

	//std::list<int>::iterator iter = lst.begin();

	
	
	
	
	
	//map
	std::map<std::string, int>data;
	//반복자
	std::map<std::string, int>::iterator iter1;



	//pair
	// 키 값 두개를 묶어서 하나의 객체로 사용하는 템플릿 클래스
	// 두개의 서로 다른 타입의 값을 함께 저장가능
	//페어는 두개의 멤버를 가지고 있다
	//first, second


	//1.value_type을 이용한 방법
	//기본적인 키-값 쌍으로 타입을 나타낸다. pair 객체를 생성한 다음에 insert에 전달.
	//가독성이 떨어짐.
	data.insert(std::map<std::string, int>::value_type("바보", 1)); //키 :바보 , 값:1


	//2.make_pair
	//페어 객체를 생성하는 함수 템플릿
	//make_pair("윈터", 5)->std::pair(string, int) 
	data.insert(std::make_pair("윈터", 5)); //바로위랑 같지만 템플릿 인자를 자기가 자동으로 추론해서 해줌(타입이명확하지 않아진다는 단점이 있다)


	//3. pair를 이용한 방법
	data.insert(std::pair<std::string, int>("BTS", 10));
	data.insert(std::pair<std::string, int>("반장", 30));
	data.insert(std::pair<std::string, int>("아이유", 170));
	data.insert(std::pair<std::string, int>("정우성", 400));
	data.insert(std::pair<std::string, int>("언리얼", 20));


	//4. 객체를 직접 생성하는 방법
	std::pair<std::string, int>pt1("대한민국", 10);
	data.insert(pt1);

	data.erase("정우성");

	for (auto& pair : data)
	{
		std::cout << "키값 : " << pair.first << " , 데이터 : " << pair.second << std::endl;
	}

	std::map<std::string, int>m;
	m.insert(std::pair<std::string, int>("Apple", 1));
	m.insert(std::pair<std::string, int>("Banana", 2));
	m.insert(std::make_pair("grape", 3));

	auto res = m.insert(std::make_pair("Banana", 10));
	
	if (!res.second)
	{
		std::cout << "바나나는 있을까? : " << res.first->second << std::endl;
	}


	//find
	auto iter = m.find("Apple"); //주어진 키값을 찾아서 이터레이터 반환 , 키가없으면 엔드 반환
	if (iter != m.end())
	{
		std::cout << "찾음!" << iter->second << std::endl;
	}
	else
	{
		std::cout << "없음" << std::endl;
	}

	//count : 주어진 키의 개수를 반환 //키는 유일하기때문에 리턴값은 0이거나 1임
	std::cout << "Apple : " << m.count("Apple") << std::endl;

	//clear : 모든 요소를 삭제함
	//empty : 비어있냐?
	//size : 
	for (auto it = m.begin(); it != m.end(); ++it)
	{
	}
	for (auto it = m.rbegin(); it != m.rend(); ++it) //역순
	{
	}

}