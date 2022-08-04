#include "Span.hpp"
#include <vector>
#include <stdlib.h>

#define MAX_NUM 100000

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	{
		//max_test
		Span max = Span(MAX_NUM);
		srand(time(NULL));
		for (int i = 0; i < MAX_NUM; i++)
		{
			const int value = rand();
			max.addNumber(value);
		}
		std::cout << max.shortestSpan() << std::endl;
		std::cout << max.longestSpan() << std::endl;
	}


	return 0;
}