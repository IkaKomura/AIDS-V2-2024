#ifndef Sensor_h
#define Sensor_h

class Sensor {
protected:
    int sensorId;
public:
    Sensor(int id) : sensorId(id) {}
    virtual void init() = 0;
    virtual void update() = 0;
    virtual float readData() = 0;
    int getId() const { return sensorId; }
};

#endif


// Path: src/sensors/Sensor.h