#include "Karen.hpp"
#include <iostream>

int	main()
{
	Karen karen;
	std::cout << "debug" << std::endl;
	karen.complain("DEBUG");
	std::cout << "info" << std::endl;
	karen.complain("INFO");
	std::cout << "WARNING" << std::endl;
	karen.complain("WARNING");
	std::cout << "ERROR" << std::endl;
	karen.complain("ERROR");

	std::cout << "dust" << std::endl;
	karen.complain("dust");
}