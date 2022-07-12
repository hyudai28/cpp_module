
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
// #include <stdlib.h>
// #include <mcheck.h>


int main()
{
	//Animal anima;
	const Animal* j = new Dog();
	const Animal*i = new Cat();

	delete j;
	delete i;
}