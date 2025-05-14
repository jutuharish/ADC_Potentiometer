// Potentiometer.cpp
#include "Potentiometer.h"

Potentiometer::Potentiometer(uint8_t pin) : adc_pin(pin) {}

void Potentiometer::init() {
    adc_init();
    configureADC();
}

void Potentiometer::configureADC() {
    adc_gpio_init(adc_pin);
}

uint16_t Potentiometer::readRaw() {
    adc_select_input(adc_pin - 26);  // ADC0 corresponds to GPIO26
    return adc_read();
}

float Potentiometer::readVoltage(float vref) {
    uint16_t raw_value = readRaw();
    return (raw_value * vref) / 4095.0f;
}
