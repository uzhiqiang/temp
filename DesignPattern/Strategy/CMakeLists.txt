cmake_minimum_required(VERSION 3.14)
project(Strategy)

set(CMAKE_CXX_STANDARD 11)

add_executable(Strategy main.cpp Duck/FlyBehavior.cpp Duck/FlyBehavior.h Duck/QuackBehavior.cpp Duck/QuackBehavior.h Duck/Duck.cpp Duck/Duck.h)