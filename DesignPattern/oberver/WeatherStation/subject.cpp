//
// Created by 游志强 on 2019-08-18.
//

#include "subject.h"


void WeatherData::RegisterObserver(Observer* obs)
{
    observers.push_back(obs);
}

void WeatherData::RemoveObserver(Observer* obs)
{
    auto it = std::find(observers.begin(), observers.end(), obs);
    if (it != observers.end()) {
        observers.erase(it);
    }
}

void WeatherData::NotifyObserver()
{
    for (auto it: observers) {
        it->update(temperature, humidity, pressure);
    }
}

void WeatherData::MeasurementsChanged()
{
    NotifyObserver();
}


void WeatherData::SetMeasurements(float temp, float humi, float pres)
{
    temperature = temp;
    humidity = humi;
    pressure = pres;
    MeasurementsChanged();
}