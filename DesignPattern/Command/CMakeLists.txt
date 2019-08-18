cmake_minimum_required(VERSION 3.14)
project(Command)

set(CMAKE_CXX_STANDARD 11)

add_executable(Command main.cpp RemoteControl/Light.cpp RemoteControl/Light.h RemoteControl/AirConditioner.cpp RemoteControl/AirConditioner.h RemoteControl/TV.cpp RemoteControl/TV.h RemoteControl/Window/Window.cpp RemoteControl/Window/Window.h RemoteControl/Commands.cpp RemoteControl/Commands.h)