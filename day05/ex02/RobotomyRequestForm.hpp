#if !defined(ROBOTOMYREQUESTFORM_HPP)
#define ROBOTOMYREQUESTFORM_HPP

#include "form.hpp"

class RobotomyRequestForm : public Form {
public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(const std::string &target);
  RobotomyRequestForm(const RobotomyRequestForm &src);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
  virtual ~RobotomyRequestForm();

private:
  std::string _target;
};

#endif // BUREAUCRAP_HPP
