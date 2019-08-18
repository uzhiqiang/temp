//
// Created by 游志强 on 2019-08-11.
//

#include "Beverage.h"

Beverage::Beverage(std::string BeverageName) : description(BeverageName) {}

std::string Beverage::GetDescription()
{
    return description;
}

double HouseBlend::cost()
{
    return 0.89;
}

double DarkRoast::cost()
{
    return 0.99;
}

double Espresso::cost()
{
    return 1.99;
}

double Decaf::cost()
{
    return 1.05;
}