#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    /* data */
    std::string _name;
    Weapon      &weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void        attack();
};



#endif