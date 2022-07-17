#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Form.hpp"


class Bureaucrat;

class ShrubberyCreationForm :public Form
{
protected:
	std::string const	_Target;
private:
	/* data */
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	virtual		~ShrubberyCreationForm();
	std::string	getTarget()const;
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);
	void	execute(Bureaucrat const &bureaucrat) const;
};
//std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& form);
#endif