#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called!" << std::endl;
	return;
}

Fixed &Fixed::operator=(Fixed const &fx)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fx)
		this->_num = fx.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_num;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_num = raw;
}