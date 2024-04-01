// TemperatureSensor.cpp
#include "TemperatureSensor.h"

TemperatureSensor::TemperatureSensor(int id, int pin) 
    : Sensor(id), pin(pin), oneWire(pin), sensors(&oneWire), lastTemperature(0.0) {
    // Constructor body
}

void TemperatureSensor::init() {
    sensors.begin();
}

void TemperatureSensor::update() {
    sensors.requestTemperatures(); // Requests temperature reading from the sensor
    lastTemperature = sensors.getTempCByIndex(0); // Retrieves the temperature reading
}

float TemperatureSensor::readData() {
    return lastTemperature; // Returns the most recent temperature reading
}
