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

    std::unique_ptr<BmwFactor> bmw_factor(new BmwFactor());
    std::unique_ptr<AudiFactor> adui_factor(new AudiFactor());
    std::unique_ptr<Car> car1(bmw_factor->CreateCar("X2"));
    std::unique_ptr<Car> car2(adui_factor->CreateCar("A8"));
    car1->GetCarName();
    car2->GetCarName();



    return 0;
}
