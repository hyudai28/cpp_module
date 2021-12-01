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
	this->get_Contact_params(index, FSTNAME);
	this->get_Contact_params(index, LSTNAME);
	this->get_Contact_params(index, PHNNUM);
	this->get_Contact_params(index, NCKNAME);
	this->get_Contact_params(index, DRKSCRT);
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


