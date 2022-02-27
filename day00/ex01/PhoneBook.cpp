#include "PhoneBook.hpp"

int PhoneBook::contactsCount = 0;
int PhoneBook::oldestContact = 0;
Contact PhoneBook::contacts[8];

PhoneBook::PhoneBook(void)
{
	return;
}

void PhoneBook::addContact(Contact contact)
{
	if (contactsCount == 7)
	{
		if (oldestContact > contactsCount)
			oldestContact = 0;
		PhoneBook::contacts[oldestContact] = contact;
		oldestContact += 1;
	}
	else
	{
		PhoneBook::contacts[contactsCount] = contact;
		contactsCount += 1;
	}
}

Contact PhoneBook::getContact(int i)
{
	return PhoneBook::contacts[i];
}

void PhoneBook::printContacts()
{
	for (int i = 0; i < PhoneBook::contactsCount; i++)
	{
		std::cout << PhoneBook::contacts[i].firstName << std::endl;
		std::cout << PhoneBook::contacts[i].lastName << std::endl;
		std::cout << PhoneBook::contacts[i].nickName << std::endl;
		std::cout << PhoneBook::contacts[i].phoneNumber << std::endl;
		std::cout << PhoneBook::contacts[i].darkestSecret << std::endl;
	}
}