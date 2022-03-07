#include "FragTrap.hpp"

int main()
{
	FragTrap taha("taha");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");

	taha.beRepaired(2);
	taha.attack("baz");
	taha.attack("baz");
	taha.attack("baz");
	return 0;
}