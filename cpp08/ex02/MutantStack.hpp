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
		return std::stack<T>::operator=(*this, src);
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator c_iterator;
	iterator	begin()
		{return (this->c.begin());}
	iterator	end()
		{return (this->c.end());}
	iterator	rbegin()
		{return (this->c.rbegin());}
	iterator	rend()
		{return (this->c.rend());}

	c_iterator	begin() const
		{return (this->c.begin());}
	c_iterator	end() const
		{return (this->c.end());}
	c_iterator	rbegin() const
		{return (this->c.rbegin());}
	c_iterator	rend() const
		{return (this->c.rend());}
};

#endif