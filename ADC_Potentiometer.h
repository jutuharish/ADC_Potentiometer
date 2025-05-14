// Potentiometer.h
#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

class Potentiometer {
public:
    Potentiometer(uint8_t pin = 26);
    void init();
    uint16_t readRaw();
    float readVoltage(float vref);

private:
    uint8_t adc_pin;
    void configureADC();
};

#endif // POTENTIOMETER_H
