#include <iostream>
#include <memory>

#include "CarFactor.h"

int main()
{

    std::unique_ptr<SimepCarFactor> factory(new SimepCarFactor());

    std::unique_ptr<Car> p1(factory->CreateCar(Cartype::AUDI));
    std::unique_ptr<Car> p2(factory->CreateCar(Cartype::BMW));

    p1->GetCarName();
    p2->GetCarName();

    return 0;
}
