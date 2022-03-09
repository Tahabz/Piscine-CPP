#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("animal")
{
	std::cout << "Animal's default constructor has been called!" << std::endl;
	return;
};

AAnimal::~AAnimal(void)
{
	std::cout << "Animal's destructor has been called!" << std::endl;
	return;
};

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Animal's copy constructor has been called!" << std::endl;
	this->type = src.type;
	return;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

std::string AAnimal::getType(void) const
{
	return this->type;
}

void AAnimal::makeSound(void) const
{
	std::cout << "This is a basic animal sound" << std::endl;
}