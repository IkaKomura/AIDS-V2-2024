// TemperatureSensor.cpp
#include "TemperatureSensor.h"

TemperatureSensor::TemperatureSensor(int pin) 
    : pin(pin), oneWire(pin), sensors(&oneWire), lastTemperature(0.0) {
    // Constructor body, if needed
}

void TemperatureSensor::init() {
    sensors.begin(); // Initialize the DallasTemperature library
}

void TemperatureSensor::update() {
    sensors.requestTemperatures(); // Request temperatures
    lastTemperature = sensors.getTempCByIndex(0); // Read the temperature in Celsius
}

float TemperatureSensor::readData() {
    return lastTemperature; // Return the last read temperature
}
