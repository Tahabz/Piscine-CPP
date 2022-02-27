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
		contactsCount += 1;
		PhoneBook::contacts[contactsCount] = contact;
	}
}

Contact PhoneBook::getContact(int i)
{
	return PhoneBook::contacts[i];
}
