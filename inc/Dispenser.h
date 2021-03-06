#ifndef _DISPENSER_
#define _DISPENSER_

#include <pigpio.h>
#include "ItemType.h"
#include <unistd.h>
#include <iostream>
#include <stdlib.h>

#define PWM_OFF   0
#define PWM_LEFT  2250
#define PWM_RIGHT 750

class Dispenser{
public:
	Dispenser(){};
	Dispenser(int pin);
	void vend();
	ItemType getType();
	void setType(ItemType type);
	void setStock(int stock);
	int getStock();
private:
	ItemType type;
	int stock;
	int pin;
};


#endif
