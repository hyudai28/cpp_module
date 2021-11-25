#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
	std::cout << "ScavTrap constructing!!!" << std::endl;
	_Name = "nameless";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " constructing!!!" << std::endl;
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor called!!" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructing!!!" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << get_Name() << " attack " << target
			  << ", causing " << get_AttackDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Gate guard mode..." << std::endl;
}