#include "ActuatorController.h"

void ActuatorController::addActuator(Actuator* actuator) {
    actuators.push_back(actuator);
}

void ActuatorController::controlActuators(const std::vector<float>& processedData) {
    // Implement your logic to control actuators based on processedData
    // Example:
    float threshold = 0.5;
    for (auto& actuator : actuators) {
        if (!processedData.empty() && processedData[0] > threshold) { // Define your own threshold or logic
            actuator->activate();
        } else {
            actuator->deactivate();
        }
    }
}
