#include "DataProcessor.h"

// Example implementation of processSensorData
std::vector<float> DataProcessor::processSensorData(const std::vector<float>& sensorData) {
    std::vector<float> processedData;
    processedData.reserve(sensorData.size());

    // Example processing: Normalize or scale sensor data
    for (const auto& data : sensorData) {
        // Simple normalization logic (as an example)
        // This could be replaced with any specific logic needed for your application
        float normalizedData = (data - 0) / (1023 - 0); // Assuming 10-bit ADC, adjust based on your sensor
        processedData.push_back(normalizedData);
    }

    return processedData;
}


// Path: src/data_processing/DataProcessor.cpp