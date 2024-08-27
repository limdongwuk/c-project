#include "02_Fan.h"
#include <iostream>

Fan::Fan()
{
	isActivated = false;
	fanSpeed = FanSpeed::Off;
}

bool Fan::GetIsActivated() const
{
	return isActivated;
}

void Fan::SetActivate(bool activate)
{
	isActivated = activate;
}
