#include "Form.hpp"

Form::Form(const std::string &name,
		   int gradeToSign,
		   int gradeToExecute) throw(Form::GradeTooHighException,
									 Form::GradeTooLowException) : _isSigned(false),
																   _name(name),
																   _gradeToExecute(gradeToExecute),
																   _gradeToSign(gradeToSign)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "Form's default constructor has been called!" << std::endl;
	return;
};

Form::~Form(void)
{
	std::cout << "Form's destructor has been called!" << std::endl;
	return;
};

Form::Form(Form const &src)
{
	std::cout << "Form's copy has been called!" << std::endl;
	*this = src;
	return;
}

Form &Form::operator=(Form const &src)
{
	this->_isSigned = src._isSigned;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form &fr)
{
	return o;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}