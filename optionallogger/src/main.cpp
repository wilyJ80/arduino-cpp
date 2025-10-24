#include "Led.h"
#include "pins_arduino.h"
#include <Arduino.h>

Led led;

void setup() {
	led.begin(LED_BUILTIN);
}

void loop() {
	led.update(LedConfig::INTERVAL);
}
