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

	try
	{
		Span over = Span(1);
		over.addNumber(1);
		std::cout << "a" << std::endl;
		over.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	{
		try
		{

			Span numbers = Span(10);
			numbers.addNumber(20);
			numbers.addNumber(30);
			numbers.addNumber(40);
			numbers.addNumber(50);
			std::vector<int> number;
			number.push_back(1);
			number.push_back(2);
			number.push_back(3);
			number.push_back(4);
			numbers.addNumbers(number);
			std::cout << numbers.longestSpan() << std::endl;

			std::cout << "error case" << std::endl;
			numbers.addNumbers(number);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		Span one = Span(10);
		one.addNumber(20);
		try
		{
			std::cout << one.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "size maybe one" << std::endl;
	}

	return 0;
}