#ifndef VibrationMotor_h
#define VibrationMotor_h

#include "Actuator.h"

class VibrationMotor : public Actuator {
  int pin, intensity = 0;
public:
  VibrationMotor(int pin);
  void activate() override;
  void deactivate() override;
  void setIntensity(int intensity);

};


#endif
