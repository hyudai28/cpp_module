#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "constructor is called" << std::endl;
	_Type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "copy constructor is called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor is called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "This animal is animal, but is not animal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_Type);
}

void	WrongAnimal::setType(std::string type)
{
	_Type = type; 
}


WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &src)
{
	this->_Type = src.getType();
	return (*this);
}