#ifndef ActuatorController_h
#define ActuatorController_h

#include "Actuator.h"
#include <vector>

class ActuatorController {
    std::vector<Actuator*> actuators; // List of actuators

public:
    void addActuator(Actuator* actuator); // Add an actuator to the controller
    void controlActuators(const std::vector<float>& processedData); // Control actuators based on processed data
};

#endif
