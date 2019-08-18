//
// Created by 游志强 on 2019-08-11.
// 饮料
//

#ifndef DECORATOR_BEVERAGE_H
#define DECORATOR_BEVERAGE_H

#include <string>


class Beverage
{
public:
    Beverage() = default;
    Beverage(std::string BeverageName);
    virtual std::string GetDescription();
    virtual double cost() = 0;
protected:
    std::string description = "";
};



//综合
class HouseBlend : public Beverage
{
public:
    HouseBlend() : Beverage("HouseBlend") {}
    double cost() override;
};

//深焙咖啡
class DarkRoast : public Beverage
{
public:
    DarkRoast() : Beverage("DarkRoast") {}
    double cost() override;
};

//浓缩咖啡
class Espresso : public Beverage
{
public:
    Espresso() : Beverage("Espresso") {}
    double cost() override;
};

//低咖啡因
class Decaf : public Beverage
{
public:
    Decaf() : Beverage("Decaf") {}
    double cost() override;
};
#endif //DECORATOR_BEVERAGE_H
