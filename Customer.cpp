#include "Customer.h"
#include <iostream>
#include <vector>
int Customer::wantBreadNum()
{
    srand(time(NULL));
    _Request = rand() % 3 + 1;
    return _Request;
}

void Customer::ment()
{
    srand(time(NULL));
    _ment = rand() % 2;
    switch (_ment)
    {
    case 0:
        std::cout << "���" << wantBreadNum() << "�� �ּ���~" << std::endl;
    case 1:
        std::cout << "���" << wantBreadNum() << "�� �޶���~" << std::endl;
    }

}
