#include "LCDI2C.h"
#include "LiquidCrystal_I2C.h"
#include <Arduino.h>

LCDI2C::LCDI2C(uint8_t lcdAddress, uint8_t cols, uint8_t rows) : _prev(0), _lcd(lcdAddress, cols, rows) {

}

void LCDI2C::begin() {
	_lcd.init();
	_lcd.backlight();
}

void LCDI2C::update() {
	unsigned long now = millis();
	_lcd.setCursor(0, 0);
	_lcd.print(now);
	_lcd.print("                ");
}
