#pragma once
// Taxi: taxi class definition

#include "../Driver/Driver.h"
#include "../Car/Car.h"
//#include "../Car/PassCar.h"
//#include "../Car/BusCar.h"

class Taxi
{
public:
	Taxi();
	~Taxi();

private:
	Driver* m_pDriver;
	Car* m_pCar;

	// position
	// char adress[25];
	// char time[30];
};

