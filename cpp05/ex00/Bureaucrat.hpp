#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

# define GRADE_ERR_HIGH 1
# define GRADE_ERR_LOW	2
# define LOWEST_GRADE 150

class Bureaucrat
{
protected:
	std::string _Name;
	int			_Grade;
private:
	/* data */
public:
	Bureaucrat(std::string const &name, int const grade);
	Bureaucrat(const Bureaucrat &src);
	virtual		~Bureaucrat();
	class	GradeTooHighExeption: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	GradeTooLowExeption: public std::exception
	{
		virtual const char* what() const throw();
	};
	std::string getName() const;
	int			getGrade() const;
	void		setGrade(int grade);
	void		GradeIncrement(int step);
	void		GradeDecrement(int step);
	Bureaucrat	&operator=(const Bureaucrat &src);
};



std::ostream&	operator<<(std::ostream& os, const Bureaucrat& brct);
#endif