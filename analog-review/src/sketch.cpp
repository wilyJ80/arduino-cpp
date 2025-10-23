#include <Arduino.h>

#define SENSOR_PIN A0
#define LED_PIN 7

int sensorReading;

void setup(void) {
	Serial.begin(9600);
	pinMode(LED_PIN, OUTPUT);
}

void loop(void) {
	sensorReading = analogRead(SENSOR_PIN);
	Serial.println(sensorReading);

	if (sensorReading < 800) {
		digitalWrite(LED_PIN, HIGH);
	} else {
		digitalWrite(LED_PIN, LOW);
	}
}
