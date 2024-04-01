#ifndef LDRSensor_h
#define LDRSensor_h

#include "Sensor.h"

class LDRSensor : public Sensor {
    int pin;
    int lastLightIntensity;
public:
    LDRSensor(int id, int pin);
    void init() override;
    void update() override;
    float readData() override;
    int getLightIntensity() const;
};

#endif
