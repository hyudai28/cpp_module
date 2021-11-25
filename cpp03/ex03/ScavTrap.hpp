#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	/* data */
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &src);
	~ScavTrap();
	void	attack(std::string const & target);
	void	guardGate();
};

#endif