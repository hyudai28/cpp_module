
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	//Animal an;
	//const Animal* j = new Dog();
	//const Animal*i = new Cat();

	//delete j;
	//delete i;
	//Animal as;
	//Animal *pas = new Animal();
	// int animal_count = 5;
	// Animal *animals[animal_count];
	// for (int i = 0; i < animal_count ; i++)
	// {
	// 	std::cout << i << " = new animals!" << std::endl;
	// 	if (i % 2)
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// }
	// std::cout << "\nmake sound!\n" << std::endl;
	// for (int i = 0; i < animal_count; i++)
	// 	animals[i]->makeSound();
	// std::cout << "\ndelete animals!\n" << std::endl;
	// for (int i = 0; i < animal_count; i++)
	// 	delete animals[i];

	std::cout << "\n-----deep copy check----\n" << std::endl;
	Dog basic;
	std::cout << "-----" << std::endl;
	{
		Dog tmp = basic;
		std::cout << std::endl;
	}

		 std::cout << std::endl;

	//std::cout << "---------virtual destructor test--------\n" << std::endl;
	//{
	//	Animal *ani = new Cat();
	//	std::cout << ani->getType() << std::endl;
	//	delete ani;
	//}
}