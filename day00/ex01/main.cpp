#include "PhoneBook.hpp"

bool isCmd(std::string cmd)
{
	return (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT");
}

Contact buildContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string darkestSecret;
	std::string phone;

	std::cout << "first name: ";
	std::cin >> firstName;
	std::cout << "last name: ";
	std::cin >> lastName;
	std::cout << "nickname: ";
	std::cin >> nickName;
	std::cout << "darkest secret: ";
	std::cin >> darkestSecret;
	std::cout << "phone number: ";
	std::cin >> phone;
	std::cout << std::endl;
	Contact contact(firstName, lastName, nickName, phone, darkestSecret);
	return contact;
}

int main(void)
{
	std::string cmd;
	PhoneBook book;

	while (cmd != "EXIT")
	{
		while (!isCmd(cmd))
		{
			std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT: ";
			std::cin >> cmd;
		}
		if (cmd == "ADD")
			book.addContact(buildContact());
		else if (cmd == "SEARCH")
		{
			int i;
			std::cin >> i;
			book.printContact(i);
		}
	}
	return (0);
}