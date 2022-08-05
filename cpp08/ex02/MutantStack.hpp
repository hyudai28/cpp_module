#ifndef MUTANTSTACK_HPP
# define  MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
private:
	/* data */
public:
	MutantStack(/* args */)
		{}
	MutantStack(MutantStack const &src)
	{
		*this = src;
	}
	~MutantStack()
		{}
	MutantStack &operator=(MutantStack const &src)
	{
		if (this == &src)
			return (*this);
		return (src);
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin()
		{return (this->c.begin());}
	iterator	end()
		{return (this->c.end());}
};

#endif