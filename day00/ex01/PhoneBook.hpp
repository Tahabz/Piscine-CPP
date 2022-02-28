#if !defined(PHONEBOOK__HPP)
#define PHONEBOOK__HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
	Contact _contacts[8];
	unsigned int _contactsCount;
	unsigned int _oldestContact;
	void displayContacts() const;
	void _print_cell(std::string str) const;

public:
	PhoneBook();
	void addContact(Contact contact);
	Contact getContact(int i);
	void printContacts();
	void exit();
	bool includes(unsigned int i);
};

#endif // PHONEBOOK__CPP
