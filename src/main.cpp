#include <Arduino.h>
#include "SystemController.h"

SystemController systemController;

void setup() {
    // Initialize the system
    systemController.init();
}

void loop() {
    // Run the system's logic
    systemController.run();
    delay(1000); // Add a delay to make the loop more manageable
}
