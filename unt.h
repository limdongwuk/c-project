#pragma once
#include<iostream>
//virtual void Move()const = 0; //0�Ǵ� abstract ������ ���� �����Լ�
//���� �����Լ� : �����ϰ� �������� ����.
//���������Լ��� �Ѱ� �̻��� �����Ѵٸ� �߻�Ŭ������� ��.
// �߻�Ŭ���� : �ν��Ͻ�ȭ ��ų �� ����. �ٸ� Ŭ�������� ��ӹ޾ƾ� �ϴ� �⺻ �������̽��� �⺻ ������ �����ϴµ� ���
//������, �ڵ� ���뼺 ��������...
//Ư�� �Լ����� �ڽ�Ŭ������ ���� �����ǵ��� ������.


//�߻�Ŭ����
class Unit
{
protected:
    std::string name;
    int health;

public:
    Unit(const std::string& n, const int g);
    virtual~Unit();

public:
    //���� �����Լ�
    virtual void Attack()const = 0;
    virtual void TakeDamage(int damage)const = 0;
};

