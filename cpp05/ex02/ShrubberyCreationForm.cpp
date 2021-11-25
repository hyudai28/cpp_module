#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("ShrubberyCreationForm", 0, 145, 137), _Target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form("ShrubberyCreationForm", 0, 145, 137), _Target(src.getTarget())
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}






std::string	ShrubberyCreationForm::getTarget() const{return (this->_Target);}


ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	this->_Sign = src.getSign();
	return (*this);
}

void	ShrubberyCreationForm::excute(Bureaucrat const &bureaucrat)const
{
	if (!this->getSign())
		throw NotSignedExeption();
	if (this->getExcutableGrade() <= bureaucrat.getGrade())
		throw CanNotExcuteExeption();

	std::string newFileName = getTarget();
	newFileName.append("_shrubbery");
	std::ofstream newFile(newFileName.c_str());
	newFile << "　 ＋　　・　 ＋\n\
	　　　 ﾟ｡：｡ﾟ　　＋\n\
	＊ 　・‥☆‥・\n\
	　　＋ ｡ﾟ▲ﾟ｡　 ＊\n\
	　＋　　▲▲\n\
	　　　 ▲▲☆ ＋\n\
	　 ＊ ▲☆彡▲　　＊\n\
	十　 ☆彡▲▲☆\n\
	　　彡▲▲☆∴▲　十\n\
	　 ▲▲☆∴▲▲☆\n\
	　▲☆∴▲▲☆彡▲\n\
	`☆∴▲▲☆彡▲▲☆\n\
	▲▲▲☆彡▲▲☆∴▲\n\
	　　 ＿_|＿|_＿\n\
	　　∥∥∥∥∥∥";
	std::cout << "done" << std::endl;
}



//std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& form)
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