#include<iostream>
#include<vector>
void ShowPrintValue(const std::vector<int>vec)
{
    for (int i : vec)
    {
        std::cout << i << std::endl;
    }
}


void main()
{
    //만약 함수로 한다면
    

    std::vector<int>vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);

    std::cout << "vec의 capacity : " << vec.capacity() << std::endl; //결과 6 출력
    vec.clear();
    std::cout << "vec의 capacity(클리어 후) : " << vec.capacity() << std::endl; //결과 6 출력 ,원소는 날라가는데 최대 들어갈 수 있는 갯수는 안날라감
    //빈벡터를 만들어서 스왑을 하면됨, 메모리 값을 바꾸는게아니고 참조링크를 바꿔버림

    std::vector<int>().swap(vec);
    std::cout << "vec의 capacity(클리어 후 스왑) : " << vec.capacity() << std::endl; //결과 0 출력

    std::vector<int>myVec = { 1,2,3,4,5,6 };
    ShowPrintValue(myVec);




}
