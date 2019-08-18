//
// Created by 游志强 on 2019-08-11.
// 调料
//

#ifndef DECORATOR_CONDIMENT_H
#define DECORATOR_CONDIMENT_H

#include <string>
#include "Beverage.h"


class Condiment : public Beverage
{
public:
    Condiment() = default;
    Condiment(Beverage *content);
    virtual std::string GetDescription() = 0;
protected:
    Beverage *beverage = nullptr;
};

//牛奶
class Milk : public Condiment
{
public:
    Milk(Beverage *content) : Condiment(content) {}
    double cost() override;
    std::string GetDescription() override;
};

//摩卡
class Mocha : public Condiment
{
public:
    Mocha(Beverage *content) : Condiment(content) {}
    double cost() override;
    std::string GetDescription() override;
};

//豆浆
class Soy : public Condiment
{
public:
    Soy(Beverage *content) : Condiment(content) {}
    double cost() override;
    std::string GetDescription() override;
};

//奶泡
class Whip : public Condiment
{
public:
    Whip(Beverage *content) : Condiment(content) {}
    double cost() override;
    std::string GetDescription() override;
};

#endif //DECORATOR_CONDIMENT_H
