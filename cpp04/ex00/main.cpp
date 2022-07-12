
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "------wrong test-----" << std::endl;

	const WrongAnimal *wrongmeta = new WrongAnimal();
	const WrongAnimal *k = new WrongCat();
	std::cout << std::endl;
	wrongmeta->makeSound();
	k->makeSound();
	delete wrongmeta;
	delete k;
}