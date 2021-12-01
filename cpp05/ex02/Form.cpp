#include "Form.hpp"

Form::Form(std::string name, bool const sign, int const signableGrade, int const excutableGrade) : _Name(name), _Sign(sign), _SignableGrade(signableGrade), _ExcutableGrade(excutableGrade)
{
	if (signableGrade < 1 || excutableGrade < 1)
		throw GradeTooHighExeption();
	else if (signableGrade > 150 || excutableGrade > 150)
		throw GradeTooLowExeption();
	std::cout << "form constructed"<< std::endl;
}

Form::Form(const Form &src) : _Name(src.getName()), _SignableGrade(src.getSignableGrade()), _ExcutableGrade(src.getExcutableGrade())
{
	*this = src;
}

Form::~Form()
{
}





std::string	Form::getName() const{return (this->_Name);};
int	Form::getSign() const{return (this->_Sign);}
int	Form::getSignableGrade() const{return (this->_SignableGrade);}
int	Form::getExcutableGrade() const{return (this->_ExcutableGrade);}
void Form::setSign(){_Sign = true;}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	std::cout << "form check\n" << *this << std::endl;
	if (bureaucrat.getGrade() <= this->getSignableGrade())
	{
		this->setSign();
		std::cout << bureaucrat.getName() <<" signs " << *this << std::endl;
	}
	else
		throw GradeTooLowExeption();
}

const char* Form::GradeTooHighExeption::what() const throw()
{
	return ("===ERR=== grade too high");
}
const char* Form::GradeTooLowExeption::what() const throw()
{
	return ("===ERR=== grade too Low");
}
const char* Form::NotSignedExeption::what() const throw()
{
	return ("===ERR=== This form is not signed.");
}
const char* Form::CanNotExcuteExeption::what() const throw()
{
	return ("===ERR=== The position is too low to execute this form.");
}
const char* Form::CanNotOpenExeption::what() const throw()
{
	return ("===ERR=== <target>_shrubbery can not open file.");
}





Form&	Form::operator=(const Form &src)
{
	this->_Sign = src.getSign();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	if (form.getSign())
		os << "This document is signed. Anyone above the rank [" << form.getExcutableGrade()
		   << "] can excute. Signed,signableGrade,ExcutableGrade ->" 
		   << form.getSign() << "," << form.getSignableGrade() << "," << form.getExcutableGrade();
	else
		os << "This document is not signed. Anyone above the rank [" << form.getSignableGrade()
		   << "] can sign. Signed,signableGrade,ExcutableGrade ->" 
		   << form.getSign() << "," << form.getSignableGrade() << "," << form.getExcutableGrade();
	return (os);
}