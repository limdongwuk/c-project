#pragma once
#include<iostream>
//�θ� Ŭ����
class Vehicle
{
protected:
    std::string name;
public:
    Vehicle(std::string& n);
    Vehicle() {};

   virtual~Vehicle(); //��ü�� �ùٸ��� ������ �ɼ��ֵ��� �Ҹ��� �տ� virtual
   //�������� Ȱ���Ҷ� ��ü�� �ùٸ��� �Ҹ�ǵ���  virtual�� ���������� �⺻Ŭ������ �Ҹ��ڸ� ȣ��ǰ� �ڽ�Ŭ������ �Ҹ��ڴ� ȣ����� �ʴ´�.
   //�Ⱦ��� �⺻Ŭ������ �Ҹ��ڸ�ȣ��� //�ڽ�Ŭ������ �����Ҵ��Ѱ� ������ �Ҹ��ڰ� ȣ���� �Ǿ�� �ϹǷ� 

    virtual void Move()const; //0�Ǵ� abstract ������ ���� �����Լ�

};

