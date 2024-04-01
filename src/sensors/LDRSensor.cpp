#include "LDRSensor.h"
#include <Arduino.h>

LDRSensor::LDRSensor(int id, int pin) : Sensor(id), pin(pin), lastLightIntensity(0) {}

void LDRSensor::init() {
    pinMode(pin, INPUT);
}

void LDRSensor::update() {
    int ldrValue = analogRead(pin);
    lastLightIntensity = map(ldrValue, 0, 4095, 0, 1000); // Assuming a 12-bit ADC resolution
}

float LDRSensor::readData() {
    return static_cast<float>(lastLightIntensity);
}

int LDRSensor::getLightIntensity() const {
    return lastLightIntensity;
}
