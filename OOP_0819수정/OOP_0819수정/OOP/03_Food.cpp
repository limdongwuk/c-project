#include "03_Food.h"

Food::Food(const std::string& name) : name(name)
{
	std::cout << name << "이(가) 준비되었습니다." << std::endl;
}

