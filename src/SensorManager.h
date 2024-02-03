#ifndef SensorManager_h
#define SensorManager_h

#include <vector>
#include "sensors/Sensor.h"
#include "Actuators/Actuator.h"
#include "DataProcessor.h"

class SensorManager {
  std::vector<Sensor*> sensors;
  std::vector<Actuator*> actuators;
  DataProcessor processor;
public:
  void addSensor(Sensor* sensor);
  void addActuator(Actuator* actuator);
  void update();
};

#endif
