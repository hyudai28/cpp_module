#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string novice);
	Zombie();
	~Zombie();
	void	announce();
	void	set_zombieName(std::string noviceName);
};

Zombie* zombieHorde( int N, std::string name);



#endif