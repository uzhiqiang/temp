//
// Created by 游志强 on 2019-08-17.
//

#include "QuackBehavior.h"
#include <iostream>

void Quack::quack()
{
    std::cout << "quack." << std::endl;
}

void Squeak::quack()
{
    std::cout << "squeak." << std::endl;
}

void MuteQuack::quack()
{
    std::cout << "mute quack." << std::endl;
}