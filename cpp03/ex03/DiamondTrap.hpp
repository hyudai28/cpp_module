#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :public ScavTrap , public FragTrap
{
private:
	/* data */
	std::string _Name;
	using FragTrap::_HitPoints;
	using FragTrap::_AttackDamage;
	using ScavTrap::_EnergyPoints;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &src);
	~DiamondTrap();
	void	whoAmI();
};

#endif