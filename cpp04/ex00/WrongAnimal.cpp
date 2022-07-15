#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "Wrong Animal constructor is called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "Wrong Animal copy constructor is called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destructor is called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "This animal is animal, but is not animal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string type_string)
{
	type = type_string; 
}


WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &src)
{
	this->type = src.getType();
	return (*this);
}