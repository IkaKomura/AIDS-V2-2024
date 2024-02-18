#include "SystemController.h"
#include "sensors/LDRSensor.h"
#include "sensors/TemperatureSensor.h"
#include "actuators/VibrationMotor.h"

SystemController::SystemController() {
    // Constructor body
    // You can initialize member variables here if needed
}

void SystemController::init() {
    // Initialize Sensors
    sensorManager.addSensor(new LDRSensor(LDR_PIN)); // Ensure LDR_PIN is defined in Config.h or elsewhere
    sensorManager.addSensor(new TemperatureSensor(TEMP_SENSOR_PIN)); // Ensure TEMP_SENSOR_PIN is defined

    // Initialize Actuators
    actuatorController.addActuator(new VibrationMotor(VIB_MOTOR_PIN)); // Ensure VIB_MOTOR_PIN is defined

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
