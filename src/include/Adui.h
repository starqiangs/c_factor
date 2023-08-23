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

class AudiLight : public Light
{
public:
    void PrintLight()
    {
        std::cout << "create Audi light" << std::endl;
    }
};