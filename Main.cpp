// main.cpp
#include "Potentiometer.h"
#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();
    Potentiometer pot(26);
    pot.init();

    while (true) {
        uint16_t raw = pot.readRaw();
        float voltage = pot.readVoltage(3.3);
        printf("Raw Value: %u\n", raw);
        printf("Voltage: %.2f V\n", voltage);
        sleep_ms(1000);
    }
    return 0;
}
