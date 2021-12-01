#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string novice)
{
	name = novice;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead again." << std::endl;
}