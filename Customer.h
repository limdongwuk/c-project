#pragma once

#include <iostream>
#include <thread>
#include <functional>
#include <Windows.h>


class Customer
{
private:
    int _Request;
    int _ment;
    
public:
    int wantBreadNum();
    void ment();
    void Tickment();
    void MoveCursor(int x, int y);
    bool run = true;
};

