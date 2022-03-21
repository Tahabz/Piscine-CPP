#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(), _target("") {
  std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &copy)
    : Form(copy), _target(copy._target) {
  std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form("Presidential Pardon Form", 25, 5), _target(target) {
  std::cout << "PresidentialPardonForm Init Constructor" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
    throw(Form::GradeTooLowException, Form::NotSignedException) {
  canBeExecuted(executor);
  std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}
