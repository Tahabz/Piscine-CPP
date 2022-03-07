#include "ClapTrap.hpp"

int main()
{
	ClapTrap taha("taha");
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