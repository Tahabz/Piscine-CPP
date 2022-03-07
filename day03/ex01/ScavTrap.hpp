#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &src);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &scv);
		void attack(const std::string &target);
		void guardGate();

private:
};

#endif // SCAVTRAP_HPP
