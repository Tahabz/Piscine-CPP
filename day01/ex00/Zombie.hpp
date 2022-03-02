#if !defined(ZOMBIE_CPP)
#define ZOMBIE_CPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};
#endif // ZOMBIE_CPP
