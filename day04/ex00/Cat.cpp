#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat's default constructor has been called!" << std::endl;
	return;
};

Cat::~Cat(void)
{
	std::cout << "Cat's destructor has been called!" << std::endl;
	return;
};

Cat::Cat(Cat const &src)
{
	*this = src;
	return;
}

void Cat::makeSound() const
{
	std::cout << "MEOOOOOW" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	this->Animal::operator=(src);
	return *this;
}