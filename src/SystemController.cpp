#ifndef SystemController_h
#define SystemController_h

#include "sensors/SensorManager.h"
#include "actuators/ActuatorController.h"
#include "data_processing/DataProcessor.h"
#include "Config.h"

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

#include "SystemController.h"
#include "sensors/LDRSensor.h"
#include "sensors/TemperatureSensor.h"
#include "actuators/VibrationMotor.h"

SystemController::SystemController() {}

void SystemController::init() {
    // Initialize Sensors
    sensorManager.addSensor(new LDRSensor(LDR_PIN)); // Define LDR_PIN according to your hardware setup
    sensorManager.addSensor(new TemperatureSensor(TEMP_SENSOR_PIN)); // Define TEMP_SENSOR_PIN

    // Initialize Actuators
    actuatorController.addActuator(new VibrationMotor(VIB_MOTOR_PIN)); // Define VIB_MOTOR_PIN

    // Other initialization if needed
}

void SystemController::run() {
    while (true) {
        // Update all sensors
        sensorManager.updateSensors();
        
        // Collect sensor data
        auto sensorData = sensorManager.collectSensorData();
        
        // Process sensor data
        auto processedData = dataProcessor.processSensorData(sensorData);
        
        // Control actuators based on processed data
        actuatorController.controlActuators(processedData);
    }
}
