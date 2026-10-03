#include <Arduino.h>

#include "Led.h"

constexpr uint8_t RED_LED_GPIO = 5;
constexpr uint8_t BLUE_LED_GPIO = 6;
constexpr uint8_t GREEN_LED_GPIO = 7;

Led redLed(RED_LED_GPIO, 200);
Led blueLed(BLUE_LED_GPIO, 500);
Led greenLed(GREEN_LED_GPIO, 1000);

void setup()
{
}

void loop()
{
  redLed.update();
  blueLed.update();
  greenLed.update();
}
