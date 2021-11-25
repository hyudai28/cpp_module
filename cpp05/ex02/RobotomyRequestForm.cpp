#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("RobotomyRequestForm", 0, 72, 45), _Target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form("RobotomyRequestForm", 0, 72, 45), _Target(src.getTarget())
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}






std::string	RobotomyRequestForm::getTarget() const{return (this->_Target);}


RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->_Sign = src.getSign();
	return (*this);
}

void	RobotomyRequestForm::excute(Bureaucrat const &bureaucrat)const
{
	if (!this->getSign())
		throw NotSignedExeption();
	if (this->getExcutableGrade() <= bureaucrat.getGrade())
		throw CanNotExcuteExeption();
	std::cout << "+++++++++D+R+R+R+R+R+R+R+R+R+R+R+R+R+R+R++++++++" << std::endl;
	if (rand() % 2)	
		std::cout << getTarget() << " had a successful Robotomy." << std::endl;
	else
		std::cout << "kagaku no shinpo hatten ni gisei ha tsukimono de-su" << std::endl;
}



//std::ostream&	operator<<(std::ostream& os, const RobotomyRequestForm& form)
//{
//	if (form.getSign())
//		os << "This document is signed. Anyone above the rank [" << form.getExcutableGrade()
//		   << "] can excute. Signed,signableGrade,ExcutableGrade ->" 
//		   << form.getSign() << "," << form.getSignableGrade() << "," << form.getExcutableGrade();
//	else
//		os << "This document is not signed. Anyone above the rank [" << form.getSignableGrade()
//		   << "] can sign. Signed,signableGrade,ExcutableGrade ->" 
//		   << form.getSign() << "," << form.getSignableGrade() << "," << form.getExcutableGrade();
//	return (os);
//}