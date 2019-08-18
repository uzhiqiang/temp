//
// Created by 游志强 on 2019-08-17.
//

#ifndef STRATEGY_DUCK_H
#define STRATEGY_DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
    void PerformSwim();
    virtual void display() = 0;
    void PerformFly();
    void PerformQuack();
    void SetFlyBehavior(FlyBehavior* fb);
    void SetQuackBehavior(QuackBehavior* qb);
private:
    FlyBehavior* flyBehavior = nullptr;
    QuackBehavior* quackBehavior = nullptr;
};

class MallardDuck : public Duck
{
public:
    void display() override;
};

class YellowDuck : public Duck {
public:
    void display() override;
};

#endif //STRATEGY_DUCK_H
