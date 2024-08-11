#include "Item.h"

Item::Item(std::string& name, int quantity) : _Name(name), _Quantitiy(quantity)
{
}

Item::~Item()
{
}


std::string Item::getName() const
{
		return _Name;
}

int Item::getQuantity() const
{
	return _Quantitiy;
}






