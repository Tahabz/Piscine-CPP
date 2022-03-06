#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_num(0)
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

Fixed::Fixed(const int num)
{
	std::cout << "Int Constructor called" << std::endl;
	this->_fixed_num = num << this->_bits;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called!" << std::endl;
	return;
}

Fixed::Fixed(const float fp)
{
	std::cout << "Float Constructor called" << std::endl;
	this->_fixed_num = roundf(fp * (1 << _bits));
}

Fixed &Fixed::operator=(Fixed const &fx)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fx)
		this->_fixed_num = fx.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_num;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_num = raw;
}

int Fixed::toInt(void) const
{
	return this->_fixed_num >> _bits;
}

float Fixed::toFloat(void) const
{
	return this->_fixed_num / (float)(1 << _bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &num)
{
	o << num.toFloat();
	return o;
}
