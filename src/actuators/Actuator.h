#ifndef Actuator_h
#define Actuator_h

class Actuator {
public:
  virtual void activate() = 0;
  virtual void deactivate() = 0;
};

#endif
