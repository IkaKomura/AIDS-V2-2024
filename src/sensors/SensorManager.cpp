#include "SensorManager.h"
#include "Sensor.h"

void SensorManager::addSensor(Sensor* sensor) {
    sensors.push_back(sensor);
}

void SensorManager::updateSensors() {
    for (auto& sensor : sensors) {
        sensor->update();
    }
}

std::vector<float> SensorManager::collectSensorData() {
    std::vector<float> sensorData;
    for (auto& sensor : sensors) {
        sensorData.push_back(sensor->readData());
    }
    return sensorData;
}


// Path: src/sensors/SensorManager.cpp