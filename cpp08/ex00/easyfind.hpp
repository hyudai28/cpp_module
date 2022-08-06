#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(const T &cntn, int n)
{
	typename T::const_iterator itr = std::find(cntn.begin(), cntn.end(), n);
	if (itr == cntn.end())
		return (-1);
	return *itr;
}

#endif