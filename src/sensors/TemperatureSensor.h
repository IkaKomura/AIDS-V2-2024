#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#include "Sensor.h"

class TemperatureSensor : public Sensor {
public:
  void init() override;
  void update() override;
};

#endif
