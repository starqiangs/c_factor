#pragma once

#include <string>
#include <iostream>

class Car
{
public:
    Car(std::string name) : _name(name) {}
    virtual void GetCarName() = 0;

protected:
    std::string _name;
};