#include <iostream>
#include "02_Fan.h"

using std::cout;
using std::endl;

int main()
{
	Fan fan;
	if (fan.GetIsActivated())
		cout << "¼±Ç³±â ÄÑÁü" << endl;
	else
		cout << "¼±Ç³±â ²¨Áü" << endl;


	return 0;
}