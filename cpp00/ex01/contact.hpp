#ifndef Contact_HPP 
# define Contact_HPP

#include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
		bool		done;
	public:
		Contact();
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