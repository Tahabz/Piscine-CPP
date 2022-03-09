#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog's default constructor has been called!" << std::endl;
	return;
};

Dog::~Dog(void)
{
	std::cout << "Dog's destructor has been called!" << std::endl;
	return;
};

Dog::Dog(Dog const &src)
{
	std::cout << "Dog's copy constructor has been called!" << std::endl;
	this->type = src.type;
	return;
}

Dog &Dog::operator=(Dog const &src)
{
	if (this != &src)
		this->type = src.type;
			return *this;
}

void Dog::makeSound() const
{
	std::cout << "HAW HAW HAW" << std::endl;
}