#include "phonebook.hpp"

void	Phonebook::get_table_params(int table_i, int identifier)
{
	std::string str;
	if (identifier == INDEX)
	{
		std::cout << "|         " << table_i % 8;
		return ;
	}
	else if (identifier == FSTNAME)
		str = this->table[table_i % 8].get_firstName();
	else if (identifier == LSTNAME)
		str = this->table[table_i % 8].get_lastName();
	else if (identifier == PHNNUM)
		str = this->table[table_i % 8].get_nickName();
	else if (identifier == NCKNAME)
		str = this->table[table_i % 8].get_phoneNumber();
	else if (identifier == DRKSCRT)
		str = this->table[table_i % 8].get_darkestSecret();
	output_items(str);
}

Phonebook::Phonebook()
{
	std::cout << "phonebook constructor" << std::endl;
	tableIndex = 0;
}

Table::Table()
{
	std::cout << "table constructor" << std::endl;
}