#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	/* data */
	std::string ideas[100];
public:
	Brain(/* args */);
	Brain(const Brain &src);
	virtual ~Brain();
	std::string *getIdeas();
	Brain	&operator=(const Brain &src);
};



#endif