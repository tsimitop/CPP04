#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// void	leaks(void)
// {
// 	system("leaks exec");
// }

int main()
{
	// atexit(&leaks);
	int	counter = 6;
	int i = 0;

	// const Animal* j = new Dog();
	// const Animal* k = new Cat();
	Animal* fillAnimal[counter];

	for (i = 0; i < (counter / 2); i++)
		fillAnimal[i] = new Dog();

	// int n = 0;	//Fill brain with ideas if you like
	// for (i = 0; i < (counter / 2); i++) //fill dog brain
	// {
	// 	for (n = 0; n < 100; n++)
	// 		fillAnimal[i]->setIdeas("Dog ideas, bark bark\n");
	// }


	for (i = (counter / 2); i < counter; i++)
		fillAnimal[i] = new Cat();

	for (i = 0; i < counter; i++)
		fillAnimal[i]->makeSound(); //Dog sound

	for (i = 0; i < counter; i++)
		delete fillAnimal[i]; //Cat sound

	// j->makeSound();
	// k->makeSound();

	// delete j;//should not create a leak
	// delete k;
	return 0;
}
