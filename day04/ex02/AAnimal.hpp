#if !defined(ANIMAL_CPP)
#define ANIMAL_CPP

#include <iostream>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const AAnimal &);
	virtual ~AAnimal();
	AAnimal &operator=(AAnimal const &src);
	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
};
#endif // ANIMAL_CPP
