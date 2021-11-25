#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private:
		unsigned int _N;
		T			*_tArray;
	public:
		Array<T>(unsigned int n):_N(n){_tArray = new T[n];}
		Array<T>():_N(0){_tArray = new T();}
		Array<T>(Array<T> const &src){*this = src;}
		~Array<T>(){delete [] _tArray;}

		class accessOutArray: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("The index should be less than the number of elements");
			}
		};

		unsigned int size() const{return _N;}


		Array<T> &operator=(const Array &src)
		{
			_N = src.size();
			_tArray = new T[src.size()];
			for (unsigned int i = 0; i < size(); i++)
				_tArray[i] = src._tArray[i];
			return (*this);
		}

		T &operator[](unsigned int i){
			if (i >= size())
				throw accessOutArray();
			return (this->_tArray[i]);
		}
};

#endif