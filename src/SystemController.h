#ifndef SystemController_h
#define SystemController_h

#include "sensors/SensorManager.h"
#include "actuators/ActuatorController.h"
#include "data_processing/DataProcessor.h"
#include "Config.h" // Include only if needed for the class implementation

class SystemController {
public:
    SystemController();
    void init();
    void run();

private:
    SensorManager sensorManager;
    ActuatorController actuatorController;
    DataProcessor dataProcessor;
};

#endif
