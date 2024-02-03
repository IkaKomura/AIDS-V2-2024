#ifndef VibrationMotor_h
#define VibrationMotor_h

#include "Actuator.h"

class VibrationMotor : public Actuator {
  int pin;
public:
  VibrationMotor(int pin);
  void activate() override;
  void deactivate() override;
};

#endif
