#if !defined(ANIMAL_CPP)
#define ANIMAL_CPP

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &);
	virtual ~Animal();
	Animal &operator=(Animal const &src);
	virtual void makeSound(void) const;
	std::string getType(void) const;
};
#endif // ANIMAL_CPP
