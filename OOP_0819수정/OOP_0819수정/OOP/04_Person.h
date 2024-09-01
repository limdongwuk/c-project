#pragma once
#include <iostream>
#include "04_AirConditioner.h"

class Person
{
private:
	std::string name;
	
public:
	Person(const std::string& name);
	Person(const Person& p);
	const std::string& GetName() const;
	void TurnOnAircon(AirConditioner& activate);
	void Emotion(const AirConditioner& activate);
	
};

