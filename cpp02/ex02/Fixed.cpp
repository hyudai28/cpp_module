#include "Fixed.hpp"
//constructor
Fixed::Fixed():fixed(0){
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
}

Fixed::Fixed(int number){

    Fixed::fixed = number<<Fixed::fixedBits;
}

Fixed::Fixed(float number)
{
    Fixed::fixed = roundf(number * 256);
}

//destructor
Fixed::~Fixed() {
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


const Fixed&	Fixed::max(const Fixed &n1, const Fixed &n2)
{
    if (n1.toFloat() > n2.toFloat())
        return (n1);
    return (n2);
}




const Fixed& Fixed::operator=(const Fixed &src)
{
	Fixed::fixed = src.getRawBits();
	// int_num = src.int_num;
    return (*this);
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed)
{
    return (os << fixed.toFloat());
}

const Fixed Fixed::operator+(const Fixed &right_fixed)
{
    return (toFloat() + right_fixed.toFloat());
}

const Fixed Fixed::operator-(const Fixed &right_fixed)
{
    return (toFloat() - right_fixed.toFloat());
}

const Fixed Fixed::operator*(const Fixed &right_fixed)
{
    return (toFloat() * right_fixed.toFloat());
}

const Fixed Fixed::operator/(const Fixed &right_fixed)
{
    return (toFloat() / right_fixed.toFloat());
}



const Fixed Fixed::operator==(const Fixed &right_fixed)
{
    return (toFloat() == right_fixed.toFloat()? 1 : 0);
}

const Fixed Fixed::operator!=(const Fixed &right_fixed)
{
    return (!(toFloat() == right_fixed.toFloat()? 1 : 0));
}

const Fixed Fixed::operator<(const Fixed &right_fixed)
{
    return (toFloat() < right_fixed.toFloat()? 1 : 0);
}

const Fixed Fixed::operator<=(const Fixed &right_fixed)
{
    return (toFloat() <= right_fixed.toFloat()? 1 : 0);
}

const Fixed Fixed::operator>(const Fixed &right_fixed)
{
    return (toFloat() > right_fixed.toFloat()? 1 : 0);
}

const Fixed Fixed::operator>=(const Fixed &right_fixed)
{
    return (toFloat() >= right_fixed.toFloat()? 1 : 0);
}


const Fixed& 	Fixed::operator++()
{
    fixed++;
    return (*this);
}

const Fixed 	Fixed::operator++(int)
{
    Fixed new_fixed = *this;
    ++*this;
    return (new_fixed);
}
