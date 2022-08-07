#include "Span.hpp"

Span::Span(/* args */)
{
	this->_N = 0;
}

Span::Span(unsigned int N)
{
	this->_N = N;
}

Span::~Span()
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span& Span::operator=(const Span &src)
{
	if (this == &src)
		return (*this);
	this->_N = src._N;
	this->number = src.number;
	return (*this);
}

void	Span::addNumber(int addNum)
{
	if (this->number.size() >= this->_N)
		throw std::length_error("Span size is full.");
	this->number.push_back(addNum);
}

void	Span::addNumbers(std::vector<int> v)
{
	if (this->number.size() + v.size() > this->_N)
		throw std::length_error("Span size is full.");
	this->number.insert(this->number.end(), v.begin(), v.end());
}

unsigned int		Span::shortestSpan()
{
	if (this->number.size() <= 1)
		throw std::length_error("Span size is zero, or 1.");

	std::sort(this->number.begin(), this->number.end());
	unsigned int ret = this->number[1] - this->number[0];
	// std::cout << "start" << std::endl;
	// std::cout << ret << " = " << this->number[1] << " - " << this->number[0] << std::endl;
	for (int i=1; i + 1 < static_cast<int>(this->number.size()); i++)
	{
		if (ret > static_cast<unsigned int>(this->number[i + 1] - this->number[i]))
		{
			ret = static_cast<unsigned int>(this->number[i + 1] - this->number[i]);
			// std::cout << ret << " = " << this->number[i + 1] << " - " << this->number[i] << std::endl;
		}
	}
	return (ret);
}

unsigned int		Span::longestSpan()
{
	if (this->number.size() <= 1)
		throw std::length_error("Span size is zero, or 1.");
	return (*std::max_element(this->number.begin(), this->number.end()) -\
		*std::min_element(this->number.begin(), this->number.end()));
}