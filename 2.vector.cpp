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
    //���� �Լ��� �Ѵٸ�
    

    std::vector<int>vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);

    std::cout << "vec�� capacity : " << vec.capacity() << std::endl; //��� 6 ���
    vec.clear();
    std::cout << "vec�� capacity(Ŭ���� ��) : " << vec.capacity() << std::endl; //��� 6 ��� ,���Ҵ� ���󰡴µ� �ִ� �� �� �ִ� ������ �ȳ���
    //���͸� ���� ������ �ϸ��, �޸� ���� �ٲٴ°Ծƴϰ� ������ũ�� �ٲ����

    std::vector<int>().swap(vec);
    std::cout << "vec�� capacity(Ŭ���� �� ����) : " << vec.capacity() << std::endl; //��� 0 ���

    std::vector<int>myVec = { 1,2,3,4,5,6 };
    ShowPrintValue(myVec);




}
