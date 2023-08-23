#pragma once

#include <string>

#include "Car.h"

class Audi : public Car
{
public:
    Audi(std::string name) : Car(name) {}
    void GetCarName()
    {
        std::cout << "Audi:" << _name << std::endl;
    }
};