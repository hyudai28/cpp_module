#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
	/* data */
	std::vector<int> number;
	unsigned int _N;
public:
	Span(/* args */);
	Span(unsigned int N);
	Span(Span const &src);
	~Span();
	Span	&operator=(const Span &src);
	void	addNumber(int addNum);
	int		shortestSpan();
	int		longestSpan();
};

#endif