#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	randomChump("taha");
	Zombie *z = newZombie("baz");
	delete z;
	return 0;
}