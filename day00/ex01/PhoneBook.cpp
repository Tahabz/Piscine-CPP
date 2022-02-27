#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _contacts(), _contactsCount(0), _oldestContact(0)
{
	return;
}

void PhoneBook::addContact(Contact contact)
{
	if (this->_contactsCount == 8)
	{
		if (this->_oldestContact > this->_contactsCount)
			this->_oldestContact = 0;
		this->_contacts[this->_oldestContact] = contact;
		this->_oldestContact += 1;
	}
	else
	{
		this->_contacts[this->_contactsCount] = contact;
		this->_contactsCount += 1;
	}
}

Contact PhoneBook::getContact(int i)
{
	return this->_contacts[i];
}

void PhoneBook::printContacts()
{
	for (int i = 0; i < this->_contactsCount; i++)
	{
		std::cout << this->_contacts[i].firstName << std::endl;
		std::cout << this->_contacts[i].lastName << std::endl;
		std::cout << this->_contacts[i].nickName << std::endl;
		std::cout << this->_contacts[i].phoneNumber << std::endl;
		std::cout << this->_contacts[i].darkestSecret << std::endl;
		std::cout << "---------------------------------------------------" << std::endl;
	}
}

void PhoneBook::printContact(int i)
{
	std::cout << this->_contacts[i].firstName << std::endl;
	std::cout << this->_contacts[i].lastName << std::endl;
	std::cout << this->_contacts[i].nickName << std::endl;
	std::cout << this->_contacts[i].phoneNumber << std::endl;
	std::cout << this->_contacts[i].darkestSecret << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
}