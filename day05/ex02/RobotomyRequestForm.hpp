#if !defined(ROBOTOMYREQUESTFORM_HPP)
#define ROBOTOMYREQUESTFORM_HPP

#include "form.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std:: string &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm();

private:
	std::string _target;
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm &fr);

#endif // BUREAUCRAP_HPP
