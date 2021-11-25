#include "phonebook.hpp"



void	show_table(Phonebook phonebook)
{
	std::cout << phonebook.tableIndex << std::endl;
	std::string head = "-------------------------------------------------------";
	std::cout << head << std::endl;
	output_items("index");
	output_items("firstName");
	output_items("lastName");
	output_items("nickname");
	output_items("darkest secret");
	ft_endline();
	for(int x = 0;x < phonebook.tableIndex && x < 8;x++)
	{
		phonebook.get_table_params(x, INDEX);
		phonebook.get_table_params(x, FSTNAME);
		phonebook.get_table_params(x, LSTNAME);
		phonebook.get_table_params(x, NCKNAME);
		phonebook.get_table_params(x, DRKSCRT);
		ft_endline();
	};
}

void	output_items(std::string str)
{
	if (str.length() < 10)
		std::cout << "|" << std::setw(10) << str;
	else
		std::cout << "|" << str.substr(0, 9) << ".";
}

void	ft_endline()
{
	std::string head = "-------------------------------------------------------";
	std::cout << "|" << std::endl;
	std::cout << head << std::endl;
}

