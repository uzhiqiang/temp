//
// Created by 游志强 on 2019-08-11.
//

#ifndef COMMAND_COMMANDS_H
#define COMMAND_COMMANDS_H

#include <iostream>
#include <vector>
#include <stack>
#include "AirConditioner.h"
#include "Light.h"
#include "TV.h"

class Command {
public:
    virtual void execute();
    virtual void undo();
};

//light on and off commands
class LightOnCmd : public Command {
public:
    LightOnCmd(Light& CmdReceiver) : light(CmdReceiver) {}
    void execute() override;
    void undo() override;

private:
    Light& light;
};

//TV open and off commands
class TVCommand : public Command
{
public:
    TVCommand(TV& CmdReceiver) : tv(CmdReceiver) {}
    void execute() override;
    void undo() override;
private:
    TV& tv;
    std::stack<uint8_t> ChannelRecord;
};


//AirConditioner open and off commands
class AirConditionerCommand : public Command
{
public:
    AirConditionerCommand(AirConditioner* AirConditionerReceiver);
    void execute() override;
    void undo() override;
private:
    AirConditioner* airConditioner;
};

class PartiCommand : public Command
{
public:
    PartiCommand(std::vector<Command*>& cmmds);
    void execute() override;
    void undo() override;
private:
    std::vector<Command*> commands;
};

#endif //COMMAND_COMMANDS_H
