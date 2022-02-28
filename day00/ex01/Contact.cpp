#include <iostream>
#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickName,
				 std::string phoneNumber, std::string darkestSecret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
	return;
}

Contact::Contact() { return; };

void Contact::printContact() const
{
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickName << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout << this->_darkestSecret << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
}

std::string Contact::_format(std::string str) const
{
	if (str.length() > 10)
		return str.substr(0, 9).append(".");
	return str;
}

std::string Contact::getFirstName() const
{
	return this->_format(this->_firstName);
}

std::string Contact::getLastName() const
{
	return this->_format(this->_lastName);
}

std::string Contact::getNickName() const
{
	return this->_format(this->_nickName);
}

std::string Contact::getPhoneNumber() const
{
	return this->_format(this->_phoneNumber);
}
