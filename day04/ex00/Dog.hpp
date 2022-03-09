#if !defined(DOG_HPP)
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &src);
	~Dog();
	Dog &operator=(const Dog &src);
	void makeSound(void) const;

private:
};

#endif // DOG_HPP
