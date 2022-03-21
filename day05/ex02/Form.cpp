#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign,
           int gradeToExecute) throw(Form::GradeTooHighException,
                                     Form::GradeTooLowException)
    : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute),
      _isSigned(false) {
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
  else if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooLowException();
  std::cout << "Form's default constructor has been called!" << std::endl;
  return;
};

Form::~Form(void) {
  std::cout << "Form's destructor has been called!" << std::endl;
  return;
};

Form::Form(Form const &src)
    : _name(src._name), _gradeToSign(src._gradeToSign),
      _gradeToExecute(src._gradeToExecute), _isSigned(src._isSigned) {
  std::cout << "Form's copy has been called!" << std::endl;
  *this = src;
  return;
}

Form &Form::operator=(Form const &src) {
  this->_isSigned = src._isSigned;
  return *this;
}

bool Form::isSigned(void) const { return _isSigned; }

int Form::getGradeToSign(void) const { return this->_gradeToSign; }

int Form::getGradeToExecute(void) const { return this->_gradeToExecute; }

std::string Form::getName() const { return this->_name; }

void Form::beSigned(const Bureaucrat &br) throw(Form::GradeTooLowException) {
  if (br.getGrade() > this->getGradeToSign())
    throw Form::GradeTooLowException();
  this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, Form &form) {
  o << "Signed                   : " << (form.isSigned() ? "Yes" : "No")
    << std::endl;
  o << "Name                     : " << form.getName() << std::endl;
  o << "Required grade to sign   : " << form.getGradeToSign() << std::endl;
  o << "Required grade to execute: " << form.getGradeToExecute();
  return o;
}

const char *Form::GradeTooHighException::what() const throw() {
  return "The grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "The grade is too low";
}

const char *Form::NotSignedException::what() const throw() {
  return "The grade is not signed";
}

void Form::canBeExecuted(const Bureaucrat &executor) const
    throw(GradeTooLowException, NotSignedException) {
  if (!this->isSigned())
    throw NotSignedException();
  if (executor.getGrade() > this->getGradeToExecute())
    throw GradeTooLowException();
}
