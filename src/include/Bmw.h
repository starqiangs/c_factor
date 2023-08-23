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

class BmwLight : public Light
{
public:
    void PrintLight()
    {
        std::cout << "create BMW light" << std::endl;
    }
};