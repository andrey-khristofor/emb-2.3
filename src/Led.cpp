#include "Led.h"

Led::Led(uint8_t _pin, uint16_t _debounce)
{
    pin = _pin;
    debounce = _debounce;
    pinMode(pin, OUTPUT);
}

void Led::update()
{
    if (millis() - lastToggle > debounce)
    {
        digitalWrite(pin, !digitalRead(pin));
        lastToggle = millis();
    }
}
