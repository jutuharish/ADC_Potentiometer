# ADC_Potentiometer
# Potentiometer Library for Raspberry Pi Pico

## Overview
This library provides an interface to read resistor values from a potentiometer using the inbuilt ADC of the Raspberry Pi Pico and display the value on the serial monitor.

## Features
- Read raw ADC values
- Convert ADC values to voltage
- Adjustable reference voltage

## Hardware Connections
- VCC → 3.3V
- GND → GND
- ADC Pin → GPIO26 (ADC0)

## Usage
Include the header file:

```cpp
#include "Potentiometer.h"
```

Create an instance and initialize:

```cpp
Potentiometer pot(26);
pot.init();
```

Read values:

```cpp
uint16_t raw = pot.readRaw();
float voltage = pot.readVoltage(3.3);
```

## Dependencies
- pico-sdk

## License
MIT License
