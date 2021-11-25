#include "phonebook.hpp"

void	input_wait()
{
	const char *s = 
	"\nwaiting for your input\n"
	"-ADD\n"
	"-SEARCH\n"
	"-EXIT\n";
	std::cout << s << std::endl;
}

void	start_message()
{
	std::cout << "\n\nWelcome to 1980s phonebook application\n\n" << std::endl;
}

