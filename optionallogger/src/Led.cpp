#include "Led.h"
#include "Arduino.h"
#include "WString.h"

void Led::setLogging() {
	_isLogActive = true;
	Serial.begin(9600);
}

void Led::log(const __FlashStringHelper* msg) {
	if (_isLogActive) {
		Serial.println(msg);
	}
}

void Led::begin(int ledPin) {
	_ledPin = ledPin;
	pinMode(_ledPin, OUTPUT);
	log(F("[INFO] Pins initialized"));
}

void Led::update(unsigned long interval) {
	static unsigned long prev = millis();
	if (millis() - prev > interval) {
		digitalWrite(_ledPin, !digitalRead(_ledPin));
		log(F("[INFO] Led toggled"));
		prev = millis();
	}
}
