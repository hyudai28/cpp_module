#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#include <stdio.h>
int	main(void)
{
	{
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}

	{
		try
		{
			Bureaucrat bob("bob", 1);
			Intern someRandomIntern;
			Form *rrf;

			rrf = someRandomIntern.makeForm("presidential pardon", "bender");
			bob.signForm(*rrf);
			bob.executeForm(*rrf);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "---null pointer check----\n" << std::endl;
		try
		{
			Bureaucrat bob("bob", 1);
			Intern someRandomIntern;
			Form *rrf;

			rrf = someRandomIntern.makeForm("n", "bender");
			bob.signForm(*rrf);
			bob.executeForm(*rrf);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

}