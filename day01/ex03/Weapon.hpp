#if !defined(WEAPON_HPP)
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string type);
	Weapon(void);
	~Weapon();
	const std::string &getType() const;
	void setType(std::string type);
};

#endif // WEAPON_HPP
