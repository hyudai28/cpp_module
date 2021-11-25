#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* ary, size_t length, void(*f)(T &))
{
	for (size_t i=0; i < length;i++)
		(*f)(ary[i]);
}

template <typename T>
void	iter(const T* ary, size_t length, void(*f)(const T &))
{
	for (size_t i=0; i < length;i++)
		(*f)(ary[i]);
}

template <typename T>
void	ft_print(const T & chr){std::cout <<  chr << std::endl;}
template <typename T>
void	ft_print(T & chr){std::cout << chr << std::endl;}

#endif