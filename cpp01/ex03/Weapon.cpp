#include "Weapon.hpp"

Weapon::Weapon(std::string weaponName):type(weaponName){}
Weapon::~Weapon(){}



void        Weapon::setType(std::string new_type)
{
	type = new_type;
}

const std::string&	Weapon::getType()
{
	return (type);
}