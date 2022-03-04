#if !defined(KAREN_HPP)
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Karen::*_fns[5])(void);
	void none(void);
	int getLevel(std::string level) const;

public:
	Karen(void);
	void complain(std::string level);
	void execMember(size_t i) const;
};

#endif // KAREN_HPP
