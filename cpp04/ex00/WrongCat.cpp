#include "WrongCat.hpp"

WrongCat::WrongCat (/* args */)
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
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
	this->type = src.getType();
	return (*this);
}


void	WrongCat::makeSound() const
{
	std::cout <<  type << " nyaaaaaaaaaaaa" << std::endl;
}