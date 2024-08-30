#include "04_AirConditioner.h"

AirConditioner::AirConditioner() : isActivated(false)
{
}

bool AirConditioner::GetIsActivated() const
{
	return isActivated;
}

void AirConditioner::SetActivate(bool activate)
{
	isActivated = activate;
}

