//
// Created by 游志强 on 2019-08-18.
//

#ifndef OBERVER_OBSERVER_H
#define OBERVER_OBSERVER_H


class Observer
{
public:
    virtual ~Observer() {}
    virtual void update(float temp, float humi, float pres) = 0;
};

class DisplayDevice
{
public:
    virtual void display() = 0;
};


class CurrentConditionDisplay : public Observer, public DisplayDevice
{
public:
    void update(float temp, float humi, float pres) override;
    void display() override;
private:
    float temperature;
    float humidity;
};

class PredictConditionDisplay : public Observer, public DisplayDevice
{
public:
    void update(float temp, float humi, float pres) override;
    void display() override;
private:
    float temperature;
    float humidity;
    float pressure;
};

#endif //OBERVER_OBSERVER_H
