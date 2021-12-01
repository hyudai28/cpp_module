#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("PresidentialPardonForm", 0, 25, 5), _Target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form("PresidentialPardonForm", 0, 25, 5), _Target(src.getTarget())
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}






std::string	PresidentialPardonForm::getTarget() const{return (this->_Target);}


PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	this->_Sign = src.getSign();
	return (*this);
}

void	PresidentialPardonForm::excute(Bureaucrat const &bureaucrat)const
{
	if (!this->getSign())
		throw NotSignedExeption();
	if (this->getExcutableGrade() <= bureaucrat.getGrade())
		throw CanNotExcuteExeption();
	//std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	std::cout << "*'``・* 。\n"
			  << "　　|　　　　 `*。\n"
			  << "　,｡∩　　　　 　* 　\n"
			  << "+　(´･ω･`)　*｡+ﾟ\n"
			  << "`*｡ ヽ、　 つ *ﾟ*\n"
			  << "　`・+｡*・' ﾟ⊃ +ﾟ   " << getTarget() << " has been pardoned by Zafod Beeblebrox.\n"
			  << "　☆　　 ∪~ ｡*ﾟ  \n"
			  << "　　`・+｡*・ ﾟ"
			  <<std::endl;
}



//std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm& form)
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