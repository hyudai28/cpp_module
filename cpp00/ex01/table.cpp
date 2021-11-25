#include "phonebook.hpp"

std::string Table::get_firstName()
{
	return (firstName);
}
std::string Table::get_lastName()
{
	return (lastName);
}
std::string Table::get_nickName()
{
	return (nickName);
}
std::string Table::get_phoneNumber()
{
	return (phoneNumber);
}
std::string Table::get_darkestSecret()
{
	return (darkestSecret);
}

void Table::set_firstName(std::string input)
{
	firstName = input;
}
void Table::set_lastName(std::string input)
{
	lastName = input;
}
void Table::set_nickName(std::string input)
{
	nickName = input;
}
void Table::set_phoneNumber(std::string input)
{
	phoneNumber = input;
}
void Table::set_darkestSecret(std::string input)
{
	darkestSecret = input;
}