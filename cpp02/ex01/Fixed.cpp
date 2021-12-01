#include "Fixed.hpp"
//constructor
Fixed::Fixed():fixed(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int number){
    std::cout << "Int constructor called" << std::endl;

    Fixed::fixed = number<<Fixed::fixedBits;
}

Fixed::Fixed(float number)
{
    std::cout << "Float constructor called" << std::endl;
    Fixed::fixed = roundf(number * 256);
}

//destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}









//member func
int		Fixed::getRawBits() const
{
    return (Fixed::fixed);
}

void	Fixed::setRawBits(int const raw)
{
    Fixed::fixed = raw;
}

float	Fixed::toFloat( void ) const
{
    float ret;
    ret = static_cast<float>(fixed) / (1 << fixedBits);
    return (ret);
}

int	Fixed::toInt( void ) const
{
    return (Fixed::fixed>>8);
}






Fixed& Fixed::operator=(const Fixed &src)
{
    std::cout << "Assignation operator called" << std::endl;
	Fixed::fixed = src.getRawBits();
	// int_num = src.int_num;
    return (*this);
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed)
{
    return (os << fixed.toFloat());
}