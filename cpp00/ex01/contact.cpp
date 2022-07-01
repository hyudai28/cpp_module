#include "phonebook.hpp"

std::string Contact::get_firstName()
{
	return (firstName);
}
std::string Contact::get_lastName()
{
	return (lastName);
}
std::string Contact::get_nickName()
{
	return (nickName);
}
std::string Contact::get_phoneNumber()
{
	return (phoneNumber);
}
std::string Contact::get_darkestSecret()
{
	return (darkestSecret);
}

void Contact::set_firstName(std::string input)
{
	firstName = input;
}
void Contact::set_lastName(std::string input)
{
	lastName = input;
}
void Contact::set_nickName(std::string input)
{
	nickName = input;
}
void Contact::set_phoneNumber(std::string input)
{
	phoneNumber = input;
}
void Contact::set_darkestSecret(std::string input)
{
	darkestSecret = input;
}
Contact::Contact()
{
	//std::cout << "Contact constructor" << std::endl;
}