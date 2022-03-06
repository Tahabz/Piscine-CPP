#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedNum(0)
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
	this->_fixedNum = num << this->_bits;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called!" << std::endl;
	return;
}

Fixed::Fixed(const float fp)
{
	std::cout << "Float Constructor called" << std::endl;
	this->_fixedNum = roundf(fp * (1 << _bits));
}

Fixed &Fixed::operator=(Fixed const &fx)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fx)
		this->_fixedNum = fx.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedNum;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedNum = raw;
}

int Fixed::toInt(void) const
{
	return this->_fixedNum >> _bits;
}

float Fixed::toFloat(void) const
{
	return this->_fixedNum / (float)(1 << _bits);
}

bool Fixed::operator<(Fixed const &fx) const
{
	return this->_fixedNum < fx.getRawBits();
}

bool Fixed::operator>(Fixed const &fx) const
{
	return this->_fixedNum > fx.getRawBits();
}

bool Fixed::operator>=(Fixed const &fx) const
{
	return this->_fixedNum >= fx.getRawBits();
}

bool Fixed::operator<=(Fixed const &fx) const
{
	return this->_fixedNum <= fx.getRawBits();
}

bool Fixed::operator==(Fixed const &fx) const
{
	return this->_fixedNum == fx.getRawBits();
}

bool Fixed::operator!=(Fixed const &fx) const
{
	return this->_fixedNum != fx.getRawBits();
}

Fixed Fixed::operator+(Fixed const &fx) const
{
	Fixed newFx;

	newFx.setRawBits(this->_fixedNum + fx.getRawBits());
	return newFx;
}

Fixed Fixed::operator-(Fixed const &fx) const
{
	Fixed newFx;

	newFx.setRawBits(this->_fixedNum - fx.getRawBits());
	return newFx;
}

Fixed &Fixed::operator--()
{
	--this->_fixedNum;
	return *this;
}

Fixed &Fixed::operator++()
{
	++this->_fixedNum;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++this->_fixedNum;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--this->_fixedNum;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a >= b ? a : b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	return a >= b ? a : b;
}

Fixed Fixed::operator*(const Fixed &fx) const
{
	Fixed newFx;
	newFx.setRawBits((this->_fixedNum * fx._fixedNum) >> _bits);
	return newFx;
}

Fixed Fixed::operator/(const Fixed &fx) const
{
	Fixed newFx;
	newFx.setRawBits((this->_fixedNum / fx._fixedNum) << _bits);
	return newFx;
}

std::ostream &
operator<<(std::ostream &o, Fixed const &num)
{
	o
		<< num.toFloat();
	return o;
}
