#include "Karen.hpp"
#include <iostream>

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;

}
void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;

}
void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;

}

void	Karen::complain( std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*func[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	for (int i = 1; i <= 4;i++)
	{
		switch ((level == levels[i - 1] ? 1 : 0) * i)
		{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*func[0])();
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			(this->*func[1])();
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*func[2])();
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*func[3])();
			std::cout << std::endl;
			std::exit(0);
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	std::exit(-1);
}

Karen::Karen()
{
}

Karen::~Karen()
{
}

