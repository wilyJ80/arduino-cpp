#include <Arduino.h>
#include "LCDI2C.h"

LCDI2C LCDI2C(0x27, 16, 2);

void setup() {
	LCDI2C.begin();
}

void loop() {
	LCDI2C.update();
}
