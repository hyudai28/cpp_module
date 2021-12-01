#ifndef wHATEVER_HPP
# define wHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T& min(const T& a, const T& b)
{
	std::cout << "my MIN" << std::endl;
	return (a > b ? b : a);
}

template <typename T>
const T& max(const T& a, const T& b)
{
	std::cout << "my MAX" << std::endl;
	return (a > b ? a : b);
}

#endif