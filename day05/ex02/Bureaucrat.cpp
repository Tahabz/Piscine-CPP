#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name,
                       int grade) throw(Bureaucrat::GradeTooHighException,
                                        Bureaucrat::GradeTooLowException)
    : _name(name) {
  if (grade < 1)
    throw GradeTooHighException();
  else if (grade > 150)
    throw GradeTooLowException();
  this->_grade = grade;
  std::cout << "Bureaucrat's default constructor has been called!" << std::endl;
  return;
};

Bureaucrat::~Bureaucrat(void) {
  std::cout << "Bureaucrat's destructor has been called!" << std::endl;
  return;
};

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
  std::cout << "Bureaucrat's copy has been called!" << std::endl;
  *this = src;
  return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
  this->_grade = src._grade;
  return *this;
}

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void Bureaucrat::incrementGrade() throw(Bureaucrat::GradeTooHighException) {
  if (this->_grade - 1 < 1)
    throw Bureaucrat::GradeTooHighException();
  this->_grade -= 1;
}

void Bureaucrat::decrementGrade() throw(Bureaucrat::GradeTooLowException) {
  if (this->_grade + 1 > 150)
    throw Bureaucrat::GradeTooLowException();
  this->_grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "The grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "The grade is too low";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &bc) {
  o << bc.getName() << ", bureaucrat grade " << bc.getGrade();
  return o;
}

void Bureaucrat::signForm(AForm &form) const {
  try {
    form.beSigned(*this);
    std::cout << this->getName() << " signed " << form.getName() << std::endl;
  } catch (AForm::GradeTooLowException &e) {
    std::cout << this->getName() << " could not sign the form because "
              << e.what() << std::endl;
  }
}

void Bureaucrat::executeForm(const AForm &form) const {
  try {
    form.execute(*this);
  } catch (std::exception &e) {
    std::cout << this->_name << " couldn't execute " << form.getName()
              << " because " << e.what() << std::endl;
    return;
  }
  std::cout << this->_name << " executed " << form.getName() << std::endl;
}