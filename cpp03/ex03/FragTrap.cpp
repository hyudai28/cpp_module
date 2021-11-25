#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
	std::cout << "FragTrap constructing!!!" << std::endl;
	_Name = "nameless";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " constructing!!!" << std::endl;
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap &src)
{
	std::cout << "FragTrap copy constructor called!!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructing!!!" << std::endl;
}


void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hi! five!" << std::endl;
}