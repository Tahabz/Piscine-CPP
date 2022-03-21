#if !defined(ROBOTOMYREQUESTFORM_HPP)
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(const std::string &target);
  RobotomyRequestForm(const RobotomyRequestForm &src);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
  virtual ~RobotomyRequestForm();
  void execute(Bureaucrat const &executor) const
      throw(AForm::GradeTooLowException, AForm::NotSignedException);

private:
  std::string _target;
};

#endif