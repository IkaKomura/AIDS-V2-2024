#ifndef SystemController_h
#define SystemController_h

#include "sensors/SensorManager.h"
#include "actuators/ActuatorController.h"
#include "data_processing/DataProcessor.h"

class SystemController {
    SensorManager sensorManager;
    ActuatorController actuatorController;
    DataProcessor dataProcessor;

public:
    SystemController();
    void init();
    void run();
};

#endif
