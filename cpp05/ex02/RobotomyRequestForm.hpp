#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include <iostream>
#include <cstdlib>
#include "Form.hpp"


class Bureaucrat;

class RobotomyRequestForm:public Form
{
protected:
	std::string const	_Target;
private:
	/* data */
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	virtual		~RobotomyRequestForm();
	std::string	getTarget()const;
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);
	void	excute(Bureaucrat const &bureaucrat)const;
};
//std::ostream&	operator<<(std::ostream& os, const RobotomyRequestForm& form);
#endif