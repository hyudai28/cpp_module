#include "scalar.h"

int	isValid(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	(void)argv;
	return (0);
}

int main(int argc, char **argv)
{
    if (isValid(argc, argv))
    {
        std::cerr << "Error.\n  Invalid arguments" << std::endl;
        return (1);
    }
    scalar_print(argv[1]);
}