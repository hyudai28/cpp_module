#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

# define GRADE_ERR_HIGH 1
# define GRADE_ERR_LOW	2
# define LOWEST_GRADE 150

class Bureaucrat;

class Form
{
protected:
	std::string const	_Name;
	bool				_Sign;
	int	const			_SignableGrade;
	int	const			_ExcutableGrade;
private:
	/* data */
public:
	Form(std::string name, bool const sign, int const signableGrade, int const excutableGrade);
	Form(const Form &src);
	virtual		~Form();
	class	GradeTooHighExeption: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	GradeTooLowExeption: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	CanNotexcuteExeption: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	NotSignedExeption: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	CanNotOpenExeption: public std::exception
	{
		virtual const char* what() const throw();
	};
	virtual int	execute(Bureaucrat const & executor) = 0;
	void		setSign();
	std::string	getName() const;
	int			getSign() const;
	int			getSignableGrade() const;
	int			getExcutableGrade() const;
	void		GradeIncrement(int step);
	void		GradeDecrement(int step);
	Form	&operator=(const Form &src);
	void		beSigned(Bureaucrat const &bureaucrat);
};

//void		beSigned(Bureaucrat const &bureaucrat, Form const &form);


std::ostream&	operator<<(std::ostream& os, const Form& form);
#endif