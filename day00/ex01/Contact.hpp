#if !defined(CONTACT_HPP)
#define CONTACT_HPP
#include <iostream>

class Contact
{
private:
public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	Contact();
	Contact(std::string firstName, std::string lastName, std::string nickName,
			std::string phoneNumber, std::string darkestSecret);
};

#endif // CONTACT_HPP
