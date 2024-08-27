#include "01_AirConditioner.h"

bool AirConditioner::GetIsActivated() const
{
	return isActivated;
}

void AirConditioner::SetActivate(bool activate)
{
	isActivated = activate;
}

