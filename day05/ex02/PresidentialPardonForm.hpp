#if !defined(PRESEDENTIALPARDONFORM_HPP)
#define PRESEDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
public:
  PresidentialPardonForm(void);
  PresidentialPardonForm(const std::string &target);
  PresidentialPardonForm(const PresidentialPardonForm &src);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
  virtual ~PresidentialPardonForm();
  void execute(Bureaucrat const &executor) const
      throw(AForm::GradeTooLowException, AForm::NotSignedException);

private:
  std::string _target;
};

#endif
