#pragma once
// TaxiManager: 

#include <map>

#include "Taxi.h"

typedef std::map<Taxi*, Driver*> TaxiMap;

class TaxiManager
{
public:
	TaxiManager() {}
	~TaxiManager() {}

private:
	TaxiMap m_taxis;

};