#ifndef TABLE_HPP 
# define TABLE_HPP

#include <iostream>

class Table
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Table();
		std::string get_firstName();
		std::string get_lastName();
		std::string get_nickName();
		std::string get_phoneNumber();
		std::string get_darkestSecret();
		void set_firstName(std::string input);
		void set_lastName(std::string input);
		void set_nickName(std::string input);
		void set_phoneNumber(std::string input);
		void set_darkestSecret(std::string input);
};

#endif