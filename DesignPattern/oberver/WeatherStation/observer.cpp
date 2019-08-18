//
// Created by 游志强 on 2019-08-18.
//

#include "observer.h"
#include <iostream>

void CurrentConditionDisplay::update(float temp, float humi, float pres)
{
    temperature = temp;
    humidity = humi;
    display();
}

void CurrentConditionDisplay::display()
{
    std::cout << "CurrentCondition ==> " << "temperature: " << temperature << ", humidity: " << humidity << std::endl;
}

void PredictConditionDisplay::update(float temp, float humi, float pres)
{
    temperature = temp + 1;
    humidity = humi + 1;
    pressure = pres + 1;
    display();
}

void PredictConditionDisplay::display()
{
    std::cout << "PredictCondition ==> " << "temperature: " << temperature << ", humidity: " << humidity  << ", pressure: " << pressure << std::endl;

}