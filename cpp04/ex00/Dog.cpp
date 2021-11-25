#include "Dog.hpp"

Dog::Dog (/* args */)
{
	std::cout << "Dog constructor called" << std::endl;
	_Type = "Dog";
}

Dog::Dog(const Dog& src)
{
	*this = src;
}

Dog ::~Dog ()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	this->_Type = src.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << _Type << " one" << std::endl;
}