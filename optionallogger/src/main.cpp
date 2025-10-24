#include "Led.h"
#include <Arduino.h>

Led led;

void setup() {
	led.begin(LED_BUILTIN);
	led.setLogging();
}

void loop() {
	led.update(LedConfig::INTERVAL);
}
