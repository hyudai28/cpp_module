#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "contact.hpp"

# define INDEX		0
# define FSTNAME	1
# define LSTNAME	2
# define PHNNUM		3
# define NCKNAME	4
# define DRKSCRT	5

class Phonebook
{
	private:
		Contact Contact[8];

	public:
		Phonebook();
		// ~Phonebook();
		void	get_Contact_params(int Contact_i, int identifier);
		int	ContactIndex;
		void	phonebook_add(Phonebook phonebook);
		void	add_input(Phonebook phonebook, int identifier, std::string message);
		void	output_test();
		void	detaile_show(int index);
};

//main
void	phonebook_search(Phonebook phonebook);

//search
void	show_Contact(Phonebook phonebook);
void	output_items(std::string str);
void	ft_endline();


void	input_wait();
void	start_message();
#endif