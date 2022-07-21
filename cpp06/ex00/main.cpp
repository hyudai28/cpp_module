#include "scalar.h"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error.\n  Invalid arguments" << std::endl;
        return (1);
    }
    scalar_print(argv[1]);
}