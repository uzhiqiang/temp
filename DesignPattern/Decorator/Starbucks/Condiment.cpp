//
// Created by 游志强 on 2019-08-11.
//

#include "Condiment.h"
#include <iostream>
Condiment::Condiment(Beverage *content) : beverage(content) {}

double Milk::cost() {
    return beverage->cost() + 0.1;

}
std::string Milk::GetDescription() {
    return beverage->GetDescription() + " Milk";
}


double Mocha::cost() {
    return beverage->cost() + 0.2;
}
std::string Mocha::GetDescription() {
    return beverage->GetDescription() + " Mocha";
}

double Soy::cost() {
    return beverage->cost() + 0.15;
}
std::string Soy::GetDescription() {
    return beverage->GetDescription() + " Soy";
}


double Whip::cost() {
    return beverage->cost() + 0.1;
}
std::string Whip::GetDescription() {
    return beverage->GetDescription() + " Whip";
}