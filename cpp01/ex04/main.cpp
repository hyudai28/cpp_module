#include <iostream>
#include <fstream>
#include <string>

void	arg_check_ex04(int argc, char **argv)
{
	std::ifstream ifs(argv[1]);

	if (argc != 4)
	{
		std::cerr << "arg error!\nUSAGE. ./SED_IS_FOR_LOSERS [contents to filename] [changed string] [new string]" << std::endl;
		std::exit (-1);
	}
	else if (ifs.fail())
	{
		std::cerr << "Failed to open file." <<std::endl;
		std::exit(-1);
	}
}

std::string	replaceStr(std::string str, std::string target, std::string src)
{
	for (int i=0;str[i];i++)
	{
		i = str.find(target, i);
		if (i == static_cast<int>(std::string::npos))
			break ;
		str.erase(i, target.length());
		str.insert(i, src);
		i += src.length();
	}
	return (str);
}

void	file_output(std::string input, std::string target, std::string src)
{
	std::string destFile = input;
	destFile.append(".replace");

	//setting output
	std::ofstream	ofs(destFile);
	std::ifstream	ifs(input);
	std::string		str;
	while (getline(ifs, str))
	{
		ofs<< replaceStr(str, target, src) << std::endl;
	}
}

int	main(int argc, char **argv)
{
	arg_check_ex04(argc, argv);
	file_output(argv[1], argv[2], argv[3]);
}