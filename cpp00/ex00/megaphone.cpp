#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::flush;
	}
	for (int i = 1;i < argc;i++)
	{
		for (int y = 0;argv[i][y];y++)
			std::cout << static_cast<char>(std::toupper(argv[i][y]));
	}
	std::cout << std::endl;
}
