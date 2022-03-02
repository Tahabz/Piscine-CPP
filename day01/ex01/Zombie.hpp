#if !defined(ZOMBIE_CPP)
#define ZOMBIE_CPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void setName(std::string name);
};
#endif // ZOMBIE_CPP
