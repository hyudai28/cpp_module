#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int int_num;
	static const float float_num;

public:
	Fixed();
	Fixed(const Fixed &src);
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	Fixed	&operator=(const Fixed &src);
};



#endif