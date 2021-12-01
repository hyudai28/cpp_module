#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string _Type;
private:
	/* data */
public:
	WrongAnimal(/* args */);
	WrongAnimal(const WrongAnimal &src);
	~WrongAnimal();
	std::string getType() const;
	void		setType(std::string type);
	void	makeSound() const;
	WrongAnimal	&operator=(const WrongAnimal &src);
};



#endif