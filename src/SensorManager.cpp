#include "SensorManager.h"

void SensorManager::addSensor(Sensor* sensor) {
  sensors.push_back(sensor);
}

void SensorManager::addActuator(Actuator* actuator) {
  actuators.push_back(actuator);
}

void SensorManager::update() {
  for (auto& sensor : sensors) {
    sensor->update();
  }
  // Assume first sensor and actuator for simplicity
  if (!sensors.empty() && !actuators.empty()) {
    processor.processData(*sensors[0], *actuators[0]);
  }
}
