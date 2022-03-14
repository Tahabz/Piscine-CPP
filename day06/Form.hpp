#if !defined(FORM_HPP)
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
public:
	Form(void);
	Form(const std::string &name,
		 int gradeToSign, int gradeToExecute) throw(Form::GradeTooHighException,
													Form::GradeTooLowException);
	Form(const Form &src);
	Form &operator=(const Form &src);
	~Form();
	std::string getName() const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};

private:
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExecute;
	bool _isSigned;
};

std::ostream &operator<<(std::ostream &o, Form &fr);

#endif // BUREAUCRAP_HPP
