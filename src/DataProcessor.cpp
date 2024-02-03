#include <Arduino.h>
#include "DataProcessor.h"
#include "sensors/TemperatureSensor.h"
#include "actuators/VibrationMotor.h"

void DataProcessor::processData(Sensor& sensor, Actuator& actuator) {
  // Ensure the sensor is a TemperatureSensor and the actuator is a VibrationMotor
  TemperatureSensor* tempSensor = dynamic_cast<TemperatureSensor*>(&sensor);
  VibrationMotor* vibMotor = dynamic_cast<VibrationMotor*>(&actuator);

  if (tempSensor && vibMotor) {
    float temperature = tempSensor->getTemperature();
    // Example logic: Increase heartbeat intensity with temperature
    int intensity = map(temperature, 20, 40, 128, 255); // Map temp from 20-40°C to intensity 128-255
    intensity = constrain(intensity, 128, 255); // Ensure intensity stays within bounds
    vibMotor->setIntensity(intensity); // Set the intensity of the vibration motor
  }
}
