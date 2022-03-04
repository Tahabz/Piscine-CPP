#include "Karen.hpp"

Karen::Karen(void)
{
	this->_fns[0] = &Karen::none;
	this->_fns[1] = &Karen::debug;
	this->_fns[2] = &Karen::info;
	this->_fns[3] = &Karen::warning;
	this->_fns[4] = &Karen::error;

	return;
}

void Karen::none(void)
{
	std::cout << "Invalid level!" << std::endl;
}

void Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Karen::getLevel(std::string level) const
{
	return (level == "DEBUG") * 1 + (level == "INFO") * 2 + (level == "WARNING") * 3 + (level == "ERROR") * 4;
}

void Karen::complain(std::string str)
{
	int level = getLevel(str);
	(this->*_fns[level])();
}
