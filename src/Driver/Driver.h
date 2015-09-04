#pragma once

#include <string>

class Driver
{
public:
	Driver();
	virtual ~Driver();

private:
	std::string m_name;
	std::string m_licence;

};