#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
std::cout << "Shrubbery Form test" << std::endl;
	std::cout << "_______________success case_______________" << std::endl;
	try
	{
		Bureaucrat bob("bob", 1);
		ShrubberyCreationForm SCForm("SCform");
		bob.signForm(SCForm);
		SCForm.excute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}



	//std::cout << "Robotomy Form test" << std::endl;
	//std::cout << "_______________success case_______________" << std::endl;
	//try
	//{
	//	Bureaucrat bob("bob", 1);
	//	RobotomyRequestForm RRForm("RRform");
	//	bob.signForm(RRForm);
	//	RRForm.excute(bob);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << std::endl;;
	//}
	//std::cout << "\n\n_______________maybe failed case_______________" << std::endl;
	//try
	//{
	//	Bureaucrat bob("bob", 10);
	//	RobotomyRequestForm RRForm("RRform");
	//	bob.signForm(RRForm);
	//	RRForm.excute(bob);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << std::endl;
	//}
	//std::cout << "\n\n_______________bureaucrat grade is too low to sign case_______________" << std::endl;
	//try
	//{
	//	Bureaucrat bob("bob", 100);
	//	PresidentialPardonForm ppForm("ppform");
	//	bob.signForm(ppForm);
	//	ppForm.excute(bob);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << std::endl;
	//}
	//std::cout << "\n\n_______________bureaucrat grade is too low to excute case_______________" << std::endl;
	//try
	//{
	//	Bureaucrat bob("bob", 25);
	//	PresidentialPardonForm ppForm("ppform");
	//	bob.signForm(ppForm);
	//	ppForm.excute(bob);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << std::endl;
	//}















	//std::cout << "presidentialPardon Form test" << std::endl;
	//std::cout << "_______________success case_______________" << std::endl;
	//try
	//{
	//	Bureaucrat bob("bob", 1);
	//	PresidentialPardonForm ppForm("ppform");
	//	bob.signForm(ppForm);
	//	ppForm.excute(bob);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << std::endl;;
	//}
	//std::cout << "\n\n_______________not signed case_______________" << std::endl;
	//try
	//{
	//	Bureaucrat bob("bob", 10);
	//	PresidentialPardonForm ppForm("ppform");
	//	//bob.signForm(ppForm);
	//	ppForm.excute(bob);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << std::endl;
	//}
	//std::cout << "\n\n_______________bureaucrat grade is too low to sign case_______________" << std::endl;
	//try
	//{
	//	Bureaucrat bob("bob", 100);
	//	PresidentialPardonForm ppForm("ppform");
	//	bob.signForm(ppForm);
	//	ppForm.excute(bob);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << std::endl;
	//}
	//std::cout << "\n\n_______________bureaucrat grade is too low to excute case_______________" << std::endl;
	//try
	//{
	//	Bureaucrat bob("bob", 25);
	//	PresidentialPardonForm ppForm("ppform");
	//	bob.signForm(ppForm);
	//	ppForm.excute(bob);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << std::endl;
	//}
}