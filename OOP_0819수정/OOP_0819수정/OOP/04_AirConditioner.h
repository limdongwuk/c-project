#pragma once
class AirConditioner
{
private:
	bool isActivated; // true: ÄÑÁü, false: ²¨Áü

public:
	AirConditioner();
	bool GetIsActivated() const;
	void SetActivate(bool activate);

};
