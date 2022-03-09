#if !defined(WRONGANIMAL_CPP)
#define WRONGANIMAL_CPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &src);
	void makeSound(void) const;
	std::string getType(void) const;
};
#endif // WrongAnimal_CPP
