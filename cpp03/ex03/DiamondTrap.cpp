#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap constructing!!!" << std::endl;
	_Name = "nameless";
	std::string cName = _Name; 
	this->ClapTrap::_Name = cName.append("_clap_name");
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructing!!!" << std::endl;
	std::string cName = name; 
	this->_Name = name;
	this->ClapTrap::_Name = cName.append("_clap_name");
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap &src)
{
	std::cout << "DiamondTrap copy constructor called!!" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructing!!!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "_Name: " << this->_Name << "\n"
			  << "ClapTrap_name: " << this->ClapTrap::_Name << std::endl;
}