#if !defined(AFORM_HPP)
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class AForm {
public:
  AForm(void);
  AForm(const std::string &name, int gradeToSign,
        int gradeToExecute) throw(AForm::GradeTooHighException,
                                  AForm::GradeTooLowException);
  AForm(const AForm &src);
  AForm &operator=(const AForm &src);
  virtual ~AForm();
  std::string getName() const;
  bool isSigned(void) const;
  int getGradeToSign(void) const;
  int getGradeToExecute(void) const;
  void beSigned(const Bureaucrat &br) throw(AForm::GradeTooLowException);
  virtual void execute(Bureaucrat const &executor) const
      throw(AForm::GradeTooLowException, AForm::NotSignedException) = 0;

  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };

  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };

  class NotSignedException : public std::exception {
  public:
    const char *what() const throw();
  };

private:
  const std::string _name;
  const int _gradeToSign;
  const int _gradeToExecute;
  bool _isSigned;

protected:
  void canBeExecuted(const Bureaucrat &executor) const
      throw(GradeTooLowException, NotSignedException);
};

std::ostream &operator<<(std::ostream &o, AForm &fr);

#endif // BUREAUCRAP_HPP
