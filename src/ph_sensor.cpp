#include "ph_sensor.h"
#include <Arduino.h>
#include "../config/config.h"

float readPH() {
    int sensorValue = analogRead(PH_SENSOR_PIN);
    float voltage = sensorValue * (3.3 / 4095.0);

    // Approximate conversion (needs calibration in real system)
    float phValue = 7 + ((2.5 - voltage) / 0.18);

    return phValue;
}
