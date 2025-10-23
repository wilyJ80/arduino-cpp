#include <Arduino.h>
#include "LCDI2C.h"

LCDI2C LCDI2C(LCDConfig::ADDRESS, LCDConfig::COLS, LCDConfig::ROWS);

void setup() {
	LCDI2C.begin();
}

void loop() {
	LCDI2C.update();
}
