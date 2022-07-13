#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main(void)
{
	int i=1;
	std::cout << "==========case [" << i++ << "]===========" << std::endl;
	try
	{
		Bureaucrat bob("bob", 50);
		Form	form("form", 0, 90, 40);
		std::cout << form << std::endl;
		bob.signForm(form);
		bob.GradeIncrement(10);
		bob.signForm(form);
		//error case
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}



	std::cout << "==========case [" << i++ << "]===========" << std::endl;
	try
	{
		Bureaucrat bob("bob2", 50);
		Form	form("form", 0, 15, 40);
		std::cout << form << std::endl;
		bob.signForm(form);
		//error case
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}