cmake_minimum_required(VERSION 3.14)
project(Decorator)

set(CMAKE_CXX_STANDARD 11)

add_executable(Decorator main.cpp Starbucks/Beverage.cpp Starbucks/Beverage.h Starbucks/Condiment.cpp Starbucks/Condiment.h)