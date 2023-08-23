#pragma once

#include <iostream>

#include "Bmw.h"
#include "Adui.h"

enum Cartype
{
    AUDI,
    BMW,
};

// 不符合开闭原则 里面的内容越增加越多 不封闭
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

// 符合软件设计开闭原则
class FactorMethod
{
public:
    virtual Car *CreateCar(std::string name) = 0;
    virtual Light *CreateLight() = 0;
};

class BmwFactor : public FactorMethod
{
public:
    Car *CreateCar(std::string name)
    {
        return new Bmw(name);
    }
    Light *CreateLight()
    {
        return new BmwLight();
    }
};

class AudiFactor : public FactorMethod
{
public:
    Car *CreateCar(std::string name)
    {
        return new Audi(name);
    }
    Light *CreateLight()
    {
        return new AudiLight();
    }
};