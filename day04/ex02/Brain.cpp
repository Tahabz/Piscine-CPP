#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain's default constructor has been called!" << std::endl;
	return;
};

Brain::~Brain(void)
{
	std::cout << "Brain's destructor has been called!" << std::endl;
	return;
};

Brain::Brain(Brain const &src)
{
	std::cout << "Brain's copy has been called!" << std::endl;
	*this = src;
	return;
};

Brain &Brain::operator=(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return *this;
};