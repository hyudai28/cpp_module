#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int const grade):_Name(name), _Grade(LOWEST_GRADE)
{
	if (grade < 1)
		throw GradeTooHighExeption();
	else if (grade > 150)
		throw GradeTooLowExeption();
	setGrade(grade);
	std::cout << name << " constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
}




std::string	Bureaucrat::getName() const
{
	return (this->_Name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_Grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighExeption();
	else if (grade > 150)
		throw GradeTooLowExeption();
	_Grade = grade;
}

const char* Bureaucrat::GradeTooHighExeption::what() const throw()
{
	return ("===ERR=== this grade is too high");
}
const char* Bureaucrat::GradeTooLowExeption::what() const throw()
{
	return ("===ERR=== this grade is too Low");
}

void		Bureaucrat::GradeIncrement(int step)
{
	std::cout << "recommend " << _Name << " for promotion" << std::endl;
	int grade = getGrade() - step;
	if (grade < 1)
		throw GradeTooHighExeption();
	else if (grade > 150)
		throw GradeTooLowExeption();
	setGrade(getGrade() - step);
	std::cout << "	done." << _Name << " promoted [" 
			  << getGrade() + step << "] -> [" << getGrade()  << "]" << std::endl;
}
void		Bureaucrat::GradeDecrement(int step)
{
	std::cout << "recommend " << _Name << " for demotion" << std::endl;
	int grade = getGrade() + step;
	if (grade < 1)
		throw GradeTooHighExeption();
	else if (grade > 150)
		throw GradeTooLowExeption();
	setGrade(getGrade() + step);
	std::cout << "	done." << _Name << " demoted [" 
			  << getGrade() - step << "] -> [" << getGrade()  << "]" << std::endl;
}




Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_Name = src.getName();
	this->_Grade = src.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& brct)
{
	os << brct.getName() << " : Rank[" << brct.getGrade() << "]";
	return (os);
}