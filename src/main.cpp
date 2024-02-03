
#include <Arduino.h>
#include "sensors/TemperatureSensor.h"
#include "actuators/VibrationMotor.h"
#include "SensorManager.h"

TemperatureSensor tempSensor;
VibrationMotor vibMotor(5); // Assuming pin 5 for the motor

SensorManager manager;

void setup() {
  Serial.begin(115200);
  tempSensor.init();
  manager.addSensor(&tempSensor);
  manager.addActuator(&vibMotor);
}

void loop() {
  manager.update();
  delay(100); // Adjust based on your needs
}
