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

// �� ������ Ǯ���� �ش� ������ ������ ������ ������ �ּ��� ���μ���.
#pragma region 1�� ����
	BigObject* b = new BigObject();
	std::vector<BigObject> v;
	v.push_back(*b);
	std::cout << v[0].c[1][0];
	delete b;
#pragma endregion

#pragma region 2�� ����
	// MediumObject m[1024];

#pragma endregion

#pragma region 3�� ����
	//SmallObject s[1024][1024];

#pragma endregion

#pragma region 4�� ����

#pragma endregion
	return 0;
}