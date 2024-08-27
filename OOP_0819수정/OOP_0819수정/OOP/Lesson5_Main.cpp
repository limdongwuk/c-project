#include "Lesson5_BigObject.h"
#include "Lesson5_SmallObject.h"
#include "Lesson5_MediumObject.h"
#include <vector>
#include <iostream>

typedef Lesson5_BigObject BigObject;
typedef Lesson5_MediumObject MediumObject;
typedef Lesson5_SmallObject SmallObject;

int main()
{

// 각 문제를 풀때는 해당 문제를 제외한 나머지 문제의 주석은 놔두세요.
#pragma region 1번 문제
	BigObject* b = new BigObject();
	std::vector<BigObject> v;
	v.push_back(*b);
	std::cout << v[0].c[1][0];
	delete b;
#pragma endregion

#pragma region 2번 문제
	// MediumObject m[1024];

#pragma endregion

#pragma region 3번 문제
	//SmallObject s[1024][1024];

#pragma endregion

#pragma region 4번 문제

#pragma endregion
	return 0;
}