#if !defined(HUMANB_CPP)
#define HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;

public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack(void) const;
};

#endif // HUMAN_CPP
