#pragma once
#include <string>
#include <iostream>
#include <vector>
class Item
{
protected:
	std::string _Name;
	int _Quantitiy;

public:
	Item(std::string& name, int quantitiy);
	
	~Item();
	std::string getName() const;
	int getQuantity() const;
	virtual void ItemSpec() const =0 ;
	
};

