#pragma once
#include <iostream>

struct node
{
    int value; //������
    node* pNext;//��带 ����Ű�� ������

    node(int n) : value(n), pNext(nullptr) {}
};

class SLL
{
private:
    node* phead;

public:
    SLL();
    ~SLL();

    void Insert(int num);
    void Delete(int num);
    void Print();
};
