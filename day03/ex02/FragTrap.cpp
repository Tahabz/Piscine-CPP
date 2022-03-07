#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default consctructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor - name" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &clt)
{
	this->ClapTrap::operator=(clt);
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " can't attack" << std::endl;
		return;
	}
	std::cout << "FragTrap " + this->_name + " attacks " + target + " causing " << this->_attackDamage << " points of damage" << std::endl;
	this->_energyPoints -= 1;
}

void FragTrap::highFivesGuys()
{
	std::cout << " HIGH FIIIIIIVES" << std::endl;
}
