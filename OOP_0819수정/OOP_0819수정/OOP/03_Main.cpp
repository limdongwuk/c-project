#include "03_Food.h"
#include "03_Person.h"
#include <iostream>
#include "03_Bowl.h"


int main()
{
	Person p;
#pragma region 1������ ��� �ۼ���
	std::cout << "================ 1�� ���� =================" << std::endl;
	/*Food* f1 = new Food("���");
	p.EatFood(*f1);*/
	//Ǯ��Ǯ���µ� food.name�� �����Ѱ� ���ؾȵ� �׸��� �̷��� �����ؼ� ������� ���ҰŰ���..
#pragma endregion

#pragma region 2�� ����
	std::cout << "================ 2�� ���� =================" << std::endl;
	/*Food f2("���");
	std::cout << f2.name << std::endl;
	p.EatFood(f2);
	std::cout << f2.name << std::endl;*/

#pragma endregion


#pragma region 3�� ����
	std::cout << "================ 3�� ���� =================" << std::endl;
	//Food f3("�δ��");
	//Bowl b1(f3); //�׸� b1�� �δ���� ��´�.
	//Bowl b2(f3); //�׸� b2�� �δ���� ��´�.
	//
	//std::cout << "�׸� b1�� " << b1.food.name << "�� �ֽ��ϴ�." << std::endl;
	//std::cout << "�׸� b2�� " << b2.food.name << "�� �ֽ��ϴ�." << std::endl;
	//std::cout << "�׸� b1�� ��� �δ���� �Խ��ϴ�." << std::endl;
	//
	//p.EatFood(b1.food);
	//
	//std::cout << "�׸� b1�� " << b1.food.name << "�� �ֽ��ϴ�." << std::endl;
	//std::cout << "�׸� b2�� " << b2.food.name << "�� �ֽ��ϴ�." << std::endl;

	//�������縦 �ϸ� �ɰŰ����� ���ϰڽ��ϴ� 
#pragma endregion




#pragma region 4�� ���� (�ּ��� ���� �� �����ϼ���)
	std::cout << "================ 4�� ���� =================" << std::endl;
   Food f2 = *(p.MakeFood("��ġ�"));
   std::cout << "���ִ� " << f2.name << std::endl;

   
    //MakeFood �Լ��� delete& myfood�� ���������ְų�
   //food*Ÿ���� foodŸ������ �����ϰų� 
#pragma endregion

	
	return 0;
}

