//
// Created by 游志强 on 2019-08-11.
//

#ifndef COMMAND_AIRCONDITIONER_H
#define COMMAND_AIRCONDITIONER_H

#include <iostream>

class AirConditioner {
public:
    void on();
    void off();
    void SetTemperature(uint8_t TargetTemperature);
private:
    uint8_t temperature = 25;
};


#endif //COMMAND_AIRCONDITIONER_H
