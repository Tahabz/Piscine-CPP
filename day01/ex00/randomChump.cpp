#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump(std::string name)
{
	Zombie z(name);
	z.announce();
}
