#if !defined(SHRUBBERYCREATIONFORM_HPP)
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
class ShrubberyCreationForm : public AForm {
public:
  ShrubberyCreationForm(void);
  ShrubberyCreationForm(const std::string &target);
  ShrubberyCreationForm(const ShrubberyCreationForm &src);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
  virtual ~ShrubberyCreationForm();
  void execute(Bureaucrat const &executor) const
      throw(AForm::GradeTooLowException, AForm::NotSignedException);

private:
  std::string _target;
};

#endif