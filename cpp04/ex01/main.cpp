
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

//#include <mcheck.h>


int main()
{
	//mtrace();
	//const Animal* j = new Dog();
	//const Animal*i = new Cat();

	//delete j;
	//delete i;
	//Animal as;
	//Animal *pas = new Animal();
	int animal_count = 5;
	Animal *animals[animal_count];
	for (int i = 0; i < animal_count ; i++)
	{
		std::cout << i << " = new animals!" << std::endl;
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "\nmake sound!\n" << std::endl;
	for (int i = 0; i < animal_count; i++)
		animals[i]->makeSound();
	std::cout << "\ndelete animals!\n" << std::endl;
	for (int i = 0; i < animal_count; i++)
		delete animals[i];

	// std::cout << std::endl;
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// 	std::cout << std::endl;
	// }

	// 	std::cout << std::endl;

	//muntrace();
	//system("leaks catAndDogHasABrain");
}