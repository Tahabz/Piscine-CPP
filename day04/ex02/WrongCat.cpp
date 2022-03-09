#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat's default constructor has been called!" << std::endl;
	return;
};

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat's destructor has been called!" << std::endl;
	return;
};

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	return;
}

void WrongCat::makeSound() const
{
	std::cout << "MEOOOOOW" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	this->WrongAnimal::operator=(src);
	return *this;
}