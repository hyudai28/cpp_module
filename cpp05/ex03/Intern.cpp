#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{

}

Intern& Intern::operator=(const Intern &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

const char * Intern::InvalidRequest::what() const throw()
{
	return ("===ERR=== this request is invalid.");
}

Form *Intern::makeForm(const std::string formName, const std::string &formTarget)
{
			printf("bbb\n");
	std::string funcName[3] = {
		std::string("robotomy request"),
		std::string("shrubbery creation"),
		std::string("presidential pardon"),
	};

	std::string forms[3] = {
		"RobotomyRequestFrom",
		"ShrubberyCreationForm",
		"PresidentialPardonForm",
	};

	Form *funcPtr[] = {
		new RobotomyRequestForm(formTarget),
		new ShrubberyCreationForm(formTarget),
		new PresidentialPardonForm(formTarget),
	};
	int	funcNum = (formName == funcName[0]) * 1 +\
					(formName == funcName[1]) * 2 +\
					(formName == funcName[2]) * 3;
	std::cout << funcNum << std::endl;
	if (funcNum == 0)
		throw InvalidRequest();
	std::cout << "Intern creates " << forms[funcNum - 1] << std::endl;
	return (funcPtr[funcNum - 1]);
}