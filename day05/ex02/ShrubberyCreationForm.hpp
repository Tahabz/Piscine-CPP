#if !defined(SHRUBBERYCREATIONFORM_HPP)
#define SHRUBBERYCREATIONFORM_HPP

#include "form.hpp"

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
	virtual ~ShrubberyCreationForm();

private:
	std::string _target;
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm &fr);

#endif // BUREAUCRAP_HPP
