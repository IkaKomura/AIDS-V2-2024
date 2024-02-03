#include "VibrationMotor.h"
#include <Arduino.h>

VibrationMotor::VibrationMotor(int pin) : pin(pin) {
  pinMode(pin, OUTPUT);
}

void VibrationMotor::activate() {
  analogWrite(pin, 255); // Example activation
}

void VibrationMotor::deactivate() {
  digitalWrite(pin, LOW); // Example deactivation
}
