#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void	leaks(void)
{
	system("leak exec");
}

int main()
{
	atexit(&leaks);
	int	counter = 2;
	int i = 0;
	int n = 0;

	// const Animal* j = new Dog();
	// const Animal* k = new Cat();
	Animal* fillAnimal[counter];

	for (i = 0; i < (counter / 2); i++)
		fillAnimal[i] = new Dog();
	for (i = 0; i < (counter / 2); i++)
	{
		for (n = 0; n < 100; n++)
			fillAnimal[i]->setIdeas("Dog ideas, bark bark");
			// fillAnimal[i]->printIdeas();
	}


	for (i = (counter / 2); i < counter; i++)
		fillAnimal[i] = new Cat();

	for (i = 0; i < counter; i++)
		fillAnimal[i]->makeSound();

	for (i = 0; i < counter; i++)
		delete fillAnimal[i];

	// j->makeSound();
	// k->makeSound();

	// delete j;//should not create a leak
	// delete k;
	return 0;
}
