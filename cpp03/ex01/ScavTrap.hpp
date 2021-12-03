#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(ScavTrap &src);
	~ScavTrap();
	void	attack(std::string const & target);
	void	guardGate();
};
