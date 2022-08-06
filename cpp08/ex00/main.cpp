#include "easyfind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> v;
	int	org_data[] = {4, 5, 6};
	const std::vector<int> data(org_data, org_data + 3);

	std::cout << easyfind(data, 4) << std::endl;
	std::cout << easyfind(data, 5) << std::endl;
	std::cout << easyfind(data, 6) << std::endl;
	std::cout << easyfind(data, 50) << std::endl;
	std::cout << easyfind(v, 5) << std::endl;

}