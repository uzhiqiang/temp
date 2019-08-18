//
// Created by 游志强 on 2019-08-11.
//

#include "TV.h"

void TV::on()
{
    std::cout << "TV on" << std::endl;
}

void TV::off()
{
    std::cout << "TV off" << std::endl;
}

void TV::SetChannel(uint8_t TargetChannelNumber)
{
    std::cout << "Old channel: " << channel << std::endl;
    channel = TargetChannelNumber;
    std::cout << "Current channel: " << channel << std::endl;

}

uint8_t TV::GetChannel()
{
    return channel;
}