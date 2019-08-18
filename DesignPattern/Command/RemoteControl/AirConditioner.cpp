//
// Created by 游志强 on 2019-08-11.
//

#include "AirConditioner.h"

void AirConditioner::on()
{
    std::cout << "AirConditioner on" << std::endl;
}

void AirConditioner::off()
{
    std::cout << "AirConditioner off" << std::endl;
}

void AirConditioner::SetTemperature(uint8_t TargetTemperature)
{
    std::cout << "Old tmperature: " << temperature << std::endl;
    temperature = TargetTemperature;
    std::cout << "Current tmperature: " << temperature << std::endl;
}