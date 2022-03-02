#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(&weapon), _name(name)
{
	return;
}

void HumanA::attack() const
{
	std::cout << this->_name + " "
			  << "attacks with their " << this->_weapon->getType() << std::endl;
}