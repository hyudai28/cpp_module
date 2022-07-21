#include "scalar.h"

void	convert_int(std::string num)
{
	std::cout << "int : ";
	std::cout << std::atoi(num.c_str()) << std::endl;
}

void	convert_float(std::string num)
{
	float f_num = std::strtof(num.c_str(), NULL);

	std::cout << "float : ";
	if (f_num - static_cast<int>(f_num) == 0)
	{
		std::cout << f_num << ".0f" << std::endl;
		return ;
	}
	std::cout << f_num << "f" << std::endl;
}

void	convert_double(std::string num)
{
	double d_num = std::atof(num.c_str());

	std::cout << "double : ";
	if (d_num - static_cast<int>(d_num) == 0)
	{
		std::cout << d_num << ".0" << std::endl;
		return ;
	}
	std::cout << d_num << std::endl;
}

void	scalar_print(char * argv)
{
	std::cout << "char : " << argv << std::endl;
	convert_int(argv);
	convert_float(argv);
	convert_double(argv);
}