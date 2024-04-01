#include "Sensor.h"
#include <OneWire.h>
#include <DallasTemperature.h>

class TemperatureSensor : public Sensor {
    int pin;
    float lastTemperature;
    OneWire oneWire;
    DallasTemperature sensors;

public:
    TemperatureSensor(int id, int pin)
        : Sensor(id), pin(pin), oneWire(pin), sensors(&oneWire), lastTemperature(0.0) {}

    void init() override {
        sensors.begin();
    }

    void update() override {
        sensors.requestTemperatures();
        lastTemperature = sensors.getTempCByIndex(0);
    }

    float readData() override {
        return lastTemperature;
    }
};

// Path: src/sensors/TemperatureSensor.cpp