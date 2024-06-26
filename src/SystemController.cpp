#include "SystemController.h"
#include "sensors/LDRSensor.h"
#include "sensors/TemperatureSensor.h"
#include "actuators/VibrationMotor.h"
#include "actuators/LED.h"
#include "Config.h" 


SystemController::SystemController() {
    // Constructor body
    // You can initialize member variables here if needed
}

void SystemController::init() {
    // Initialize Sensors
    sensorManager.addSensor(new LDRSensor(1, LDR_PIN)); // Ensure LDR_PIN is defined in Config.h or elsewhere
    sensorManager.addSensor(new TemperatureSensor(2, TEMP_SENSOR_PIN)); // Ensure TEMP_SENSOR_PIN is defined

    // Initialize Actuators
    actuatorController.addActuator(new VibrationMotor(VIB_MOTOR_PIN)); // Ensure VIB_MOTOR_PIN is defined
    actuatorController.addActuator(new LED(LED_PIN)); // Add LED to the system


    // Other initialization if needed
}

void SystemController::run() {
    // Main loop or operation of the system
    // This example updates sensors, processes data, and controls actuators accordingly
    sensorManager.updateSensors();
    auto sensorData = sensorManager.collectSensorData();
    auto processedData = dataProcessor.processSensorData(sensorData);
    actuatorController.controlActuators(processedData);
}
// Path: src/sensors/LDRSensor.cpp