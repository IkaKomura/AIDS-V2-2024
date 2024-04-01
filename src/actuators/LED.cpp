#include "LED.h"
#include <Arduino.h>

LED::LED(int pin) : pin(pin) {
  pinMode(pin, OUTPUT);
}

void LED::activate() {
  digitalWrite(pin, HIGH);
}

void LED::deactivate() {
  digitalWrite(pin, LOW);
}

// Path: src/actuators/LED.cpp