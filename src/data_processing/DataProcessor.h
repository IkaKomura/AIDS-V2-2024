#ifndef DataProcessor_h
#define DataProcessor_h

#include <vector>

class DataProcessor {
public:
    DataProcessor() = default;
    
    // Process a generic vector of sensor data and return processed data.
    // The specific processing logic can be defined within this method.
    std::vector<float> processSensorData(const std::vector<float>& sensorData);
};

#endif


class ExponentialSmoothingFilter {
    float alpha; // Smoothing factor between 0 and 1
    float smoothedValue;

public:
    ExponentialSmoothingFilter(float alpha, float initialValue)
        : alpha(alpha), smoothedValue(initialValue) {}

    float update(float newValue) {
        smoothedValue = alpha * newValue + (1 - alpha) * smoothedValue;
        return smoothedValue;
    }
};





// Path: src/data_processing/DataProcessor.h