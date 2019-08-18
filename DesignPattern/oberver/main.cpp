#include <iostream>
#include <memory>
#include "WeatherStation/observer.h"
#include "WeatherStation/subject.h"

int main() {
    WeatherData wd;
    CurrentConditionDisplay ccd;
    PredictConditionDisplay pcd;
    wd.RegisterObserver(&ccd);
    wd.RegisterObserver(&pcd);
    wd.SetMeasurements(10,20,30);
    wd.RemoveObserver(&ccd);
    wd.SetMeasurements(11,21,31);
    std::cout << "Hello, World!" << std::endl;


    return 0;
}