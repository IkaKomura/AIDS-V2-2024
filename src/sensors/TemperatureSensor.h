// TemperatureSensor.h
#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#include "Sensor.h"
#include <OneWire.h>
#include <DallasTemperature.h>

class TemperatureSensor : public Sensor {
    int pin;
    float lastTemperature;
    OneWire oneWire;
    DallasTemperature sensors;

public:
    TemperatureSensor(int id, int pin);
    void init() override;
    void update() override;
    float readData() override;
};

#endif
