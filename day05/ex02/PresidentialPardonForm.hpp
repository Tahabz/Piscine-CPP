#if !defined(PRESEDENTIALPARDONFORM_HPP)
#define PRESEDENTIALPARDONFORM_HPP

#include "form.hpp"

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std:: string &target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm();

private:
	std::string _target;
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm &fr);

#endif // BUREAUCRAP_HPP
