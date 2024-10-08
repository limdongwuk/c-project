
#pragma region STL
/*
STL
- 프로그램에 필요한 자료구조와 알고리즘 템플릿으로 제공하는 라이브러리.

- 컨테이너 : 객체를 보관하는 객체(클래스 템플릿의 형태로 구현이 되어있음)
ㄴ각각의 원소에 접근할 수 있도록 다양한 멤버함수를 제공
ㄴ접근하는 방법은 직접 함수를 호출하거나, 반복자(iterator)라는 것을 이용해 접근

ㄴ이터레이터(반복자) : 포인터랑 유사한 개념으로 컨테이너의 원소를 가리키고 가리키는 원소에 접근하여 다음 원소를 가리키게 하는 기능

- 알고리즘 : 정렬, 삭제, 검색 등을 해결하는 일반화된 방법을 제공하는 함수 템플릿

시퀀스 컨테이너(선형) : 컨테이너 원소가 자신만의 삽입위치(순서)를 가지는 컨테이너
ㄴvector, list, deque

-연관 컨테이너(비선형) : 저장원소가 삽입순서와 다르게 특정 정렬기준에 의해 자동정렬되는 컨테이너
ㄴset, mulitset, map, multimap

벡터와 리스트의 차이점이 무엇인가요?<<★★★★면접질문
직선의 형태를 띄고있지만 내부 구조가 다름

*/

#pragma endregion 
#pragma region vector
/*
 vector?
ㄴ 순차적으로 저장, 내부적으로 동적배열을 사용하여 크기를 자동으로 조절
ㄴ 인덱스를 통해 임의의 원소에 접근이 가능(배열의[], 벡터의 멤버함수 at)
ㄴ가변길이 배열


*/
#pragma endregion 
/*
백터와 리스트의 차이점은 반드시 알아두세요.
vector는 인덱스나 iter를 통해 원하는 곳에 접근 가능
-작업에 있어 탐색의 빈도수가 높기때문에 더 많이 사용함

list는 노드형태로 원하는 곳에 접근하기 어려움
-중간 삽입삭제에 유리함
-포인터도 담아야하기에 메모리 사용량이 더 높다.
-탐색속도가 느리다..


*/