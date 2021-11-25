#include "phonebook.hpp"



void	Phonebook::add_input(Phonebook phonebook, int identifier, std::string message)
{
	std::string input;
	std::cout << message << std::endl;
	// std::cin >> input;
	std::getline(std::cin, input);
	if (std::cin.eof())
		std::exit(0);
	if (identifier == FSTNAME)
		table[phonebook.tableIndex % 8].set_firstName(input);
	else if (identifier == LSTNAME)
		table[phonebook.tableIndex % 8].set_lastName(input);
	else if (identifier == NCKNAME)
		table[phonebook.tableIndex % 8].set_nickName(input);
	else if (identifier == PHNNUM)
		table[phonebook.tableIndex % 8].set_phoneNumber(input);
	else if (identifier == DRKSCRT)
		table[phonebook.tableIndex % 8].set_darkestSecret(input);
}

void	Phonebook::phonebook_add(Phonebook phonebook)
{
	std::cout << "The program will prompt the user to input a new phonebook’s information, one field at a time, until every field is accounted for" << std::endl;
	std::cout << "------------------------" << std::endl;
	add_input(phonebook, FSTNAME, "first name?");
	add_input(phonebook, LSTNAME, "last name?");
	add_input(phonebook, PHNNUM, "phone number?");
	add_input(phonebook, NCKNAME, "your nickname?");
	add_input(phonebook, DRKSCRT, "darkest secret?");
}
void	Phonebook::output_test()
{
	std::cout << table[0].get_firstName() << std::endl;
	std::cout << table[1].get_firstName() << std::endl;
}


void	phonebook_search(Phonebook phonebook)
{
	show_table(phonebook);
}




int	main()
{
	Phonebook phonebook;
	
	start_message();
	while (1)
	{
		std::string user_input_command;
		input_wait();
		std::getline (std::cin, user_input_command);
		if (!user_input_command.compare("ADD"))
		{
			phonebook.phonebook_add(phonebook);
			phonebook.tableIndex++;
		}
		else if (!user_input_command.compare("SEARCH"))
			phonebook_search(phonebook);
		else if (!user_input_command.compare("EXIT") || std::cin.eof())
			std::exit(0);
		else
			std::cout << "invalid command, please input again" << std::endl;
	}
}
