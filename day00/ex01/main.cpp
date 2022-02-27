#include "PhoneBook.hpp"

bool isCmd(std::string cmd)
{
	return (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT");
}

int main(void)
{
	PhoneBook book;

	Contact contact("taha", "baz", "mohamed", "0600543549", "NONE");
	book.addContact(contact);
	book.printContacts();
	// std::string cmd;
	// while (!isCmd(cmd))
	// {
	// 	std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT: ";
	// 	std::cin >> cmd;
	// }
}