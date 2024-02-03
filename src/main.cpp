#include <Arduino.h>
#include "SensorManager.h"
#include "sensors/TemperatureSensor.h"
#include "actuators/VibrationMotor.h"

// Create instances of your sensors and actuators
TemperatureSensor tempSensor;
VibrationMotor vibMotor(5); // Assuming the motor is connected to pin 5

// Create an instance of the SensorManager
SensorManager manager;

void setup() {
  Serial.begin(115200);
  // Initialize sensors and actuators
  tempSensor.init();
  // vibMotor.init(); // Ensure you have an init method or remove if not needed

  // Register sensors and actuators with the manager
  manager.addSensor(&tempSensor);
  manager.addActuator(&vibMotor);

  Serial.println("System initialized.");
}

void loop() {
  // The SensorManager's update method is called to process sensor readings and actuate accordingly
  manager.update();

  // Consider adding a non-blocking delay or a specific update rate control if necessary
  delay(1000); // Example: Update every second. Adjust based on your requirements.
}
