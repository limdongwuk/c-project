#pragma once
class AirConditioner
{
private:
	bool isActivated; // true: ����, false: ����

public:
	AirConditioner();
	bool GetIsActivated() const;
	void SetActivate(bool activate);

};
