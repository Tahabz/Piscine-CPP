#if !defined(FIXED_H)
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int _num;
	static const int _bits = 8;

public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed &operator=(Fixed const &fx);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif // FIXED_H
