#pragma once

#include <iostream>
#include <thread>
#include <functional>
#include <Windows.h>


class Customer
{
private:
    int _Request = 0;
    int _ment;

public:
    void generateBreadNum();
    int wantBreadNum() const;
    void ment();

    void MoveCursor(int x, int y);
    bool run = true;

};

