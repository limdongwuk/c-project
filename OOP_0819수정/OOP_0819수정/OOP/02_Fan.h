#pragma once
#include "02_Enums.h" // enum class가 선언되어있느 헤더파일 참조

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

