#include <Arduino.h>
#include "../include/led.hpp"
#include "../config.hpp"

void setup(void) {
}

void loop(void) {
	static Led led1(LED_PIN, INTERVAL);
	led1.update();

	// generalized logic for other pins 😍

	static Led led2(8, 200);
	led2.update();

	static Led led3(9, 20);
	led3.update();
}
