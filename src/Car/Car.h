#pragma once

#include <string>

class Car
{
public:
	Car() {}
	~Car() {}

	bool Init(std::string number, std::string colour);

	std::string GetNumber() { return m_number; }
	std::string GetColour() { return m_colour; }

private:
	std::string m_number;
	std::string m_colour;

};