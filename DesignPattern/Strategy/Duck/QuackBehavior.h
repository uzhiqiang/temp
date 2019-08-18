//
// Created by 游志强 on 2019-08-17.
// 鸭子的嘎嘎叫行为的类
//

#ifndef STRATEGY_QUACKBEHAVIOR_H
#define STRATEGY_QUACKBEHAVIOR_H


class QuackBehavior
{
public:
    virtual void quack() = 0;
};

//呱呱叫
class Quack : public QuackBehavior
{
public:
    void quack() override;
};

//吱吱叫
class Squeak : public QuackBehavior
{
public:
    void quack() override;
};

//不叫
class MuteQuack : public QuackBehavior
{
public:
    void quack() override;
};

#endif //STRATEGY_QUACKBEHAVIOR_H
