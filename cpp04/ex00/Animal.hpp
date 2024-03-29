#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
private:
	/* data */
public:
	Animal(/* args */);
	Animal(const Animal &src);
	virtual ~Animal();
	std::string getType() const;
	void		setType(std::string type);
	virtual void	makeSound() const;
	Animal	&operator=(const Animal &src);
};



#endif