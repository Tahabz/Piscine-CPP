#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
	size_t len = 10;
	Zombie *hord = zombieHorde(len, "tahas");

	for (size_t i = 0; i < len; i++)
	{
		hord[i].announce();
	}

	delete[] hord;
	return 0;
}