#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap muh("muh");
	muh.attack("F");
	muh.takeDamage(5);
	muh.beRepaired(1);
	muh.takeDamage(10);

	ClapTrap hyudai("hyudai");
	hyudai.takeDamage(-10);
}