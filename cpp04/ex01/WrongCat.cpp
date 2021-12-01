#include "WrongCat.hpp"

WrongCat::WrongCat (/* args */)
{
	std::cout << "WrongCat constructor called" << std::endl;
	_Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src)
{
	*this = src;
}

WrongCat ::~WrongCat ()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	this->_Type = src.getType();
	return (*this);
}


void	WrongCat::makeSound() const
{
	std::cout <<  _Type << " nyaaaaaaaaaaaa" << std::endl;
}