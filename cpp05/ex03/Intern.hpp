#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();
		Intern &operator=(const Intern &src);
		Form	*makeForm(const std::string formName, const std::string &formPtr);
		class InvalidRequest: public std::exception
		{
			const char* what() const throw();
		};
};

#endif