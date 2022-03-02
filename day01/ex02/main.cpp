#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "the adress of string: " << &string << std::endl;
	std::cout << "the adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "the adress of stringREF: " << &stringREF << std::endl;

	std::cout << "the value of string: " << string << std::endl;
	std::cout << "the adress of stringPTR: " << *stringPTR << std::endl;
	std::cout << "the adress of stringREF: " << stringREF << std::endl;
	return 0;
}