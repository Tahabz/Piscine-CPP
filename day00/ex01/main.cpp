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

	while (true)
	{
		std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT: ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			book.addContact(buildContact());
			std::cout << "Contact saved successfully!" << std::endl;
			cmd = "";
		}
		else if (cmd == "SEARCH")
		{
			while (true)
			{
				unsigned int i;
				book.printContacts();
				std::cout << "Contact's index: ";
				std::cin >> i;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				if (!book.includes(i))
					std::cout << "Please enter a valid index!" << std::endl;
				else
				{
					book.getContact(i).printContact();
					break;
				}
			}
		}
		else if (cmd == "EXIT")
			return 0;
		else
			std::cout << "Please enter a valid command!" << std::endl;
	}
	return (0);
}
