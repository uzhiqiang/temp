//
// Created by 游志强 on 2019-08-17.
//

#include "FlyBehavior.h"
#include <iostream>

void FlyWithWings::fly()
{
    std::cout << "fly with wings." << std::endl;
}

void FlyWithRocket::fly()
{
    std::cout << "fly with rocket." << std::endl;
}

void FlyNoWay::fly()
{
    std::cout << "fly no way." << std::endl;
}