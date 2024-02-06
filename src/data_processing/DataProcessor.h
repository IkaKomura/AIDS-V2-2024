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
