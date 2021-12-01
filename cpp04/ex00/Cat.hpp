#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat (/* args */);
	Cat(const Cat& src);
	~Cat ();
	Cat &operator=(const Cat &src);
	void	makeSound() const;
};



#endif