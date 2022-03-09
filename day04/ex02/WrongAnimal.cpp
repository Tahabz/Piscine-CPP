#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal's default constructor has been called!" << std::endl;
	return;
};

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal's destructor has been called!" << std::endl;
	return;
};

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal's copy constructor has been called!" << std::endl;
	this->type = src.type;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "This is a basic WrongAnimal sound" << std::endl;
}