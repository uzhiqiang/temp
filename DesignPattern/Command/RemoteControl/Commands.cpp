//
// Created by 游志强 on 2019-08-11.
//

#include "Commands.h"

void LightOnCmd::execute()
{
    light.on();
}
void LightOnCmd::undo()
{
    light.on();
}

void TVCommand::execute()
{
    tv.on();
    ChannelRecord.push(tv.GetChannel());
    tv.SetChannel(10);
}

void TVCommand::undo()
{
    tv.SetChannel(PreviousChannel);
}
