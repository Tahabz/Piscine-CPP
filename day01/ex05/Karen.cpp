#include "Karen.hpp"

Karen::Karen(void)
{
	this->_fns[2] = &Karen::error;
	this->_fns[4] = &Karen::warning;
	this->_fns[5] = &Karen::info;
	this->_fns[1] = &Karen::debug;
	return;
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

void Karen::complain(std::string str)
{
	size_t id = (str.length() + str[0]) % 6;
	(this->*_fns[id])();
}