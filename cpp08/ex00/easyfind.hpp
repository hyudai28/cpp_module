#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T &cntn, int n)
{
	typename T::iterator itr = std::find(cntn.begin(), cntn.end(), n);
	if (itr == cntn.end())
		return (-1);
	return *itr;
}

#endif