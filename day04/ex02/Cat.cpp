#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->_brain = new Brain;
	std::cout << "Cat's default constructor has been called!" << std::endl;
	return;
};

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat's destructor has been called!" << std::endl;
	return;
};

Cat::Cat(Cat const &src)
{
	std::cout << "Cat's copy has been called!" << std::endl;
	*this = src;
	return;
}

void Cat::makeSound() const
{
	std::cout << "MEOOOOOW" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	this->AAnimal::operator=(src);
	this->_brain = src._brain;
	return *this;
}