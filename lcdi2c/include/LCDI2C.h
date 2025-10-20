#ifndef LCDI2C_H
#define LCDI2C_H

#include "LiquidCrystal_I2C.h"

class LCDI2C {
public:
	LCDI2C(uint8_t lcdAddress, uint8_t cols, uint8_t rows);
	void begin();
	void update();

private:
	LiquidCrystal_I2C _lcd;
};

namespace LCDConfig {
	constexpr uint8_t ADDRESS = 0x27;
	constexpr uint8_t COLS = 16;
	constexpr uint8_t ROWS = 2;
}

#endif
