#if !defined(PHONEBOOK__CPP)
#define PHONEBOOK__CPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[];
	static int contactsCount;
	void displayContacts() const;

public:
	PhoneBook();
	void add(Contact contact);
	void search(int i);
	void exit();
};

#endif // PHONEBOOK__CPP
