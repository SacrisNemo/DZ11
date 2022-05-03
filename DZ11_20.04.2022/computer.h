#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include <iostream>

class Monitor
{
public:
	Monitor(int diagonal, std::string resolution, int power);
	virtual bool is_on() = 0;
	bool getis_on() const;
	virtual ~Monitor() = 0;
private:
	bool power_;
	int diagonal_;
	std::string resolution_;
};

class Keyboard
{
public:
	Keyboard(std::string type, bool bluetooth);
	virtual ~Keyboard();
private:
	std::string type_;
	bool bluetooth_;
};

class Laptop : public Monitor, public Keyboard
{
public:
	Laptop(int diagonal, std::string resolution, int power, std::string type, bool bluetooth);
	bool is_on() override;
	~Laptop() override;
};

class Phone : public Monitor, public Keyboard
{
public:
	Phone(int diagonal, std::string resolution, int power, std::string type, bool bluetooth);
	bool is_on() override;
	~Phone() override;
};

class PersonalComputer : public Monitor, public Keyboard
{
public:
	PersonalComputer(int diagonal, std::string resolution, int power, std::string type, bool bluetooth);
	bool is_on() override;
	~PersonalComputer() override;
};

#endif
