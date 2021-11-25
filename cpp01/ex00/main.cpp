#include "Zombie.hpp"

int	main()
{
    Zombie* zombie = newZombie("rookie");
    zombie->announce();
    randomChump("bob");
    delete zombie;
    // system("leaks Zombie");
}