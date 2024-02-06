#ifndef SensorManager_h
#define SensorManager_h

#include <vector>

class Sensor; // Forward declaration of Sensor class

class SensorManager {
    std::vector<Sensor*> sensors;

public:
    SensorManager() = default;
    void addSensor(Sensor* sensor);
    void updateSensors();
    std::vector<float> collectSensorData();
};

#endif
