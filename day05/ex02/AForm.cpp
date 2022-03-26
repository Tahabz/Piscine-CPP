#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, int gradeToSign,
             int gradeToExecute) throw(AForm::GradeTooHighException,
                                       AForm::GradeTooLowException)
    : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute),
      _isSigned(false) {
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
  else if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooLowException();
  std::cout << "AForm's default constructor has been called!" << std::endl;
  return;
};

AForm::~AForm(void) {
  std::cout << "Form's destructor has been called!" << std::endl;
  return;
};
AForm::AForm(void)
    : _name("name"), _gradeToSign(150), _gradeToExecute(150), _isSigned(false){

                                                              };

AForm::AForm(AForm const &src)
    : _name(src._name), _gradeToSign(src._gradeToSign),
      _gradeToExecute(src._gradeToExecute), _isSigned(src._isSigned) {
  std::cout << "Form's copy has been called!" << std::endl;
  *this = src;
  return;
}

AForm &AForm::operator=(AForm const &src) {
  this->_isSigned = src._isSigned;
  return *this;
}

bool AForm::isSigned(void) const { return _isSigned; }

int AForm::getGradeToSign(void) const { return this->_gradeToSign; }

int AForm::getGradeToExecute(void) const { return this->_gradeToExecute; }

std::string AForm::getName() const { return this->_name; }

void AForm::beSigned(const Bureaucrat &br) throw(AForm::GradeTooLowException) {
  if (br.getGrade() > this->getGradeToSign())
    throw AForm::GradeTooLowException();
  this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, AForm &form) {
  o << "Signed                   : " << (form.isSigned() ? "Yes" : "No")
    << std::endl;
  o << "Name                     : " << form.getName() << std::endl;
  o << "Required grade to sign   : " << form.getGradeToSign() << std::endl;
  o << "Required grade to execute: " << form.getGradeToExecute();
  return o;
}

const char *AForm::GradeTooHighException::what() const throw() {
  return "The grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
  return "The grade is too low";
}

const char *AForm::NotSignedException::what() const throw() {
  return "The grade is not signed";
}

void AForm::canBeExecuted(const Bureaucrat &executor) const
    throw(GradeTooLowException, NotSignedException) {
  if (!this->isSigned())
    throw NotSignedException();
  if (executor.getGrade() > this->getGradeToExecute())
    throw GradeTooLowException();
}
