#include "TemperatureSensor.h"
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into pin 2 on the Arduino
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void TemperatureSensor::init() {
  sensors.begin(); // Start the DallasTemperature library
}

void TemperatureSensor::update() {
  sensors.requestTemperatures(); // Send the command to get temperatures
  float temperature = sensors.getTempCByIndex(0); // Read temperature in Celsius
  this->lastTemperature = temperature; // Store the latest temperature reading
}
