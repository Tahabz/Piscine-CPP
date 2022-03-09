#if !defined(CAT_HPP)
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat : public AAnimal
{
public:
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &src);
	~Cat();
	void makeSound(void) const;

private:
	Brain *_brain;
};

#endif // Cat_HPP
