#include <iostream>
#include <ctype.h>
#include "MyString.hpp"

MyString concatStrs(char *strs[])
{
	MyString str("");
	int i = 0;
	while (strs[i])
	{
		str += strs[i];
		i += 1;
	}
	return str;
}

int main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	av += 1;
	MyString str = concatStrs(av);
	std::cout << str.map(toupper) << std::endl;
	return 0;
}