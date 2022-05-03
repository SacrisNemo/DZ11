#include "computer.h"
#include <utility>


Monitor::Monitor(const int diagonal, std::string resolution, int power)
	: power_(power), diagonal_(diagonal), resolution_(std::move(resolution))
{
}

bool Monitor::getis_on() const
{
	return power_;
}

Keyboard::Keyboard(std::string type, bool bluetooth)
	: type_(std::move(type)), bluetooth_(bluetooth)
{
}

Keyboard::~Keyboard()
= default;


Laptop::Laptop(int diagonal, std::string resolution, int power, std::string type, bool bluetooth) :
Monitor(diagonal, std::move(resolution),power), Keyboard(std::move(type), bluetooth)
{

}

bool Laptop::is_on()
{
	if (getis_on())
	{
		std::cout << "Laptop is on";
	}
	else
	{
		std::cout << "Laptop is off";
	}
	return getis_on();
}

Laptop::~Laptop()
= default;

Phone::Phone(int diagonal, std::string resolution, int power, std::string type, bool bluetooth) :
Monitor(diagonal, std::move(resolution),power), Keyboard(std::move(type), bluetooth)
{

}

bool Phone::is_on()
{
	if (getis_on())
	{
		std::cout << "Phone is on";
	}
	else
	{
		std::cout << "Phone is off";
	}
	return getis_on();
}

Phone::~Phone()
= default;


PersonalComputer::PersonalComputer(int diagonal, std::string resolution, int power, std::string type, bool bluetooth) :
Monitor(diagonal,std::move(resolution), power), Keyboard(std::move(type), bluetooth)
{

}

bool PersonalComputer::is_on()
{
	if (getis_on())
	{
		std::cout << "PersonalComputer is on";
	}
	else
	{
		std::cout << "PersonalComputer is off";
	}
	return getis_on();
}

PersonalComputer::~PersonalComputer()
= default;
