
#include "SLL.h"

SLL::SLL() :phead(nullptr)
{

}

SLL::~SLL()
{
    //헤드가 nullptr이 아닐때까지
    while (phead != nullptr)
    {
        //현재 노드를 가리키는 포인터를 임시노드에 저장
        node* temp = phead;
        phead = phead->pNext;

        delete temp;
    }
}

void SLL::Insert(int num)
{
    //새로운 노드를 만든다
    node* newNode = new node(num);

    //헤드가 없으면 헤드로해줘야함
    if (phead == nullptr)
    {//새로운 노드를 헤드로 지정
        phead = newNode;
        return;
    }
    else
    {
        node* temp = phead;
        //순회할 포인터가 nullptr이 아닐때까지 돌면서
        while (temp->pNext != nullptr)
        {
            temp = temp->pNext;
        }
        temp->pNext = newNode;
    }
}

void SLL::Delete(int num)
{
    node* pCurrent = phead;
    //다음 노드를 가리키는 포인터
    node* pNext = phead->pNext;
    //첫번째 노드가 삭제하려는 노드라면

    if (pCurrent->value == num)
    {
        phead = pNext; //phead를 다음 노드로 이동
        delete pCurrent;
        return;
    }
    while (pNext->value != num)
    {
        pCurrent = pCurrent->pNext;
        //다음 노드를 그다음 노드로 이동
        pNext = pNext->pNext;

        if (pNext == nullptr)return;
    }
    pCurrent->pNext = pNext->pNext;
    delete pNext;
}

void SLL::Print()
{
    node* temp = phead;

    std::cout << "==========Print===========" << std::endl;

    while (temp != nullptr)
    {
        std::cout << temp->value << " ";
        temp = temp->pNext;
    }
    std::cout << std::endl;
}
