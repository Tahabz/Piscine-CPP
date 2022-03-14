#if !defined(BUREAUCRAP_HPP)
#define BUREAUCRAP_HPP

#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(const std::string &name,
			   int grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &src);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void incrementGrade() throw(Bureaucrat::GradeTooHighException);
	void decrementGrade() throw(Bureaucrat::GradeTooLowException);

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
	int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &bc);

#endif // BUREAUCRAP_HPP
