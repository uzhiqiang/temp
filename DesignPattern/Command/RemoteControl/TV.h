//
// Created by 游志强 on 2019-08-11.
//

#ifndef COMMAND_TV_H
#define COMMAND_TV_H

#include <iostream>

class TV {
public:
    void on();
    void off();
    void SetChannel(uint8_t TargetChannelNumber);
    uint8_t GetChannel();
private:
    uint8_t channel = 0;
};


#endif //COMMAND_TV_H
