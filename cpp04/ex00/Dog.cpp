#include "Dog.hpp"

Dog::Dog (/* args */)
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
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
	this->type = src.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << type << " one" << std::endl;
}