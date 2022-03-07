#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const FragTrap &src);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap &operator=(const FragTrap &scv);
	void attack(const std::string &target);
	void highFivesGuys();

private:
};

#endif // FragTrap_HPP
