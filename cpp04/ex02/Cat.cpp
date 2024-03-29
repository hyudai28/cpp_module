#include "Cat.hpp"

Cat::Cat (/* args */)
{
	std::cout << "Cat constructor called" << std::endl;
	_Type = "Cat";
	this->brain = new Brain();
	std::cout << "	Cat constructed" << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << "[Cat] copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Cat ::~Cat ()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
	std::cout << "	Cat destructed" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src.getType();
	*this->brain = Brain(*src.brain);
	return (*this);
}


void	Cat::makeSound() const
{
	std::cout <<  _Type << " nyaaaaaaaaaaaa" << std::endl;
}