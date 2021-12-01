#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << _name << " atttacks with his " << weapon.getType() << std::endl; 
}

//HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon),_name(name){}
HumanA::HumanA(std::string name, Weapon &weapon): _name(name), weapon(weapon){}

HumanA::~HumanA(){}