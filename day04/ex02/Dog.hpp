#if !defined(DOG_HPP)
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	Dog(Dog const &src);
	~Dog();
	Dog &operator=(const Dog &src);
	void makeSound(void) const;

private:
	Brain *_brain;
};

#endif // DOG_HPP
