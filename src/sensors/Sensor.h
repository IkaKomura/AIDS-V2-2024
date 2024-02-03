#ifndef Sensor_h
#define Sensor_h

class Sensor {
public:
  virtual void init() = 0;
  virtual void update() = 0;
};

#endif
