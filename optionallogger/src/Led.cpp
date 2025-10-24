#include "Led.h"
#include "Arduino.h"

void Led::begin(int ledPin) {
	_ledPin = ledPin;
	pinMode(_ledPin, OUTPUT);
}

void Led::update(unsigned long interval) {
	static unsigned long prev = millis();
	if (millis() - prev > interval) {
		digitalWrite(_ledPin, !digitalRead(_ledPin));
		prev = millis();
	}
}
