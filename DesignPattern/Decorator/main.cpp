#include <iostream>
#include "Starbucks/Beverage.h"
#include "Starbucks/Condiment.h"

int main() {
    std::cout << "order 1: " << std::endl;
    HouseBlend hb;
    std::cout << hb.GetDescription() + ", cost: " << hb.cost() << std::endl;

    std::cout << std::endl;
    std::cout << "order 2: " << std::endl;
    Decaf decaf;
    Beverage *beverage = &decaf;
    Mocha ma(beverage);
    beverage = &ma;
    Mocha ma1(beverage);
    beverage = &ma1;
    Milk milk(beverage);
    beverage = &milk;
    std::cout << beverage->GetDescription() + ", cost: " << beverage->cost() << std::endl;
    return 0;
}