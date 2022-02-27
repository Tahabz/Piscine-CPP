#if !defined(PHONEBOOK__HPP)
#define PHONEBOOK__HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	static Contact contacts[8];
	static int contactsCount;
	static int oldestContact;
	void displayContacts() const;

public:
	PhoneBook();
	void addContact(Contact contact);
	Contact getContact(int i);
	void exit();
};

#endif // PHONEBOOK__CPP
