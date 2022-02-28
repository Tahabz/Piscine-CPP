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
	for (unsigned int i = 0; i < this->_contactsCount; ++i)
	{
		const Contact contact = this->_contacts[i];
		this->_print_cell(std::to_string(i));
		std::cout << '|';
		this->_print_cell(contact.getFirstName());
		std::cout << '|';
		this->_print_cell(contact.getLastName());
		std::cout << '|';
		this->_print_cell(contact.getNickName());
		std::cout << std::endl;
	}
}

void PhoneBook::_print_cell(std::string str) const
{
	std::cout << std::setw(10);
	std::cout << std::right;
	std::cout << str;
}

bool PhoneBook::includes(unsigned int i)
{
	return (i < this->_contactsCount && i >= 0);
}