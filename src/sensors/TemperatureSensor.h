// TemperatureSensor.h
#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#include "Sensor.h"
#include <OneWire.h>
#include <DallasTemperature.h>

class TemperatureSensor : public Sensor {
    int pin; // Add a member variable to store the pin number
    float lastTemperature;
    OneWire oneWire; // Move OneWire instance here
    DallasTemperature sensors; // Move DallasTemperature instance here

public:
    TemperatureSensor(int pin); // Add a constructor that accepts a pin number
    void init() override;
    void update() override;
    float readData() override;
};

#endif

// Path: src/sensors/TemperatureSensor.h
