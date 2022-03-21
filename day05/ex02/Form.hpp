#if !defined(FORM_HPP)
#define FORM_HPP
#include <iostream>

class Bureaucrat;
class Form {
public:
  Form(void);
  Form(const std::string &name, int gradeToSign,
       int gradeToExecute) throw(Form::GradeTooHighException,
                                 Form::GradeTooLowException);
  Form(const Form &src);
  Form &operator=(const Form &src);
  virtual ~Form();
  std::string getName() const;
  bool isSigned(void) const;
  int getGradeToSign(void) const;
  int getGradeToExecute(void) const;
  void beSigned(const Bureaucrat &br) throw(Form::GradeTooLowException);
  virtual void execute(Bureaucrat const &executor) const
      throw(Form::GradeTooLowException, Form::NotSignedException) = 0;

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

std::ostream &operator<<(std::ostream &o, Form &fr);

#endif // BUREAUCRAP_HPP
