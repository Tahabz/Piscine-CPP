#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("") {
  std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
    : AForm(copy), _target(copy._target) {
  std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
  this->AForm::operator=(rhs);
  this->_target = rhs._target;
  return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 72, 45), _target(target) {
  std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
    throw(AForm::GradeTooLowException, AForm::NotSignedException) {
  canBeExecuted(executor);
  std::ifstream src("ascii-tree", std::ios::binary);
  std::ofstream dst(this->_target + "_shrubbery", std::ios::binary);
  dst << src.rdbuf();
  src.close();
  dst.close();
}
