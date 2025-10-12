#include <Arduino.h>
#include "../include/led.hpp"

Led::Led(const int ledPin, const long blinkInterval) : ledPin(ledPin), blinkInterval(blinkInterval) {
	pinMode(ledPin, OUTPUT);
}

void Led::update() {
	unsigned const long cur = millis();

	if (cur - prev >= blinkInterval) {
		prev = cur;
		state = !state;
		digitalWrite(ledPin, state ? HIGH : LOW);
	}
}
