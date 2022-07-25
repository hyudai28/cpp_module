#include "scalar.h"

int	isNumber(std::string num)
{
	const char *char_num = num.c_str();
	for (int i = 0;char_num[i];i++)
	{
		if (!isdigit(char_num[i]))
			return (1);
	}

	return (0);
}

void	convert_int(std::string num)
{
	float f_num = std::strtof(num.c_str(), NULL);

	std::cout << "int : ";
	if (f_num - static_cast<int>(f_num) == 0)
	{
		if (isNumber(num))
		{
			std::cout << "number...?" << std::endl;
			return;
		}
	}
	std::cout << std::atoi(num.c_str()) << std::endl;
}

void	convert_float(std::string num)
{
	float f_num = std::strtof(num.c_str(), NULL);

	std::cout << "float : ";
	if (f_num - static_cast<int>(f_num) == 0)
	{
		if (isNumber(num))
			std::cout << "number...?" << std::endl;
		else
			std::cout << f_num << ".0f" << std::endl;
		return;
	}
	std::cout << f_num << "f" << std::endl;
}

void	convert_double(std::string num)
{
	double d_num = std::atof(num.c_str());

	std::cout << "double : ";
	if (d_num - static_cast<int>(d_num) == 0)
	{
		if (isNumber(num))
			std::cout << "number...?" << std::endl;
		else
			std::cout << d_num << ".0" << std::endl;
		return;
	}
	std::cout << d_num << std::endl;
}

void	convert_char(std::string num)
{
	double d_num = std::atoi(num.c_str());

	std::cout << "char : ";
	if (isNumber(num))
		std::cout << "number...?" << std::endl;
	else if (!isprint(d_num))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d_num) << "'" << std::endl;
}

void	scalar_print(char * argv)
{
	convert_char(argv);
	convert_int(argv);
	convert_float(argv);
	convert_double(argv);
}