#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
private:
	int fixed;
	static const int fixedBits = 8;

public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed(int number);
	Fixed(float number);
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void )const;
	static const Fixed&	max(const Fixed &n1, const Fixed &n2);
	//operator calc
	const Fixed	&operator=(const Fixed &src);
	const Fixed 	operator+(const Fixed &fixed);
	const Fixed 	operator-(const Fixed &fixed);
	const Fixed 	operator*(const Fixed &fixed);
	const Fixed 	operator/(const Fixed &fixed);
	//operator comparison
	const Fixed 	operator==(const Fixed &fixed);
	const Fixed 	operator!=(const Fixed &fixed);
	const Fixed 	operator<(const Fixed &fixed);
	const Fixed 	operator<=(const Fixed &fixed);
	const Fixed 	operator>(const Fixed &fixed);
	const Fixed 	operator>=(const Fixed &fixed);
	const Fixed& 	operator++();	//prefix
	const Fixed 	operator++(int);	//postfix


};

std::ostream& operator<<(std::ostream &os, const Fixed &fixed);

#endif