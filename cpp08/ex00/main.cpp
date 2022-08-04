#include "easyfind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> v;
	std::vector<int> data(1, 5);

	std::cout << easyfind(data, 5) << std::endl;
	std::cout << easyfind(v, 5) << std::endl;

}