#include "LDRSensor.h"
#include <Arduino.h>

#include "Config.h"

LDRSensor::LDRSensor(int pin) : pin(pin), lastLightIntensity(0) {}

void LDRSensor::init() {
    pinMode(pin, INPUT);
}

void LDRSensor::update() {
    int ldrValue = analogRead(pin);
    lastLightIntensity = map(ldrValue, 0, 4095, 0, 1000); // Assuming a 12-bit ADC resolution
}

int LDRSensor::getLightIntensity() const {
    return lastLightIntensity;
}

float LDRSensor::readData() {
    return static_cast<float>(lastLightIntensity);
}


// Path: src/sensors/LDRSensor.cpp  