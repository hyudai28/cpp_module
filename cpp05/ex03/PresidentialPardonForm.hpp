#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"


class Bureaucrat;

class PresidentialPardonForm:public Form
{
protected:
	std::string const	_Target;
private:
	/* data */
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	virtual		~PresidentialPardonForm();
	std::string	getTarget()const;
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);
	void	execute(Bureaucrat const &bureaucrat)const;
};
//std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm& form);
#endif