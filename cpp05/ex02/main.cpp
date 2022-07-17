#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	{
		std::cout << "Shrubbery Form test" << std::endl;
		std::cout << "_______________success case_______________" << std::endl;
		try
		{
			Bureaucrat bob("bob", 1);
			ShrubberyCreationForm SCForm("SCform");
			bob.signForm(SCForm);
			bob.executeForm(SCForm);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "_______________failed case_______________" << std::endl;
		try
		{
			Bureaucrat bob("bob", 146);
			ShrubberyCreationForm SCForm("SCform");
			bob.signForm(SCForm);
			bob.executeForm(SCForm);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "Robotomy Form test" << std::endl;
		std::cout << "_______________success case_______________" << std::endl;
		try
		{
			Bureaucrat bob("bob", 1);
			RobotomyRequestForm RRForm("RRform");
			bob.signForm(RRForm);
			RRForm.execute(bob);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			;
		}
		std::cout << "\n\n_______________failed case_______________" << std::endl;
		try
		{
			Bureaucrat bob("bob", 10);
			RobotomyRequestForm RRForm("RRform");
			bob.signForm(RRForm);
			RRForm.execute(bob);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "Presidential test" << std::endl;
		std::cout << "_______________success case_______________" << std::endl;
		try
		{
			Bureaucrat bob("bob", 1);
			PresidentialPardonForm ppForm("ppform");
			bob.signForm(ppForm);
			ppForm.execute(bob);
			std::cout << "	[success!]" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "_______________failed case_______________" << std::endl;
		try
		{
			Bureaucrat bob("bob", 24);
			PresidentialPardonForm ppForm("ppform");
			bob.signForm(ppForm);
			ppForm.execute(bob);
			std::cout << "	[success!]" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}