#ifndef LED_h
#define LED_h

#include "Actuator.h"

class LED : public Actuator {
  int pin;
public:
  LED(int pin);
  void activate() override;
  void deactivate() override;
};

#endif

// Path: src/actuators/LED.h