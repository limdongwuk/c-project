#pragma once
#include <iostream>


class Person
{
private:
	std::string name;
public:
	Person(const std::string& name);
	Person(const Person& p);
	const std::string& GetName() const;
};

