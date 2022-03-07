#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor has been called!" << std::endl;
	return;
};

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor has been called!" << std::endl;
	return;
};

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor has been called!" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clt)
{
	if (this != &clt)
	{
		this->_name = clt._name;
		this->_hitPoints = clt._hitPoints;
		this->_energyPoints = clt._energyPoints;
		this->_attackDamage = clt._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " + this->_name + " attacks " + target + " causing " << this->_attackDamage << " points of damage" << std::endl;
	this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't take damage" << std::endl;
		return;
	}
	std::cout << "ClapTrap " + this->_name + " is being attacked and taking " << amount << " points of damage" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired" << std::endl;
		return;
	}
	std::cout << "ClapTrap " + this->_name + " is being repaired by " << amount << " points of damage" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
}