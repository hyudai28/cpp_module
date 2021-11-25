#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string		_Name;
	unsigned int	_HitPoints;
	unsigned int	_EnergyPoints;
	unsigned int	_AttackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &src);
	ClapTrap();
	~ClapTrap();
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string		get_Name() const;
	unsigned int	get_HitPoints() const;
	unsigned int	get_EnergyPoints() const;
	unsigned int	get_AttackDamage() const;
	void		set_Name(std::string name);
	void		set_HitPoints(unsigned int hp);
	void		set_EnergyPoints(unsigned int ep);
	void		set_AttackDamage(unsigned int damageAmount);
	ClapTrap	&operator=(ClapTrap &src);
};




#endif