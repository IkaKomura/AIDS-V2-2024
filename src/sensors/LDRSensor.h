#ifndef LDRSensor_h
#define LDRSensor_h

#include "Sensor.h"

class LDRSensor : public Sensor {
    int pin;
    int lastLightIntensity;
public:
    LDRSensor(int pin);
    void init() override;
    void update() override;
    int getLightIntensity() const;
    float readData() override;
};

#endif


// Path: src/sensors/LDRSensor.h