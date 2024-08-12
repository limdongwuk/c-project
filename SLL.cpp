
#include "SLL.h"

SLL::SLL() :phead(nullptr)
{

}

SLL::~SLL()
{
    //��尡 nullptr�� �ƴҶ�����
    while (phead != nullptr)
    {
        //���� ��带 ����Ű�� �����͸� �ӽó�忡 ����
        node* temp = phead;
        phead = phead->pNext;

        delete temp;
    }
}

void SLL::Insert(int num)
{
    //���ο� ��带 �����
    node* newNode = new node(num);

    //��尡 ������ �����������
    if (phead == nullptr)
    {//���ο� ��带 ���� ����
        phead = newNode;
        return;
    }
    else
    {
        node* temp = phead;
        //��ȸ�� �����Ͱ� nullptr�� �ƴҶ����� ���鼭
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
    //���� ��带 ����Ű�� ������
    node* pNext = phead->pNext;
    //ù��° ��尡 �����Ϸ��� �����

    if (pCurrent->value == num)
    {
        phead = pNext; //phead�� ���� ���� �̵�
        delete pCurrent;
        return;
    }
    while (pNext->value != num)
    {
        pCurrent = pCurrent->pNext;
        //���� ��带 �״��� ���� �̵�
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
