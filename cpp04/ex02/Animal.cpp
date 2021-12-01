#include "Animal.hpp"

Animal::Animal(/* args */)
{
	std::cout << "constructor is called" << std::endl;
	_Type = "Animal";
}

Animal::Animal(const Animal &src)
{
	std::cout << "copy constructor is called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "destructor is called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "This animal is animal, but is not animal" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_Type);
}

void	Animal::setType(std::string type)
{
	_Type = type; 
}


Animal&	Animal::operator=(const Animal &src)
{
	this->_Type = src.getType();
	return (*this);
}