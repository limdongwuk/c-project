#include <iostream>
#include "02_Fan.h"

using std::cout;
using std::endl;

int main()
{
	Fan fan;
	if (fan.GetIsActivated())
		cout << "��ǳ�� ����" << endl;
	else
		cout << "��ǳ�� ����" << endl;


	return 0;
}