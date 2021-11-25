#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "constructor is done" << std::endl;
}

ClapTrap::ClapTrap():_Name("nameless"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "constructor is done" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	std::cout << "CrapTrap copy constructor called!!" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor is done" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << get_Name() << " attack " << target
			  << ", causing" << get_AttackDamage() << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int nowHP = get_HitPoints();
	nowHP -= amount;
	if (nowHP > 0)
	{
		set_HitPoints(nowHP);
		std::cout << "ClapTrap " << get_Name() << " taken " << amount << " damage"
				  << ", now" << get_Name() << " have " << get_HitPoints() << " remaining." << std::endl;
	}
	else
	{
		set_HitPoints(0);
		std::cout << "ClapTrap " << get_Name() << " taken " << amount << " damage"
				  << ", now" << get_Name() << " is dead." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	set_HitPoints(get_HitPoints() + amount);
	std::cout << "ClapTrap " << get_Name() << " is repaired, now " << get_Name()
			  << " have " << get_HitPoints() << " remaining." << std::endl;
}

std::string	ClapTrap::get_Name() const
{
	return (_Name);
}
unsigned int	ClapTrap::get_HitPoints() const
{
	return (_HitPoints);
}
unsigned int	ClapTrap::get_EnergyPoints() const
{
	return (_EnergyPoints);
}
unsigned int	ClapTrap::get_AttackDamage() const
{
	return (_AttackDamage);
}

void	ClapTrap::set_Name(std::string name)
{
	this->_Name = name;
}

void	ClapTrap::set_HitPoints(unsigned int point_index)
{
	this->_HitPoints = point_index;
}

void	ClapTrap::set_EnergyPoints(unsigned int energy_index)
{
	this->_EnergyPoints = energy_index;
}

void	ClapTrap::set_AttackDamage(unsigned int attack_index)
{
	this->_AttackDamage = attack_index;
}



ClapTrap& ClapTrap::operator=(ClapTrap &src)
{
	set_Name(src.get_Name());
	set_HitPoints(src.get_HitPoints());
	set_EnergyPoints(src.get_EnergyPoints());
	set_AttackDamage(src.get_AttackDamage());
	return (*this);
}