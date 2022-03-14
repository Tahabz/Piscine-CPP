#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		// Bureaucrat Bureaucrat1("Taha", 149);
		Bureaucrat Bureaucrat2("Taha", 2);
		// Bureaucrat Bureaucrat3("Taha", 160);
		// Bureaucrat1.decrementGrade();
		// Bureaucrat1.decrementGrade();
		Bureaucrat2.incrementGrade();
		// Bureaucrat2.incrementGrade();
		std::cout << Bureaucrat2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}