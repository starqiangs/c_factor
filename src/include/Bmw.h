#pragma once

#include <string>

#include "Car.h"

class Bmw : public Car
{
public:
    Bmw(std::string name) : Car(name) {}
    void GetCarName()
    {
        std::cout << "Bmw:" << _name << std::endl;
    }
};