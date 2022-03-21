#if !defined(PRESEDENTIALPARDONFORM_HPP)
#define PRESEDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
  PresidentialPardonForm(void);
  PresidentialPardonForm(const std::string &target);
  PresidentialPardonForm(const PresidentialPardonForm &src);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
  virtual ~PresidentialPardonForm();
  void execute(Bureaucrat const &executor) const
      throw(Form::GradeTooLowException, Form::NotSignedException);

private:
  std::string _target;
};

#endif
