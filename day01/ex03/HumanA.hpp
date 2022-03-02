#if !defined(HUMANA_CPP)
#define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon *_weapon;
	std::string _name;

public:
	HumanA(std::string name, Weapon &weapon);
	void attack(void) const;
};

#endif // HUMAN_CPP
