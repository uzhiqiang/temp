//
// Created by 游志强 on 2019-08-17.
// 鸭子的飞行行为类
//

#ifndef STRATEGY_FLYBEHAVIOR_H
#define STRATEGY_FLYBEHAVIOR_H


class FlyBehavior
{
public:
    virtual void fly() = 0;
};

//带有翅膀的鸭子的飞行动作
class FlyWithWings : public FlyBehavior
{
public:
    void fly() override;
};

//坐着火箭飞
class FlyWithRocket : public FlyBehavior
{
public:
    void fly() override;
};

//不会飞
class FlyNoWay : public FlyBehavior
{
public:
    void fly() override;
};

#endif //STRATEGY_FLYBEHAVIOR_H
