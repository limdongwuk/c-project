#include <iostream>
#include "01_AirConditioner.h"

using std::cout;
using std::endl;

int main()
{
	AirConditioner aircon;
	if (aircon.GetIsActivated())
		cout << "������ ����" << endl;
	else
		cout << "������ ����" << endl;

	return 0;
}