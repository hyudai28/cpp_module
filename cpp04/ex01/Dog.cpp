#include "Dog.hpp"

Dog::Dog (/* args */)
{
	std::cout << "Dog constructor called" << std::endl;
	_Type = "Dog";
	this->brain = new Brain();
	std::cout << "	Dog constructed" << std::endl;
}

Dog::Dog(const Dog& src)
{
	std::cout << "[Dog] copy constructor called" << std::endl;
	*this = src;
	std::cout << "	copy constructored dog" << std::endl;
}

Dog ::~Dog ()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
	std::cout << "	Dog destructed" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	this->_Type = src.getType();
	this->brain = new Brain(*src.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << _Type << " one" << std::endl;
}