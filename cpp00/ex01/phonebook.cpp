#include "phonebook.hpp"


//空の情報を受け取ってしまう
void	Phonebook::add_input(Phonebook phonebook, int identifier, std::string message)
{
	std::string input;
	while (1)
	{
		std::cout << message << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			std::exit(0);
		if (input.length() != 0)
			break ;
		std::cout << "????" << std::endl;
	}
	if (identifier == FSTNAME)
		Contact[phonebook.ContactIndex % 8].set_firstName(input);
	else if (identifier == LSTNAME)
		Contact[phonebook.ContactIndex % 8].set_lastName(input);
	else if (identifier == NCKNAME)
		Contact[phonebook.ContactIndex % 8].set_nickName(input);
	else if (identifier == PHNNUM)
		Contact[phonebook.ContactIndex % 8].set_phoneNumber(input);
	else if (identifier == DRKSCRT)
		Contact[phonebook.ContactIndex % 8].set_darkestSecret(input);
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
	std::cout << Contact[0].get_firstName() << std::endl;
	std::cout << Contact[1].get_firstName() << std::endl;
}

void	Phonebook::detaile_show(int index)
{
	std::cout << "first name	:" << this->Contact[index % 8].get_firstName() << std::endl;
	std::cout << "last name	:" << this->Contact[index % 8].get_lastName() << std::endl;
	std::cout << "nick name	:" << this->Contact[index % 8].get_nickName() << std::endl;
	std::cout << "phone number	:" << this->Contact[index % 8].get_phoneNumber() << std::endl;
	std::cout << "darkest seacret	:" << this->Contact[index % 8].get_darkestSecret() << std::endl;
}


void	Phonebook::get_Contact_params(int Contact_i, int identifier)
{
	std::string str;
	if (identifier == INDEX)
	{
		std::cout << "|         " << Contact_i % 8;
		return ;
	}
	else if (identifier == FSTNAME)
		str = this->Contact[Contact_i % 8].get_firstName();
	else if (identifier == LSTNAME)
		str = this->Contact[Contact_i % 8].get_lastName();
	else if (identifier == PHNNUM)
		str = this->Contact[Contact_i % 8].get_nickName();
	else if (identifier == NCKNAME)
		str = this->Contact[Contact_i % 8].get_phoneNumber();
	else if (identifier == DRKSCRT)
		str = this->Contact[Contact_i % 8].get_darkestSecret();
	output_items(str);
}

Phonebook::Phonebook()
{
	std::cout << "phonebook constructor" << std::endl;
	ContactIndex = 0;
}


