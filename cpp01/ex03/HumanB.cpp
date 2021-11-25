#include "HumanB.hpp"

void    HumanB::attack()
{
    if (weapon)
        std::cout << _name << " atttacks with his " << weapon->getType() << std::endl; 
}

HumanB::HumanB(std::string name):_name(name)
{
    weapon = NULL;
}
HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &newWeapon)
{
   weapon = &newWeapon; 
}