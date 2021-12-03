#include "phonebook.hpp"

void	show_Contact(Phonebook phonebook)
{
	std::cout << phonebook.ContactIndex << std::endl;
	std::string head = "-------------------------------------------------------";
	std::cout << head << std::endl;
	output_items("index");
	output_items("firstName");
	output_items("lastName");
	output_items("nickname");
	output_items("darkest secret");
	ft_endline();
	for(int x = 0;x < phonebook.ContactIndex && x < 8;x++)
	{
		phonebook.get_Contact_params(x, INDEX);
		phonebook.get_Contact_params(x, FSTNAME);
		phonebook.get_Contact_params(x, LSTNAME);
		phonebook.get_Contact_params(x, NCKNAME);
		phonebook.get_Contact_params(x, DRKSCRT);
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

void	phonebook_search(Phonebook phonebook)
{
	std::string input;

	show_Contact(phonebook);
	while (1)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			std::exit(0);
		if (input.length() == 1)
		{
			int num = input[0] - '0';
			if (0 <= num && num <= 8)
			{
				phonebook.detaile_show(num);
				return ;
			}
		}
		std::cout << "invalid number" << std::endl;
	}
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
			phonebook.ContactIndex = (phonebook.ContactIndex + 1) % 8;
		}
		else if (!user_input_command.compare("SEARCH"))
			phonebook_search(phonebook);
		else if (!user_input_command.compare("EXIT") || std::cin.eof())
			std::exit(0);
		else
			std::cout << "invalid command, please input again" << std::endl;
	}
}