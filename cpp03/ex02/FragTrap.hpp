#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(FragTrap &src);
	~FragTrap();
	void	highFivesGuys(void);
};

#endif