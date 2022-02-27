#include "PhoneBook.hpp"

bool isCmd(std::string cmd)
{
	return (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT");
}

int main(void)
{
	PhoneBook book;

	Contact contact0("0", "baz", "mohamed", "0600543549", "NONE");
	Contact contact1("1", "broe", "jfcjdn", "0600543fee", "fewkwe");
	Contact contact2("2", "kcs", "kcjskc", "06eeeeee", "dcksdkcsc");
	Contact contact3("3", "baz", "mohamed", "0600543549", "NONE");
	Contact contact4("4", "baz", "mohamed", "0600543549", "NONE");
	Contact contact5("5", "baz", "mohamed", "0600543549", "NONE");
	Contact contact6("6", "baz", "mohamed", "0600543549", "NONE");
	Contact contact7("7", "baz", "mohamed", "0600543549", "NONE");
	Contact contact8("8", "baz", "mohamed", "0600543549", "NONE");
	Contact contact9("9", "baz", "mohamed", "0600543549", "NONE");
	book.addContact(contact0);
	book.addContact(contact1);
	book.addContact(contact2);
	book.addContact(contact3);
	book.addContact(contact4);
	book.addContact(contact5);
	book.addContact(contact6);
	book.addContact(contact7);
	book.addContact(contact8);
	book.addContact(contact9);
	book.printContacts();
	// std::string cmd;
	// while (!isCmd(cmd))
	// {
	// 	std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT: ";
	// 	std::cin >> cmd;
	// }
}