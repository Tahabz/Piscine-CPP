#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

int main() {
  Bureaucrat bob("Bob", 46);
  std::cout << bob << std::endl;

  ShrubberyCreationForm shrubbery("Garden");
  std::cout << shrubbery << std::endl;

  RobotomyRequestForm robotomy("Student");
  std::cout << robotomy << std::endl;

  PresidentialPardonForm presidential("Traitor");
  std::cout << presidential << std::endl;

  bob.signForm(shrubbery);
  bob.executeForm(shrubbery);

  bob.signForm(robotomy);
  bob.executeForm(robotomy);

  bob.signForm(presidential);
  bob.executeForm(presidential);

  return 0;
}