#include <iostream>
#include "01_AirConditioner.h"

using std::cout;
using std::endl;

int main()
{
	AirConditioner aircon;
	if (aircon.GetIsActivated())
		cout << "¿¡¾îÄÁ ÄÑÁü" << endl;
	else
		cout << "¿¡¾îÄÁ ²¨Áü" << endl;

	return 0;
}