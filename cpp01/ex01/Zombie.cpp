#include "Zombie.hpp"

Zombie::Zombie(std::string novice)
{
	name = novice;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " is dead again." << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


void	Zombie::set_zombieName(std::string noviceName)
{
	name = noviceName; 
}