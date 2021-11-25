#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        /* data */
        std::string type;
    public:
        Weapon(std::string weaponName);
        ~Weapon();
        const std::string&   getType();
        void                setType(std::string new_type);
};







#endif