#include "Karen.hpp"

Karen::Karen(void)
{
	this->_fns[44] = &Karen::error;
	this->_fns[50] = &Karen::warning;
	this->_fns[24] = &Karen::info;
	this->_fns[39] = &Karen::debug;
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

bool Karen::_isLevel(size_t id) const
{
	return id == 1 || id == 4 || id == 5 || id == 2;
}

size_t Karen::_hash(std::string s) const
{
	size_t h = 0;
	for (size_t i = 0; i < s.length(); i++)
	{
		h = 31 * h + s[i];
	}
	return h % 100;
}

void Karen::complain(std::string str)
{
	size_t id = this->_hash(str);
	switch (id)
	{
	case 39:
	case 50:
	case 24:
	case 44:
		(this->*_fns[id])();
		break;
	default:
		std::cout << "Invalid level!" << std::endl;
		break;
	}
}