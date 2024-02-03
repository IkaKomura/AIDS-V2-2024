#ifndef DataProcessor_h
#define DataProcessor_h

#include "sensors/Sensor.h"
#include "actuators/Actuator.h"

class DataProcessor {
public:
  void processData(Sensor& sensor, Actuator& actuator);
};

#endif
