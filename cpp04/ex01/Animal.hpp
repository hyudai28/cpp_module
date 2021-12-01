#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string _Type;
private:
	/* data */
public:
	Animal(/* args */);
	Animal(const Animal &src);
	~Animal();
	std::string getType() const;
	void		setType(std::string type);
	virtual void	makeSound() const = 0;
	Animal	&operator=(const Animal &src);
};



#endif