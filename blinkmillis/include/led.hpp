#ifndef LED_HPP
#define LED_HPP

class Led {
public:
	Led(const int ledPin, const long blinkInterval);
	void update();

private:
	int ledPin;
	unsigned long blinkInterval;
	unsigned long prev;
	bool state;
};

#endif
