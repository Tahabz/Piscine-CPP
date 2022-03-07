#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScravTrap default consctructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScravTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Constructor - name" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &clt)
{
	this->ClapTrap::operator=(clt);
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ScravTrap " << this->_name << " can't attack" << std::endl;
		return;
	}
	std::cout << "ScravTrap " + this->_name + " attacks " + target + " causing " << this->_attackDamage << " points of damage" << std::endl;
	this->_energyPoints -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << " ScavTrap is now in Gatekeeper mode" << std::endl;
}
