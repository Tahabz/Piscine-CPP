#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("") {
  std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : AForm(copy), _target(copy._target) {
  std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
  this->AForm::operator=(rhs);
  this->_target = rhs._target;
  return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {
  std::cout << "RobotomyRequestForm Constructor Called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
    throw(AForm::GradeTooLowException, AForm::NotSignedException) {
  canBeExecuted(executor);
  srand(time(NULL));
  if (rand() % 2)
    std::cout << this->_target << " has been robotomized successfully"
              << std::endl;
  else
    std::cout << this->_target << " has failed" << std::endl;
}
