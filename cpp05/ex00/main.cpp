#include "Bureaucrat.hpp"


int	main(void)
{
	try
	{
		Bureaucrat bob("bob", 50);
		bob.GradeIncrement(10);
		bob.GradeDecrement(10);
		//error case
		bob.GradeIncrement(100);
		std::cout << "This message is not displayed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat bob("bob", 0);
		std::cout << "This message is not displayed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat bob("bob", 151);
		std::cout << "This message is not displayed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		const Bureaucrat bob("const bob", 70);
		//std::cout << "This message is not displayed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}