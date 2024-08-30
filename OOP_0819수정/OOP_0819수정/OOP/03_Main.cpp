#include "03_Food.h"
#include "03_Person.h"
#include <iostream>
#include "03_Bowl.h"


int main()
{
	Person p;
#pragma region 1번문제 답안 작성란
	std::cout << "================ 1번 문제 =================" << std::endl;
	/*Food* f1 = new Food("돈까스");
	p.EatFood(*f1);*/
	//풀긴풀었는데 food.name이 가능한게 이해안됨 그리고 이런걸 생각해서 사용하지 못할거같음..
#pragma endregion

#pragma region 2번 문제
	std::cout << "================ 2번 문제 =================" << std::endl;
	/*Food f2("라면");
	std::cout << f2.name << std::endl;
	p.EatFood(f2);
	std::cout << f2.name << std::endl;*/

#pragma endregion


#pragma region 3번 문제
	std::cout << "================ 3번 문제 =================" << std::endl;
	//Food f3("부대찌개");
	//Bowl b1(f3); //그릇 b1에 부대찌개를 담는다.
	//Bowl b2(f3); //그릇 b2에 부대찌개를 담는다.
	//
	//std::cout << "그릇 b1에 " << b1.food.name << "가 있습니다." << std::endl;
	//std::cout << "그릇 b2에 " << b2.food.name << "가 있습니다." << std::endl;
	//std::cout << "그릇 b1에 담긴 부대찌개를 먹습니다." << std::endl;
	//
	//p.EatFood(b1.food);
	//
	//std::cout << "그릇 b1에 " << b1.food.name << "가 있습니다." << std::endl;
	//std::cout << "그릇 b2에 " << b2.food.name << "가 있습니다." << std::endl;

	//깊은복사를 하면 될거같지만 못하겠습니다 
#pragma endregion




#pragma region 4번 문제 (주석을 해제 후 실행하세요)
	std::cout << "================ 4번 문제 =================" << std::endl;
   Food f2 = *(p.MakeFood("김치찌개"));
   std::cout << "맛있는 " << f2.name << std::endl;

   
    //MakeFood 함수에 delete& myfood로 해제시켜주거나
   //food*타입을 food타입으로 변경하거나 
#pragma endregion

	
	return 0;
}

