#include "Cat.hpp"

Cat::Cat (/* args */)
{
	std::cout << "Cat constructor called" << std::endl;
	_Type = "Cat";
}

Cat::Cat(const Cat& src)
{
	*this = src;
}

Cat ::~Cat ()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
	this->_Type = src.getType();
	return (*this);
}


void	Cat::makeSound() const
{
	std::cout <<  _Type << " nyaaaaaaaaaaaa" << std::endl;
}