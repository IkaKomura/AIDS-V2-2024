#include "Sensor.h"
#include <Arduino.h>

class LDRSensor : public Sensor {
    int pin;
    int lastLightIntensity;
public:
    LDRSensor(int id, int pin) : Sensor(id), pin(pin), lastLightIntensity(0) {}

    void init() override {
        pinMode(pin, INPUT);
    }

    void update() override {
        int ldrValue = analogRead(pin);
        lastLightIntensity = map(ldrValue, 0, 4095, 0, 1000); // Assuming a 12-bit ADC resolution
    }

    float readData() override {
        return static_cast<float>(lastLightIntensity);
    }

    int getLightIntensity() const {
        return lastLightIntensity;
    }
};

// Path: src/sensors/TemperatureSensor.cpp