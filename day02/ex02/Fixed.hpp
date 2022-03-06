#if !defined(FIXED_H)
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixedNum;
	static const int _bits = 8;

public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed(void);

	float toFloat(void) const;
	int toInt(void) const;
	Fixed &operator=(Fixed const &fx);
	bool operator<(Fixed const &fx) const;
	bool operator>(Fixed const &fx) const;
	bool operator>=(Fixed const &fx) const;
	bool operator<=(Fixed const &fx) const;
	bool operator==(Fixed const &fx) const;
	bool operator!=(Fixed const &fx) const;
	Fixed operator+(Fixed const &fx) const;
	Fixed operator-(Fixed const &fx) const;
	Fixed &operator--();
	Fixed &operator++();
	Fixed operator--(int);
	Fixed operator++(int);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(Fixed const &a, Fixed const &b);
	static const Fixed &max(Fixed const &a, Fixed const &b);
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
std::ostream &operator<<(std::ostream &o, Fixed const &num);

#endif // FIXED_H