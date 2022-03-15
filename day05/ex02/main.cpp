#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat taha("taha", 120);

		std::cout << taha << std::endl;

		Form agreement("Agreement", 110, 1);

		taha.signForm(agreement);

		std::cout << agreement << std::endl;
		return 0;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}