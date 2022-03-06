#if !defined(FIXED_H)
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixed_num;
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
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, Fixed const &num);

#endif // FIXED_H