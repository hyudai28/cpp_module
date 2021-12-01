#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	/* data */
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &src);
	~FragTrap();
	void	highFivesGuys(void);
};

#endif