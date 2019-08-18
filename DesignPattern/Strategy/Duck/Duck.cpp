//
// Created by 游志强 on 2019-08-17.
//

#include "Duck.h"
#include <iostream>

void Duck::PerformSwim()
{
    std::cout << "swimming in summer is cool." << std::endl;
}

void Duck::PerformFly()
{
    flyBehavior->fly();
}

void Duck::PerformQuack()
{
    quackBehavior->quack();
}

void Duck::SetFlyBehavior(FlyBehavior* fb)
{
    flyBehavior = fb;
}
void Duck::SetQuackBehavior(QuackBehavior* qb)
{
    quackBehavior = qb;
}


void MallardDuck::display()
{
    std::cout << "High, I'm a mallar duck." << std::endl;
}

void YellowDuck::display()
{
    std::cout << "Hello, I'm small yellow duck, I'm a crazy gay ^_^." << std::endl;
}