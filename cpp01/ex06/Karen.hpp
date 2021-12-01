#ifndef	KAREN_HPP
# define KAREN_HPP

#include <string>

# define DEBUG		1
# define INFO		2
# define WARNING	3
# define ERROR		4


class Karen
{
private:
	/* data */
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	Karen();
	~Karen();
	void	complain( std::string level);
};


#endif