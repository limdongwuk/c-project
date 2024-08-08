//#include<iostream>
//#include<vector>
//int main()
//{
//#pragma region 벡터 사용법
//    std::vector<int> v1;//빈 벡터 생성
//    std::vector<int>v2(10); //10개의 기본값(0)으로 초기화된 벡터 생성
//    std::vector<int>v3(10, 5); //10개의 요소를 5로 초기화된 벡터 생성
//    std::vector<int>v4 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };// 초기화 리스트를 활용해 벡터생성
//
//    //size()원소의 갯수를 리턴함
//    std::cout << "벡터의 사이즈 v1 : " << v1.size() << std::endl;
//    std::cout << "벡터의 사이즈 v2 : " << v2.size() << std::endl;
//    std::cout << "벡터의 사이즈 v3 : " << v3.size() << std::endl;
//    std::cout << "벡터의 사이즈 v4 : " << v4.size() << std::endl;
//
//    std::cout << "========================================" << std::endl;
//
//    //capacity() : 현재 메모리내에서 최대 저장할 수 있는 요소의 갯수
//    std::cout << "벡터의 capacity v1 : " << v1.capacity() << std::endl;
//    std::cout << "벡터의 capacity v2 : " << v2.capacity() << std::endl;
//    std::cout << "벡터의 capacity v3 : " << v3.capacity() << std::endl;
//    std::cout << "벡터의 capacity v4 : " << v4.capacity() << std::endl;
//
//    v4.push_back(11); //psuh_back() : 맨 뒤에다가 ()의 요소를 넣겠습니다. 통상적으로 메모리의 1/2만큼 늘려줌(최대 저장할 수 있는 요소의 갯수의 반만큼 늘려줌)
//    std::cout << "벡터의 capacity v4(푸시벡 후): " << v4.capacity() << std::endl;
//    std::cout << "========================================" << std::endl;
//
//    std::vector<int>v5;
//    v5.push_back(1); // 맨뒤에 1넣고 백터에 들어갈 수 있는 요소의 갯수가 반절만큼 늘어난다는뜻
//    v5.push_back(2);
//    v5.push_back(3);
//    v5.push_back(4);
//    v5.push_back(5);
//
//    for (int i = 0; i < v5.size(); i++) //원소의 사이즈만큼 5일듯
//    {
//        std::cout << "for문으로 벡터 v5 출력 : " << v5[i] << std::endl; //index로 접근이 되는것 확인
//        std::cout << "for문으로 벡터 v5 출력 : " << v5.at(i) << std::endl; //멤버함수인 at으로 접근이 되는것 확인
//    }
//
//    for (int& i : v5) //참조의 형태를 띄어야 좋다
//    {
//        std::cout << "for문으로 범위기반 벡터 v5 출력 : " << i << std::endl;
//        //범위기반 for문은 배열이나 멤버함수at으로 접근 x, 컨테이너의 모든요소를 순회한다.(일부분만 for문은 어렵다), 반복의 범위를 지가 알아서 설정
//    }
//    for (auto& i : v5) //컴파일러가 자동으로 타입을 설정해줌, 호불호 갈리며 복잡한 타입일때 사용하면 좋다.
//    {
//
//    }
//    for (const auto& i : v5)
//    {
//        //i += 1; 콘스트를 넣는게 좋지만 여기선 i의 값이 변경되므로 쓰면 안됨..ㅋ
//        std::cout << "for문으로 범위기반 벡터 v5 출력 : " << i << std::endl;
//    }
//
//#pragma endregion 
//
//#pragma region 벡터의 멤버함수
//
//    /*
//    empty() : 해당 벡터가 비어있는지 확인
//    clear() : 벡터의 모든 요소를 제거
//    at() : 벡터의 요소 접근
//    front() : 벡터의 첫번째 요소 반환
//    back() : 벡터의 마지막 요소 반환
//    pop_back() : 벡터의 끝에서 요소를 제거
//    push_back() : 벡터의 끝에 요소 추가
//    insert() : 지정한 위치에 요소를 삽입
//    erase() : 지정한 위치에 요소를 제거
//    reserve() : 벡터의 용량을 지정
//    swap() : 두 벡터를 교환
//    */
//    std::cout << "========================================" << std::endl;
//    std::vector<int> v6;
//    v6.push_back(1);
//    v6.push_back(2);
//    v6.push_back(3);
//    v6.push_back(4);
//    v6.push_back(5);
//    v6.insert(v6.begin() + 1, 10);  //인덱스 1에 10삽입(원래 인덱스1은 사라짐)
//    
//       for (int i = 0; i < v6.size(); i++)
//       {
//           std::cout << v6[i] << std::endl;
//       }
//    v6.erase(v6.begin() + 3); //인덱스 3에 요소제거
//    for (auto& i : v6) //이렇게 사용하면 i가 벡터의 각요소를 참조하기 때문에 v6.at(i)나 v6[i]형태로는 사용할 수 없다.
//    {
//        std::cout << i << std::endl;
//    }
//    v6.pop_back();//마지막 요소 제거
//    //1,2,3,4
//    //1,10,2,3,4
//    //1,10,2,4
//    //1,10,2
//    //결과 1,10,2
//    std::cout << "========================================" << std::endl;
//#pragma endregion
//#pragma region iterator
//    /*
//    포인터와 비슷한 녀석. 컨테이너의 저장된 원소를 순회하고 접근하는 방법
//    begin()-> 시작을 나타냄(실제 원소가 있는 위치)
//    //end()->실제 원소가 아닌 끝을 나타냄(벡터의 마지막 요소가 아닌 그다음 공간을 가르킴)
//    */
//    std::vector<int> v7;
//    v7.push_back(1);
//    v7.push_back(2);
//    v7.push_back(3);
//    v7.push_back(4);
//    v7.push_back(5);
//    std::cout << "==반복자로 출력" << std::endl;
//    for (std::vector<int>::iterator it = v7.begin(); it != v7.end(); ++it) //it가 v7의백터의 엔드가 아닐때까지 돌아라
//    {
//        std::cout << *it << std::endl;
//    }
//
//    std::vector<int> v8;
//    v8.push_back(1);
//    v8.push_back(2);
//    v8.push_back(3);
//    v8.push_back(4);
//    v8.push_back(5);
//    std::cout << "=========================================" << std::endl;
//    std::vector<int>::iterator iter = v8.begin();//시작원소를 가리키는 반복자
//    std::cout << iter[0] << std::endl;// 결과 1
//    std::cout << iter[1] << std::endl;// 결과 2
//    std::cout << iter[2] << std::endl;// 결과 3
//    std::cout << iter[3] << std::endl;// 결과 4
//    std::cout << iter[4] << std::endl;// 결과 5
//    
//
//
//    iter += 2; //iter가 주소이므로 +2가 인덱스의 이동으로 볼 수 있다. iter[2] 즉 3번째 원소가 출력될것
//    std::cout << *iter << std::endl;
//    //for(std::vector<int>::reverse_iterator rit = v8.rbegin();rit!=v8.rend(); ++rit) //역방향 반복자
//    //{
//
//    //}
//    std::cout << "=========================================" << std::endl;
//
//    std::vector<int>vec = { 10, 20, 30, 40, 50 }; //오토 사용 예시 (알아서 반복자라는 걸 추론을 함)
//    for (auto it = vec.begin(); it!=vec.end();++it)
//    {
//        std::cout << *it << std::endl;
//    }
//    std::cout << "뻥튀기" << std::endl;
//    for (auto& i : vec)
//    {
//        i *= 2;
//    }
//    for (auto it = vec.begin(); it != vec.end(); ++it)
//    {
//        std::cout << *it << std::endl;
//    }
//   
//}    
//
//
////for ~
////오토일때 i, 사이즈까지 vec6[i] ,이터레이터*it 