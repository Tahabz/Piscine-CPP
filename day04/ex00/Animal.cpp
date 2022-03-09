#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{
	std::cout << "Animal's default constructor has been called!" << std::endl;
	return;
};

Animal::~Animal(void)
{
	std::cout << "Animal's destructor has been called!" << std::endl;
	return;
};

Animal::Animal(Animal const &src)
{
	std::cout << "Animal's copy constructor has been called!" << std::endl;
	this->type = src.type;
	return;
}

Animal &Animal::operator=(Animal const &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << "This is a basic animal sound" << std::endl;
}