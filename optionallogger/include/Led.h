#ifndef LED_H
#define LED_H

namespace LedConfig {
	constexpr unsigned long INTERVAL = 1000;
}

class Led {
public:
	/**
	 * @brief Initialize the sketch 
	 * with board-pin config.
	 * @param ledPin Pin of the led.
	*/
	void begin(int ledPin);
	/**
	 * @brief Start the blink loop
	 * with a specified interval.
	 * @param interval Desired interval
	 * for blinking.
	*/
	void update(unsigned long interval);

private:
	int _ledPin;
};

#endif
