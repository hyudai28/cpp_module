#include "Animal.hpp"

Animal::Animal(/* args */)
{
	std::cout << "constructor is called" << std::endl;
	type = "Animal";
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
	return (this->type);
}

void	Animal::setType(std::string type_string)
{
	type = type_string; 
}

Animal&	Animal::operator=(const Animal &src)
{
	this->type = src.getType();
	return (*this);
}