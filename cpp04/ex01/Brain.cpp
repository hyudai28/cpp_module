#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << "Brain constructor is called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor is called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}

std::string	*Brain::getIdeas()
{
	return (this->ideas);
}

Brain&	Brain::operator=(const Brain &src)
{
	for(int i = 0;i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}