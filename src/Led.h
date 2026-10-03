#pragma once

#include <Arduino.h>

class Led
{
private:
    uint8_t pin;
    uint16_t debounce;
    unsigned long lastToggle = 0;

public:
    Led(uint8_t, uint16_t);

    void update();
};