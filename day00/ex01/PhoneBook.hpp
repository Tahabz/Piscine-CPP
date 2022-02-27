#if !defined(PHONEBOOK__HPP)
#define PHONEBOOK__HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
	int _contactsCount;
	int _oldestContact;
	void displayContacts() const;

public:
	PhoneBook();
	void addContact(Contact contact);
	Contact getContact(int i);
	void printContacts();
	void exit();
};

#endif // PHONEBOOK__CPP
