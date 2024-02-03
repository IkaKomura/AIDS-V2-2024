#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#include "Sensor.h"

class TemperatureSensor : public Sensor {
  float lastTemperature;
public:
  void init() override;
  void update() override;
  float getTemperature() const { return lastTemperature; }
};

#endif
