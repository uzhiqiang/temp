//
// Created by 游志强 on 2019-08-18.
//

#ifndef OBERVER_SUBJECT_H
#define OBERVER_SUBJECT_H

#include <memory>
#include <vector>
#include "observer.h"
class Subject
{
public:
    virtual ~Subject() {}
    virtual void RegisterObserver(Observer*) = 0;
    virtual void RemoveObserver(Observer*) = 0;
    virtual void NotifyObserver() = 0;

};

class WeatherData : public Subject {
public:
    void RegisterObserver(Observer* obs) override;
    void RemoveObserver(Observer* obs) override;
    void NotifyObserver() override;
    void MeasurementsChanged();
    void SetMeasurements(float temp, float humi, float pres);
private:
    std::vector<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;

};

#endif //OBERVER_SUBJECT_H
