#if !defined(WRONGCAP_CPP)
#define WRONGCAP_CPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &src);
	WrongCat &operator=(const WrongCat &src);
	~WrongCat();
	void makeSound(void) const;

private:
};

#endif // WrongCat_HPP
