cmake_minimum_required(VERSION 3.14)
project(oberver)

set(CMAKE_CXX_STANDARD 11)

add_executable(oberver main.cpp WeatherStation/subject.h WeatherStation/observer.cpp WeatherStation/observer.h WeatherStation/subject.cpp)