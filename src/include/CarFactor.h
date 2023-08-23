#pragma once

#include <iostream>

#include "Bmw.h"
#include "Adui.h"

enum Cartype
{
    AUDI,
    BMW,
};

class SimepCarFactor
{
public:
    Car *CreateCar(Cartype ct)
    {
        switch (ct)
        {
        case Cartype::AUDI:
            return new Audi("A6");
            break;
        case Cartype::BMW:
            return new Bmw("X1");
            break;
        default:
            std::cerr << "param error!" << std::endl;
            break;
        }
        return nullptr;
    }
};