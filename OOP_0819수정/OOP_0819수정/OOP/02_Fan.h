#pragma once
#include "02_Enums.h" // enum class�� ����Ǿ��ִ� ������� ����

class Fan
{
private:
	FanSpeed fanSpeed;
	bool isActivated;

public:
	Fan();
	bool GetIsActivated() const;
	void SetActivate(bool activate);
	
};

