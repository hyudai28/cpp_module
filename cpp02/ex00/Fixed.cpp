#include "Fixed.hpp"
#include <iostream>

int		Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (int_num);
}
void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    int_num = raw;
}

Fixed& Fixed::operator=(const Fixed &src)
{
    std::cout << "Assignation operator called" << std::endl;
	int_num = src.getRawBits();
	// int_num = src.int_num;
    return (*this);
}

Fixed::Fixed():int_num(0){
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}