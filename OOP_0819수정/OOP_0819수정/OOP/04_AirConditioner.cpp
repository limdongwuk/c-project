#include "04_AirConditioner.h"

bool AirConditioner::GetIsActivated() const
{
	return isActivated;
}

void AirConditioner::SetActivate(bool activate)
{
	isActivated = activate;
}

AirConditioner::AirConditioner() : isActivated(false)
{
}
