#include "PhoneBook.hpp"

bool isCmd(std::string cmd)
{
	return (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT");
}

int main(void)
{
	std::string cmd;

	std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT: ";

	while (!isCmd(cmd))
		std::cin >> cmd;
}