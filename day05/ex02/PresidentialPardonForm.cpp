#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), _target("") {
  std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &copy)
    : AForm(copy), _target(copy._target) {
  std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
  this->AForm::operator=(rhs);
  this->_target = rhs._target;
  return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("Presidential Pardon Form", 25, 5), _target(target) {
  std::cout << "PresidentialPardonForm Init Constructor" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
    throw(AForm::GradeTooLowException, AForm::NotSignedException) {
  canBeExecuted(executor);
  std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}
